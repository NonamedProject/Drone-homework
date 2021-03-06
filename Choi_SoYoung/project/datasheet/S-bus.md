# SBUS

## 패킷의 크기
- 25byte길이

## 패킷 전송 주기
- 아날로그모드: 14ms
- 고속모드: 7ms

## 한 바이트의 구성
- 1개의 시작비트 + 8개의 데이터비트 + 1개의 페리티 비트 + 2개의 정지비트
- baudrate는 1000000bit/s
	- 따라서 1개의 비트는 10microseconds가 소요
- startbyte = 11110000b(0xF0)
- DATA(1~22) = CH1~16까지 각각 11bit사용
- flagbyte
- endbyte = 00000000b

## FASSTest 18CH" mode
- "FASSTest 18CH" 모드는 15ms마다 s.bus 프레임을 생성
- 16개 채널과 2개의 디지털(온/오프) 채널, 모든 원격 측정 센서를 사용
-  R7008SB와 함께 "FASSTest 18CH"를 사용하여, 4가지 종류의 내바이트 데이터만 포착
-  표시된 순서대로 회전하여 2비트 0-3 카운터를 형성
	- 높은 순서 비트가 오른쪽에 있음을 기억

## "FASSTest 12CH" mode
- FASSTest 12CH" 모드에서는 6.3ms마다 프레임이 생성 
- 10개의 채널과 2개의 디지털(켜짐/꺼짐) 채널만 허용하며 원격 측정에는 RX 및 Ext Bat 전압만 허용
- 엔디바이트가 00010000으로 고정되어 있다는 점을 제외하면 따라서 FASSTest 12CH 모드만 사용하려는 경우 원래 sbus 코드에서 쉽게 수정할 수 있습니다.