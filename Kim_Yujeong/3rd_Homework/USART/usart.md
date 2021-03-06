USART 통신
===============
개념 / 특징
-------------------------
* UART(범용 비동기화 송수신기: Universal asynchronous receiver/transmitter)는 병렬 데이터의 형태를 직렬 방식으로 전환하여 데이터를 전송하는 컴퓨터 하드웨어의 일종
* UART는 일반적으로 EIA RS-232, RS-422, RS-485와 같은 통신 표준과 함께 사용한다.
* UART의 U는 범용을 가리키는데 이는 자료 형태나 전송 속도를 직접 구성할 수 있고 실제 전기 신호 수준과 방식(이를테면 차분 신호)이 일반적으로 UART 바깥의 특정한 드라이버 회로를 통해 관리를 받는다는 뜻이다.
* 통신 데이터는 메모리 또는 레지스터에 들어 있어 이것을 차례대로 읽어 직렬화 하여 통신한다. 최대 8비트가 기본 단위이다.
* UART는 일반적으로 컴퓨터나 주변 기기의 일종으로 병렬 데이터를 직렬화 하여 통신하는 개별 집적 회로이다. 비동기 통신이므로 동기 신호가 전달되지 않는다. 따라서 수신 쪽에서 동기신호를 찾아내어 데이터의 시작과 끝을 시간적으로 알아 처리할 수 있도록 약속되어 있다.

USART 통신에서 동기식(Synchronous)과 비동기식(Asynchronous)의 차이
------------------------------
* UART (Universal Asynchronous Receiver Transmit) : 비동기 모드로서 사용되는 시리얼통신
  * 비동기 통신이므로 데이터를 원할이 송신, 수신하기 위해 동기 신호를 대체하는 방법을 사용해야 한다.
    * 비동기 모드는 별도의 클록을 사용하지 않고 데이터를 송수신하는 모드로 시작 비트(start bit)와 정지 비트(stop bit)를 통해 데이터 동기화가 이루어진다.
  * UART통신은 3가닥의 선을 사용하는데 데이터 수신을 위한 RXD, 데이터 송신을 위한 TXD, 통신 간 전압 기준을 맞추기 위한 GND로 분류된다.
* USART (Universal Synchronus Receiver Transmit) : 동기 모드로서 사용되는 시리얼통신
  *다른 통신에 비해 느리고, 멀리 데이터를 보낼 수는 없지만, 근거리에서 소량의 데이터를 보낼 때 유용한 통신
  *동기 모드는 데이터 동기화를 위해 별도의 클록 신호를 전송한다. AVR에서 데이터 동기화를 위한 클록 신호는 XCK 핀을 통해 전달된다.
  *동기 모드에서는 비동기 모드에서 데이터 동기화를 위해 사용하는 시작 비트(start bit)와 정지 비트(stop bit)는 필요하지 않으므로 데이터 전송 효율을 높일 수 있는 장점이 있지만, 클록 핀을 필요로 하는 단점이 있다.

parity 비트
----------------------------
* 패리티 비트(Parity bit)는 정보의 전달 과정에서 오류가 생겼는지를 검사하기 위해 추가된 비트이다.
* 전송하고자 하는 데이터의 각 문자에 1 비트를 더하여 전송하는 방법으로 2가지 종류의 패리티 비트(홀수, 짝수)가 있다.
  * 짝수(even) 패리티는 전체 비트에서 1의 개수가 짝수가 되도록 패리티 비트를 정하는 것인데, 이를테면 데이터 비트에서 1의 개수가 홀수이면 패리티 비트를 1로 정한다.
  * 홀수(odd) 패리티는 전체 비트에서 1의 개수가 홀수가 되도록 패리티 비트를 정하는 방법이다.
    * 7비트의 0010110라는 데이터에서 짝수 패리티가 되게 하기 위해서는 1의 패리티 비트를 붙여 10010110로 한다. 또 같은 데이터에 대해 홀수 패리티 비트가 되게 하려면 0의 패리티 비트를 붙인다.
      * 패리티 비트를 정하여 데이터를 보내면 받는 쪽에서는 수신된 데이터의 전체 비트를 계산하여 패리티 비트를 다시 계산함으로써 데이터 오류 발생 여부를 알 수 있다. 그러나 패리티 비트는 오류 발생 여부만 알 수 있지 오류를 수정할 수는 없다.
* 시리얼 통신을 하는데 패리티 비트를 추가해서 송수신을 하는 이유는 데이터를 송수신하는 과정에서 각 비트를 단위시간당 보내게 되어 있는데 이 때 알 수 없는 요인에 의해 비트의 값이 틀어졌을 때 이를 확인하기 위함이다.
  * 시리얼 통신을 하면서 데이터가 손실되어 패리티에 의한 데이터 손실이 발생함을 인지하였을 때에는 수신지에서 다시 데이터를 보내달라는 재송신 요청을 할 수 있도록 하는 안정적인 통신을 위한 보호장치
