#include <stdio.h>

void main()
{
	// 제어문2

	// while 반복문
	// while로 만들 수 있는 건 모두 for로 만들 수 있고 vice versa
	// 쓰는 경우가 다르기보다는 while의 가독성을 좋게 한 게 for이고 실무에서도 for를 더 많이 쓴다.

	//반복 횟수의 결정 요소
	//1. 제어변수의 초기값, 2. 제어조건, 3. 제어변수 연산
	//초기값 i = 0, 제어조건 < n, 변수 연산은 ++을 사용하길 권함. 배열 등에 사용하기 용이.
	//초기값이 0인 건 컴퓨터가 인식하는 첫 숫자가 0이니까.
	//제어조건은 멈추는 조건이 아니라 동작하는 조건이다. i == n이라고 넣으면 애초에 동작을 안 한다!

	//기본 문법
	//int i = 0;
	//while (i < 5)
	//{
	//	printf("%d\n", i);
	//	i++;
	//} //여기서반복문이 끝난 뒤의 i 값은 4가 아니라 5임에 주의 

	//while 안에서 if의 사용
	//int a = 0;
	//int input;

	//while (a < 3)
	//{
	//	printf("Enter num: ");
	//	scanf_s("%d", &input);
	//	if (input % 2 == 0)
	//		printf("%d is a multiple of 2\n", input);
	//	else
	//		printf("%d is not a multiple of 2\n", input);
	//	a++;
	//}

	//무한 반복
	//while (1)
	//{

	//}

	//세미콜론 주의
	//while 뒤에 ;이 들어가면 영원히 아무것도 하지 않는다. 화면에는 커서만 깜빡깜빡.

	//중첩 반복문
	//구구단 
	int dan = 2;
	while (dan < 10)
	{
		printf("%d Dan\n", dan);

		int i = 1; //내부에서 반복할 땐 제어변수도 내부에 둔다! 반복문 하나당 제어변수 하나. 변수 하나를 공유하는 경우도 있으나 예외적.
		while (i < 10)
		{
			printf("%d x %d = %d\n", dan, i, dan * i);
			i++;
		}

		printf("\n");
		dan++;
	}

	//for문
	//while문의 반복횟수 결정요소 세가지(제어변수 초기값, 제어조건, 제어변수 연산)가 멀~~~찍이 떨어지게 되면 한 눈에 반복 횟수를 파악하기 어려워지기 때문에
	//그 3요소를 한 눈에 파악할 수 있게 한 게 for. 새롭다기보다는 개선된 버전이랄까..

	//for(제어변수 초기값; 제어 조건; 제어변수 연산)
	int b;
	for (b = 0; b < 10; b++)
	{
		printf("This is 'for'\n");
	}

	//중괄호 생략 가능
	int bb;
	for (bb = 0; bb < 3; bb++) printf("This is 'for'2 \n");

	//변수 선언 위치에 따른 차이
	//변수를 for문 밖에서 쓰면 광역변수
	//광역변수는 for문 밖에서도 계속 쓸 수 있다. 
	//C언어에서는 원래 for문 밖에서만 변수 선언을 할 수 있지만 VS에서 for 함수 선언할 때 변수선언을 같이 할 수도 있게 해준다.
	int c;
	for (c = 0; c < 3; c++)
	{

	}

	// for문 내부에(선언할 때) 같이 쓰면 지역 변수
	// for문 내부에서만 활용된다. 
	// Java에서는 이게 가능해서 많은 경우에 쓴다.
	for (int d = 0; d < 3; d++);
	{

	}

	//100 이하의 5의 배수 생성기
	int num;

	printf("5의 배수: ");
	for (num = 1; num <= 100; num++)
	{
		if (num % 5 == 0) printf("%3d", num); //중괄호 안에서도 마지막에 세미콜론 필요 
	} printf("Finished\n"); //중괄호만으로도 하나의 독립된 영역이므로 중괄호 뒤에는 ;가 필요 없고 없어도 중괄호 뒤는 다른 영역으로 인식한다.

	//함수 선언에 각 항 없이 세미콜론만 넣어줘도 동작한다.
	/*for (;;)
	{

	}*/ //이러면 무한 반복. while은 조건에 1이나 0이라도 써줘야 하는데 for는 제어조건(둘째 항)에 1을 넣으면 무한, 0을 넣으면 동작하지 않고, 공란이어도 무한.

	//일부만 넣어주고 외부 변수를 가져와도 된다.
	int e;
	e = 0;
	for (; e < 3; e++);


	//do while
	//일단 1회 동작하는 while
	//사용자가 잘못된 값을 넣으면 다시 입력하라고 while로 반복 요청해야 하는데 이 질문을 while 앞에 한번 더 써줘야 하는 게 불편. 이 때  do while을 쓴다.
	int score;

	printf("input: "); //중복
	scanf_s("%d", &score); //중복
	while (score < 0 || score > 100)
	{
		printf("input: "); //중복
		scanf_s("%d", &score); //중복
	}

	printf("Your score is %d \n", score);

	//위 while문을 do while로 바꾸면
	int score2;
	
	do
	{
		printf("input: "); //중복
		scanf_s("%d", &score2); //중복
	} 
	while (score2 < 0 || score2 > 100);
	
	printf("Your score2 is %d \n", score2);

	//while VS for
	//for는 반복 회차를 한 눈에 파악하기 용이하기 때문에
	//반복의 회차(변수든 상수등)가 정해져 있다면 for문, 
	//반복의 회차가 정해진 게 아니라 조건이 정해져 있다면 while문을 권장
	//사용자가 입력한 숫자만큼 반복한다? for
	//사용자가 제대로 된 값을 입력할 때까지 반복해서 물어볼 때? while

	//기타제어문
	//break
	//switch와 반복문 종료
	//break;만 쓰면 에러. 앞에 반드시 switch나 반복문 필요.
	for (int i = 0; i < 5; i++)
	{
		if (i == 3) break;
		printf("%d\n", i);
	}
	printf("Done\n\n");

	//continue
	//반복문의 현재 회차 종료 후 다시 반복
	//continue;만 쓰면 에러. 앞에 반드시 switch나 반복문 필요.
	for (int i = 0; i < 5; i++)
	{
		if (i == 2) continue;
		printf("%d\n", i);
	}
	printf("Done\n\n");

	//break를 사용해 사용자가 0을 입력할 때까지 숫자를 계속 입력 받는 예제

	for (int number;;)
	{
		scanf_s("%d", &number);
		printf("number: %d\n", number);

		if (number == 0)
		{	
			printf("Done\n");
			break;
		}
	}
	//int a = 11;
	//printf("%d\n", a);

	//if (a > 0) printf("bigger than 0\n");
	//if (a > 5) printf("bigger than 5\n");
	//if (a > 10) printf("bigger than 10\n"); else printf("lesser than 10\n");
	//if (a > 15) printf("bigger than 15\n"); else if (a > 10) printf("lesser than 15, bigger than 10\n"); else printf("lesser than 15 and also 10\n");

	//printf("Exit");








};