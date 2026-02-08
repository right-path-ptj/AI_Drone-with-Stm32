
<table> <tr> <td align="center"> <img src="https://github.com/user-attachments/assets/0e1f9deb-e6f5-4392-956f-edd669541747" width="400"/> </td> <td align="center"> <img src="https://github.com/user-attachments/assets/20b94be9-7e6e-4052-98cf-d00f5ecf3d86" width="400"/> </td> </tr> <tr> <td align="center"> <img src="https://github.com/user-attachments/assets/33d1b026-3e3c-4f24-8bff-4872273e2fa7" width="400"/> </td> <td align="center"> <img src="https://github.com/user-attachments/assets/cbf3b274-6350-4333-9834-8f178d84fbaf" width="400"/> </td> </tr> </table>


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
├── Middlewares/    # 드론용 AI 모델 및 추론 스크립트
└── README.md       # 프로젝트 문서



