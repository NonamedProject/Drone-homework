SBus

===============

* 일종의 직렬 통신 프로토콜이다. 하나의 신호 케이블만 사용하여 최대 18개의 채널을 지원한다.
* SBus는 역전된 UART 통신 신호이다.
* 한 패킷의 크기는 25 Byte이며 analog mode는 14ms, highspeed mode는 7ms 마다  1 Byte씩 전송된다.
* 1 Byte = 1 startbit + 8databit + 1 paritybit + 2stopbit
* baudrate = 100'000 bit/s이므로 1 bit는 10마이크로초가 소요된다.
* 최상위 비트가 가장 먼저 전송되므로 데이터 "00000000001" = 1024이다.
* startbyte = 11110000b (0xF0)
* endbyte = 00000000b