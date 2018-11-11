# PWM(Pulse Width Modulation)

 아날로그 신호를 디지털 형태로 나타낸 것이다.

* 프로세서의 디지털 출력으로 아날로그 회로를 제어하는 강력한 기법이다
* 저항에 비해 전력소비를 줄일 수 있다. 
* 아날로그 전압을 디지털 전압으로 공급하는 방식이 PWM방식이다.
* 통신에서 전력제어와 전력 변환에 이르기까지 광범위한 영역에서 사용되고 있다.



##  Prescaler

프리스케일러는 타이머에 공급하는 입력 클럭의 속도를 조절하는 분주기이다.

* 고속의 클럭을 사용하여 타이머를 동작시킬 때 나타나는 문제를 해결하기 위해 내부 클럭을 분주하여 더 느린 클럭을 만들기 위한 것이다. 
* 클럭의 주기를 프리스케일러에 의해 늘려줄 수 있다.
* ex)16MHz클럭에서 Prescaler 값을 16으로 하면 16MHz클럭을 16으로 나누어서 사용하므로 실제 클럭의 주파수는 1MHz이다.



## Counter Period

Counter Period를 설정한다는 것은 어떤 기준점(한계점)을 설정한다는 것이다.  

Timer 레지스터는 클럭 펄스가 한 번 실행될 때마다 자동으로 레지스터 값이 1만큼 증가된다. Timer 레지스터가 점점 증가하다가 그 값이 Counter Period의 값과 똑같아 지면 다시 Timer 레지스터가 0으로 초기화 된다.

**AutoReload Register** : Timer레지스터의 값이 Counter Period와 같아지면 0으로 초기화 된다는 것을 의미한다.



## Pulse

 매우 짧은 시간 동안에 흐르는 신호용의 약한 전류로서 제어 회로 신호에 사용한다.



## Prescaler와 Counter Period로 PWM의 주기와 주파수 구하기

**PWM Pulse 주파수 공식 **

PWM Pulse Freq = Clock Freq / Prescaler / Counter Period 

ex) Clock Freq = 16MHz, Prescaler = 16, Counter Period = 1000일 때

 기존의 클럭 주파수는 16MHz이고 Prescaler는 16이므로 16MHz를 16으로 나누므로 실제 사용하는 클럭은 1Mz이다. Timer 레지스터는 하나의 클럭 펄스 당 값이 1 증가한다. Counter Period 값을 1000을 설정했으므로 Timer 레지스터의 값이 1000이 되면 하나의 Rising Edge(클럭 신호)가 실행 되므로 1MHz가 1000개 있어야 하나의 PWM Pulse cycle(주기)가 생기므로 PWM Pulse의 주파수는 1MHz / 1000 = 1KHz가 된다.



**PWM Pulse 주기 구하는 법**

 주파수와 주기는 서로 역수 관계이다.  F(주파수) = 1 / 주기(T), T(주기) = 1 / F(주파수)

그러므로 주파수 공식으로 주파수를 구하면 1/주파수 = 주기 이므로 PWM Pulse 주기 값을 알 수 있다.

**용어**

주기: 0과 1이 번갈아 한 번 나타나는 시간

주파수: 1초 당 몇 번이나 0과 1이 변화되었는가.

duty: 펄스 주기에서 ON이 되어있는 비율

****

**참고**

[PWM](http://urin79.com/blog/19224065)

[PWM](https://blog.naver.com/keum0821/221118546969)

***

