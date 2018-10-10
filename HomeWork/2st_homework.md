### [Drone] 1학년 2주차 방학 과제

* Timer Practice[폴더명 : TIMER_1]
    * 개발툴 : IAR Embedded Workbench
    * 1초 주기의 타이머 인터럽트를 만든 후 그것을 이용하여 LED가 1초 동안 켜지고 1초 동안 꺼지는 것을 반복하는 기능을 구현하시오(main.c)
    * STM32CubeMX 프로젝트의 pdf 파일도 올리기
        * generate code 아이콘 옆에 있는 두루마리 아이콘(generate project report files)을 클릭하면 pdf와 txt 파일이 생깁니다.
    * 타이머 인터럽트의 사용 용도(왜 쓰는가, 어디에 쓰이는가 등등)를 조사하여 md파일로 자유롭게 정리하여 올리기(파일명 : timer_1.md)
    

* C - union[폴더명 : UNION]
    * 개발툴 : 각자 C 개발 시 사용하는 IDE(Dev C++, VS 등등)
    * union에 대해서 조사한 후 md파일로 정리하여 올리기(파일명 : union.md)
        * union의 개념, 특징, 사용 용도 등등 자유롭게 조사
    * 실습 과제
        * union 이용
        * [1] 3.14라는 값의 float형 데이터가 16진수로 어떻게 이루어져있는가(파일명 : union_practice_1.c)
            * union을 이용하여 4byte의 float형 데이터(3.14)를  4개의 1byte짜리 16진수 데이터로 출력하는 소스코드를 작성하시오.
            * HINT : union 안에 float형 데이터를 담을 수 있는 멤버(변수)와 4개의 1byte짜리 데이터를 담을 수 있는 배열을 만드세요.
            * 4개의 1byte짜리 16진수 데이터를 확인하기 위해서는 printf()를 사용하세요.
            * printf를 이용하여 출력한 데이터가 나오는 콘솔 화면을 캡쳐하여 이미지 파일도 같이 올려주세요.(정답 확인용, 파일명 : union_practice_1_answer.jpg, .png 중 하나)
        * [2] '[1]'에서 찾았던 3.14가 16진수로 이루어져 있는 4개의 1byte짜리 데이터를 조합하여 다시 3.14를 만들어서 출력하시오.(파일명 : union_practice_2.c)
            * HINT : 위에서 만든 union 안에 있는 배열에 위에서 찾았던 1byte짜리 데이터 4개를 먼저 넣고 union 안에 있는 float형 멤버에 접근하여 3.14라는 값이 나오는지 확인하세요.
            * float형 데이터 3.14를 확인하기 위해서는 printf()를 사용하세요.
            * printf를 이용하여 출력한 데이터가 나오는 콘솔 화면을 캡쳐하여 이미지 파일도 같이 올려주세요.(정답 확인용, 파일명 : union_practice_2_answer.jpg, .png 중 하나)

* 완성 못한 Password Cracker 과제 
    * 이번주 수요일 21시에 송근재 학생과 행아웃을 통하여 다시 한번 과제를 짚고 넘어간 후 똑같이 금요일까지 다시 과제 완성하여 올리기