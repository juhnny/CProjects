#include <stdio.h>

//함수를 정의
//문법 : 리턴타입 함수명(파라미터(매개변수), ...) {실행문}
//종류: 리턴타입과 파라미터의 유무에 따라 네 종류로 구분
//리턴 X, 파라미터 X
//리턴 X, 파라미터 O
//리턴 O, 파라미터 X
//리턴 O, 파라미터 O
//C 언어에서는 파라미터 생략 허용

//함수를 '호출'할 때 파라미터로 int a를 전달하더라도 전달되는 건 변수 a가 아니라 a의 값이다.
//변수가 파라미터로 전달되는 경우는 절대 없다.

//return은 값을 가지고 함수가 호출되었던 곳으로 복귀
//return으로 둘 이상의 값을 반환할 수 없다.
//return 받은 값을 어느 변수에 대입(=)해서 사용할텐데 대입 연산자는 하나의 변수에만 대입하게 돼있으므로.
//함수를 중단시키고 싶을 때 return을 쓴다. break는 반복문을 하나 빠져나오고 return은 함수를 빠져나온다.
int sum(num1, num2)
{
	//int a, b;
	//a = num1;
	//b = num2;
	//return a + b;
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

char funcA()
{
	return 'A';
}

//함수의 프로토타입
//함수를 main 함수 아래에서 정의하면 그 함수를 인지하지 못하기 때문에 위에서 함수 선언
//함수가 다른 파일에 있을 때도 프로토타입 필요.
//프로토타입들을 헤더 파일에 모아서 헤더만 불러오는 식으로 리팩토링한다.
//프로토타입은 합수 선언부와 동일해야만 했으나 달라도 VS에서 지원, 에러는 안 난다.
//main에서는 프로토타입이 없으면 호출할 때 기본적으로 int를 리턴하는 함수라고 가정. 
//마지막은 세미콜론

char funcB();

void main()
{	
	//C언어는 main에서 시작해서 main에서 끝난다. 
	//만든 함수는 호출하지 않으면 실행되지 않는다.
	//함수명 생성 규칙은 변수명과 같다.
	char i = 'A';
	int a = sum(1, i); // Call by value. 함수에 파라미터를 보낼 때는 원본이 가는 게 아니라 그 값이 가는 것이다. 원본은 절대 전달되지 않는다. 
						//변수 a에 sum이라는 함수를 대입하는 게 아니라 리턴값을 대입하는 것이다.
	printf("%d \n", a);

	int b = sub(2, 5);
	printf("%d \n", b);

	char A = funcA();
	printf("%c \n", A);
	char B = funcB();
	printf("%c \n", B);
	printf("%s \n", "abc");
	
	//다른 소스 파일에 있는 함수
	aaa(); 

	printf("Done");

}
//변수의 종류
//엄밀히 말하면 지역변수와 전역변수 뿐

//지역 변수
//중괄호 영역 안에 선언
//인식범위: 선언된 {} 안에서
//메모리 존재 기간:
//- 생성: 선언되어 있는 함수가 호출되면
//- 소멸: 중괄호가 끝나면, 즉 함수가 종료되면

//함수 A의 int a와 함수 B의 int a는 별개다. 
//함수 A에서 함수 B의 변수를 호출할 수 없다.


//전역 변수 
//중괄호 영역 밖에 선언
//인식범위: 선언된 .c 파일 안에서.
//메모리 존재 기간: 
//- 생성: 프로그램 시작 시. main 함수보다도 먼저.
//- 소멸: 프로그램 종료 시
//전역변수는 선언만 해도 값이 0, 지역변수는 선언만 하면 쓰레기값. 할당되는 메모리 구역이 달라서. 전역변수는 Data영역, 지역변수는 Stack 영역.
//전역에서 a = 10 같은 대입은 불가능(실행문 못 써). int a = 10 같은 초기화는 가능.
//선언만 해도 값이 0이지만 개발자들은 int a = 0 같이 값을 정해주길 선호.

//프로그래밍 하기엔 편하다. 매개변수? 리턴? 왜 해 전역변수 쓰면 되지 
//하지만 메모리를 계속 잡아먹는 게 문제
//main 내 지역변수도 사실상 전역변수 아닌가? 그럼 main 내에서도 변수를 줄이는 게 좋은가?
//전역변수가 전기는 덜 사용하지 않을까? 변수를 썼다가 지웠다 할 필요 없으니까.

//정적 변수 static variable
//정적 지역변수와 정적 전역변수가 있으나 대부분 정적 변수라고 하면 전자를 뜻한다. 보통 변수 하면 지역변수니까.
//static int a; 같이 static을 붙여서 선언
//인식범위: 지역에서 만들면 지역, 전역에서 만들면 전역
//메모리 존재 기간: 전역 변수처럼. 프로그램 시작부터 종료까지.
//즉, 변수를 사용하지 않았어도 메모리 안에 이미 존재하는 변수
//전역변수와 같이 Data 영역에 존재하지만 아무 함수나 쓸 수 없게 제한을 건 개념.


//외부 변수 External
//레지스터 변수



//전역(중괄호 밖)에서는 변수 선언, #include, 프로토타입 선언 세가지만 가능.
//실행문 쓰면 에러

int c = 0; //선언 및 초기화는 가능
//c = 1; //재정의 했다고 에러는 나는데 실행이 안된다는 말은 없네?
//printf("hi");

char funcB()
{
	return 'B';
}

//수학에서 =는 대입 기능이 없다.