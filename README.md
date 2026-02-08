<img width="2752" height="1536" alt="image" src="https://github.com/user-attachments/assets/0e1f9deb-e6f5-4392-956f-edd669541747" />
<img width="1472" height="704" alt="image" src="https://github.com/user-attachments/assets/20b94be9-7e6e-4052-98cf-d00f5ecf3d86" />
<img width="1193" height="747" alt="image" src="https://github.com/user-attachments/assets/33d1b026-3e3c-4f24-8bff-4872273e2fa7" />
<img width="1248" height="832" alt="image" src="https://github.com/user-attachments/assets/cbf3b274-6350-4333-9834-8f178d84fbaf" />

<table> <tr> <td align="center"> <img src="https://github.com/user-attachments/assets/0e1f9deb-e6f5-4392-956f-edd669541747" width="400"/> </td> <td align="center"> <img src="https://github.com/user-attachments/assets/20b94be9-7e6e-4052-98cf-d00f5ecf3d86" width="400"/> </td> </tr> <tr> <td align="center"> <img src="https://github.com/user-attachments/assets/33d1b026-3e3c-4f24-8bff-4872273e2fa7" width="400"/> </td> <td align="center"> <img src="https://github.com/user-attachments/assets/cbf3b274-6350-4333-9834-8f178d84fbaf" width="400"/> </td> </tr> </table>


이 GitHub 저장소의 구성과 내용을 바탕으로 프로젝트의 목적, 주요 기능, 기술 스택 등을 포함한 깔끔한 README.md 템플릿을 작성해 드립니다.

---

# AI Drone with STM32

STM32 마이크로컨트롤러를 기반으로 한 AI 드론 제어 및 비행 시스템 프로젝트입니다. 하드웨어 제어부터 센서 데이터 처리, 인공지능 알고리즘을 활용한 자율 비행 기능을 목표로 합니다.

## 🚀 프로젝트 개요

이 프로젝트는 STM32 칩셋을 사용하여 드론의 기본적인 비행 제어(FC) 시스템을 구축하고, 여기에 AI 기술을 접목하여 장애물 회피, 경로 최적화 또는 객체 추적과 같은 고도화된 기능을 구현하는 것을 목적으로 합니다.

## ✨ 주요 기능

* **STM32 기반 비행 제어:** 안정적인 PID 제어를 통한 비행 안정성 확보.
* **센서 퓨전:** IMU(가속도계, 자이로), 기압계, GPS 등의 데이터를 융합한 정밀 상태 추정.
* **AI 자율 비행:** 온디바이스 AI 또는 외부 모듈 연동을 통한 지능형 비행 결정.
* **실시간 통신:** 지상 제어 스테이션(GCS)과의 원격 데이터 송수신.

## 🛠 기술 스택

* **MCU:** STM32 시리즈 (예: STM32F4, STM32H7 등)
* **Language:** C/C++, Python (AI 모델 학습 및 연동)
* **IDE/Toolchain:** STM32CubeIDE, Keil uVision, 또는 VS Code (PlatformIO)
* **Protocol:** UART, I2C, SPI, CAN, MAVLink

## 📂 폴더 구조

```text
├── Drivers/        # STM32 HAL 및 장치 드라이버
├── Core/           # 메인 로직 및 소스 코드
├── AI_Models/      # 드론용 AI 모델 및 추론 스크립트
├── Hardware/       # 회로도 및 PCB 설계 자료 (필요시)
└── README.md       # 프로젝트 문서

```

## ⚙️ 시작 가이드

### 1. 사전 준비

* STM32CubeIDE 설치
* STM32 보드 및 디버거 (ST-LINK) 준비
* 관련 센서 및 드론 프레임 조립

### 2. 빌드 및 업로드

1. 저장소를 클론합니다.
```bash
git clone https://github.com/right-path-ptj/AI_Drone-with-Stm32.git

```


2. STM32CubeIDE에서 프로젝트를 엽니다.
3. `Build` 아이콘을 클릭하여 컴파일합니다.
4. 보드를 연결하고 `Run` 또는 `Debug`를 통해 펌웨어를 업로드합니다.

## 🤝 기여 방법

1. 이 저장소를 Fork 합니다.
2. 새로운 기능 브랜치를 생성합니다 (`git checkout -b feature/AmazingFeature`).
3. 변경 사항을 Commit 합니다 (`git commit -m 'Add some AmazingFeature'`).
4. 브랜치에 Push 합니다 (`git push origin feature/AmazingFeature`).
5. Pull Request를 생성합니다.

## 📄 라이선스

이 프로젝트는 MIT 라이선스에 따라 라이선스가 부여됩니다. 자세한 내용은 `LICENSE` 파일을 참조하십시오.

## 📧 연락처

* 작성자: [right-path-ptj](https://www.google.com/search?q=https://github.com/right-path-ptj)
* 프로젝트 링크: [https://github.com/right-path-ptj/AI_Drone-with-Stm32](https://www.google.com/search?q=https://github.com/right-path-ptj/AI_Drone-with-Stm32)

---


