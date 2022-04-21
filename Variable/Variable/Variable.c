#include <stdio.h>
void main()
	//printf
{	//출력항만 있고 변수가 없을 때. garbage value 쓰레기값을 반환함. 메모리의 아무 위치나 읽어온다. 그래서 때로는 다른 곳에서 선언한 변수를 불러오기도.
	printf("ex1. %d");

	printf("ex2. %d \n");

	printf("ex3. %d \n", 1);

	printf("ex4. %d \n", 1 + 2);

	//숫자는 하나인데 출력 칸이 둘이면
	printf("ex5. %d %d \n", 4);

	//Data Type (변수의) 자료형
	//char 
	char a;
	a = 'A';
	//a = 'Its a';
	printf("char a is %c\n", a);

	int k;
	k = 5;
	printf("int k is %d \n", k);

	float b;
	b = 3.14;
	//컴퓨터에서는 기본적으로 소수는 double로 받아들이므로 소수(double)를 float에 넣으려 하면 warning이 뜬다. 
	//warning이 싫다면 숫자 뒤에 f를 붙여주면 된다.
	printf("float b is %.3f \n", b);
	
	int e = 100;
	int f = 200;
	printf("e, f are %d, %d \n", e, f);
	printf("e + f is %d \n", e + f);
	
	//변수끼리 값 대입이 가능
	e = f;
	printf("e = f 라고 대입하면 e = %d, f = %d \n", e, f);

	//변수 사용 시 주의사항
	//변수를 선언하고 초기화하지 않은 상태에서 생기는 일
	int p;
	//printf("%d =n", p); //c에서는 실행이 되지만 비주얼 스튜디오에서는 에러. garbage value 반환

	int q;
	//q = 10 + p; //값을 넣지 않은 p를 사용하는 에러

	//그래서 변수는 선언하고 바로 값을 대입하는 작업 필요
	int r;
	r = 10;
	//혹은 선언과 동시에 초기화. 사실 엄밀히 말하면 위와 아래는 다르다. 위는 '대입', 아래는 '초기화'
	//int s = 20; 
	//printf("r, w = %d, %d", r, s);
	
	//같은 자료형인 변수를 여러개 만들 때는 축약 가능
	int t;
	int u;
	int v;
	int tt, uu, vv;
	//int aa, float bb; //에러. 자료형이 다를 때 콤마(연결 연산자?) 사용 불가
	int aa = 10, bb, cc = 30; //일부 변수만 초기화 가능

	printf("%d \n", 2147483648);
	
	//char은 C에서 1바이트(ASCII라서)만 할당되어서 유니코드(2바이트)를 사용하는 한글을 대입하면 에러
	char ga = 'a';
	char gb = 'ㄱ';
	printf("%c", ga);
	printf("%c", gb);

	//sizeof() : 메모리 사이즈(byte)를 알려주는 함수
	printf("%d \n", sizeof(char));
	printf("%d \n", sizeof(short));
	printf("%d \n", sizeof(int));
	printf("%d \n", sizeof(long));
	printf("%d \n", sizeof(float));
	printf("%d \n", sizeof(double));
	printf("%d \n", sizeof(50));
	printf("%d \n", sizeof(330000));
	printf("%d \n", sizeof(3.14));
	printf("%d \n", sizeof(a));

	//float과 double의 차이는 소수점 아래 정확도 차이
	float fff = 0.1234567890123456789;
	double ddd = 0.1234567890123456789;
	//기본적으로는 f를 쓰든 long float, lf를 쓰든 6자리까지만 보여준다.
	printf("fff = %f, ddd = %lf \n", fff, ddd);
	//소수점 이하를 표시하도록 서식문자를 써주면 6자리 이후도 볼 수 있다.
	printf("fff = %.10f, ddd = %.10lf \n", fff, ddd);

	//scanf 키보드 입력함수 
	//scanf("입력형식", &변수명)
	//앰퍼샌드 까먹지 말 것!
	//키보드 입력받은 scanf 전에 반드시 입력값을 저장할 변수부터 만들어 놓아야 함
	//scanf 함수에 오류가 많아 scanf_s로 바뀜
	//입력을 끝낸 뒤에는 엔터(줄도 바뀐다)
	int age;
	printf("나이 입력: ");
	scanf_s("%d", &age);
	printf("age: %d살 \n", age);
	
	char sex; char grade;
	printf("성별 입력(m/f): ");
	scanf_s("%c %c", &sex,&grade);//엔터를 문자로 받아서 두 번째 문자로 인식하는 문제
	printf("sex: %c, grade: %c \n", sex, grade);

	//예제1. 구구단 단수를 입력받아 그 단을 출력하는 프로그램
	/*int dan;
	printf("몇 단을 읊어볼까요?: ");
	scanf_s("%d", &dan);
	printf("\n%d단을 출력합니다.\n", dan);
	printf("%d * 1 = %d \n", dan, 1, dan * 1);
	printf("%d * 2 = %d \n", dan, 2, dan * 2);
	printf("%d * 3 = %d \n", dan, 3, dan * 3);
	printf("%d * 4 = %d \n", dan, 4, dan * 4);
	printf("%d * 5 = %d \n", dan, 5, dan * 5);*/

	//예제2. 사용자로부터 2개의 정수를 입력받아 덧셈하는 프로그램
	/*printf("두 수를 입력받아 덧셈하는 프로그램입니다.\n\n");
	int num1, num2, sum;
	printf("첫 번째 숫자를 입력하세요: ");
	scanf_s("%d", &num1);
	printf("두 번재 숫자를 입력하세요: ");
	scanf_s("%d", &num2);
	sum = num1 + num2;
	printf("\n%d + %d = %d", num1, num2, sum);*/

}
