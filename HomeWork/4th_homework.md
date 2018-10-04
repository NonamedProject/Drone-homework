### [Drone] 4주차 방학 숙제

* PWM Practice(폴더명 : PWM)
    * PWM에 사용되는 기본적인 개념들 정리(파일명 : pwm.md)
        * CubeMX에서 PWM 세팅 시 나오는 핵심 개념 3가지 Prescaler, Counter Period, Pulse에 대해 조사하여 정리
        * Prescaler, Counter Period를 이용하여 PWM의 주기와 주파수를 구하는 과정 설명하기
            * [송근재 학생의 블로그](https://blog.naver.com/keum0821/221118546969)에서 나오는 PWM 부분을 참고하시면 좋습니다! - 송근재
    * PWM을 이용하여 Nucleo 보드에 있는 LED의 밝기 제어(폴더명 : PWM_PRACTICE)
        * LED가 완전히 꺼져있을 때부터 최대로 밝아질 때까지의 시간을 3초로 설정하기
        * Prescaler를 거치기 전의 타이머 클럭은 32MHz로 설정(APBx timer clocks)
        * PWM의 주기(한 pulse의 길이)를 20ms로 설정
        * 타이머 인터럽트를 이용하여 ISR(타이머 인터럽트가 걸리면 실행되는 함수) 내부에서는 PWM의 duty cycle(PWM의 한 pulse에서 HIGH가 차지하는 비율)을 변경하도록 구현
        * 설정해야 할 타이머 : PWM Pulse 출력용 타이머, 타이머 인터럽트용 타이머

* DataSheet(폴더명 : DATASHEET)
    * 지난 주에 조사했던 데이터시트 이외에 다른 하나를 자유롭게 선택하여 지난 주 방식과 동일하게 조사하여 올리기
    * 파일명 : 모듈/센서 이름.md

* 당부사항
    * PWM 부분이 많이 어려우니 하다가 막히면 꼭 질문하세요!(제발 선배들 좀 굴려줘요)
