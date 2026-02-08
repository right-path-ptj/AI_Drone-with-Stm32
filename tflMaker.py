import pandas as pd
import numpy as np
import tensorflow as tf
from sklearn.model_selection import train_test_split
from tensorflow.keras import layers, models
import re

def load_clean_data(file_path, label):
    data_list = []
    # 인코딩 에러 방지를 위해 errors='ignore' 사용
    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
        for line in f:
            # 숫자로 시작하거나 마이너스로 시작하는 줄만 찾아서 3개의 숫자 추출
            # 예: "0,12,139" 또는 " -1, 5, 120"
            matches = re.findall(r'([-+]?\d+)', line)
            if len(matches) == 3:
                data_list.append([float(x) for x in matches])
    
    if not data_list:
        print(f"경고: {file_path}에서 유효한 데이터를 찾지 못했습니다.")
        return np.array([]), np.array([])
    
    data = np.array(data_list, dtype='float32')
    labels = np.full((len(data),), label)
    print(f"{file_path} 로드 완료: {len(data)}행 데이터 추출됨")
    return data, labels

# 1. 데이터 로드
circle_x, circle_y = load_clean_data('circle.log', 0)
goback_x, goback_y = load_clean_data('goback.log', 1)
stop_x, stop_y = load_clean_data('stop.log', 2)

# 데이터가 비어있지 않은지 확인 후 합치기
all_x = [x for x in [circle_x, goback_x, stop_x] if x.size > 0]
all_y = [y for y in [circle_y, goback_y, stop_y] if y.size > 0]

if not all_x:
    print("에러: 로드된 데이터가 하나도 없습니다.")
    exit()

X = np.concatenate(all_x, axis=0)
y = np.concatenate(all_y, axis=0)

# 2. 모델 구성 및 학습
model = models.Sequential([
    layers.Input(shape=(3,)),
    layers.Dense(32, activation='relu'),
    layers.Dense(16, activation='relu'),
    layers.Dense(3, activation='softmax')
])

model.compile(optimizer='adam', loss='sparse_categorical_crossentropy', metrics=['accuracy'])
print("학습 시작...")
model.fit(X, y, epochs=50, batch_size=32, verbose=1)

# 3. TFLite 변환
converter = tf.lite.TFLiteConverter.from_keras_model(model)
tflite_model = converter.convert()

with open('drone_gesture_model.tflite', 'wb') as f:
    f.write(tflite_model)

print("\n--- 성공! ---")
