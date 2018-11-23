# union
---
## union이란?
- 공동으로 사용한다는 의미를 포함
- 멤버변수끼리 메모리를 공유

### 장점
- 메모리를 공유하므로 메모리를 아낄 수 있다
- 만약 int num에서 하위 1바이트만 가져오고싶을때 num&0xff식의 비트연산을 시도
  그러나 공용체를 사용하면 간단해진다.

### 단점
- 다른 멤버변수에 값을 넣으면 기존의 값은 지워진다.

### 사용용도
- 메모리가 부족할때 많이 사용했지만 요즘은 잘 사용안함
	- 하드웨어 기술이 좋아져서 변수도 우리가 충분히 사용하고 남을 정도로 메모리를 제공하기때문
	- 특정공간을 효율적으로 관리하기 위해
	- 시리얼 통신 또는 TCP/IP통신

### 예시
	union union_t{
    	int num;
        char  a;
    };
![ex1](http://forum.falinux.com/zbxe/files/attach/images/583/509/796/f865b5df48b7387943d3a1fd73b2e1fd.png "ex1")<br><br><br>
	
	union union_t {
    	int num;
    	char a;
    	char b;
    	char c;
    	char d;
	};
![ex2](http://forum.falinux.com/zbxe/files/attach/images/583/509/796/8858f4e3343597866e011acc30428316.png "ex2")<br><br>

	union union_t un;
	un.num  = 0x01;
	un.a    = 0x02;
	un.b    = 0x03;
	un.c    = 0x04;
	un.d    = 0x05;

	printf( "un.num=%x\n", un.num); //결과: 5