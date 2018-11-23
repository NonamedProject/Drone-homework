# PWM
## Prescaler
- 타이머에 공급하는 입력클럭속도에 대한 분주비
- 그냥 클럭 주파수를 쓰기에는 너무 빠름
	- 따라서 클럭을 조금 줄여서 사용해야함 
	- 이 때 사용하는것 Prescaler 
## Counter Period
- 어떤 기준점(한계점)을 설정
- Timer레지스터가 점점 증가하다가 Counter Period의 값과 같아지면 Timer레지스터가 0으로 초기화
	- 즉 AutoReload되는 순간 PWM Pulse Cycle이 출력
	- 즉 RisingEdge가 실행됨 
## Pulse
- 매우 짧은 시간동안만 흐르는 전류
- 펄스의 유무를 두 값으로 대응시킴으로써 정보전달의 수단으로 사용할 수 있음
## PWM Pulse 주파수 구하기
- 공식: PWM Pulse Freq = ClockFreq/Prescaler/Counter Period
  
ex)   
기존 클럭주파수=32MHz Prescaler=32 따라서 TIM1=1MHz  
Counter Period를 1000으로 설정 == 새로운 PWM Pulse Cycle을 위해서는 1000개의 클럭이 필요  
즉 1MHz/1000 = 1KHz  
  
주파수 = 1/주기 (주파수와 주기는 서로 역수 관계)  
즉 몇초마다 PWM Pulse Cycle이 생기는지도 알 수 있음  
1KHz이므로 1 / 1000초 즉 1ms
