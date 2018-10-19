SBus

===============

* 길이는 25 Byte이며 analog mode는 14ms, highspeed mode는 7ms 마다  1 Byte씩 전송된다.
* 1 Byte = 1 startbit + 8databit + 1 paritybit + 2stopbit
* baudrate = 100000 bit/s이므로 1 bit는 10마이크로초가 걸린다.
* 최상위 비트가 가장 먼저 전송되므로 데이터 "00000000001" = 1024이다.
*  