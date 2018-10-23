# 타이머 인터럽트(timer interrupt)
---

## 타이머 인터럽트란?
- 인터럽트와 처리가 동일한데 시간이 더해진 형태
	- 인터럽트란?<br>마이크로프로세서(CPU)가 프로그램을 실행하고 있을 때, 입출력 하드웨어 등의 장치나 또는 예외상황이 발생하여 처리가 필요할 경우에 마이크로프로세서에게 알려 처리할 수 있도록 하는 것
- 내부 인터럽트중 하나
- 특정한 시간이 되면 인터럽트가 발생 
- MCU에서 시간을 어떻게 측정하는지가 중요
	- 시간을 측정하기 위해 클럭(Clock)을 카운트

### 모드
- Normal Mode
- CTC Mode
- PWM Mode