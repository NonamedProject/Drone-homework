타이머 인터럽트
=============

타이머 인터럽트
-------------
* 타이머 인터럽트는 내부 인터럽트(소프트웨어 인터럽트)중의 하나로, 특정한 시간이 되면 인터럽트가 발생한다.
* 시간을 측정하기 위해 타이머/카운터를 사용하여 클럭(Clock)을 카운트하여 인터럽트를 발생시킨다.

사용 용도
-------------
* 소프트웨어로는 시간지연을 하기에 정확한 시간을 잴 수 없다.
* 임베디드 시스템에서는 정확한 시간지연이 필요하므로 타이머 인터럽트를 사용
* 외내부 장치 시간제어
* CPU 타이머
* 일정한 시간마다 명령을 내릴 때 주로 사용
