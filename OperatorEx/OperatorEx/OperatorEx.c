#include <stdio.h>

void main()
{
	//Ex 5-2 ~ 12

	//Ex1 
	//int a, b, c;
	//printf("첫번째 정수를 입력하세요 : \n\n");
	//scanf_s("%d", &a);
	//printf("\n두번째 정수를 입력하세요 : \n\n");
	//scanf_s("%d", &b);
	//printf("\n세번째 정수를 입력하세요 : \n\n");
	//scanf_s("%d", &c);
	////% z라는 텍스트가 안 나오는 문제
	//printf("\n첫번째 %d, 두번째 %d, 세번째 %d 입니다. \n", a, b, c);
	//printf("(x + y) * (y + z) / (y % z) = %d", (a + b) * (a + c) / (b % c));

	//Ex2 
	//int a, b, c;
	//printf("input :");
	//scanf_s("%d", &a);

	//printf("input :");
	//scanf_s("%d", &b);

	//// 삼항연산자 결과 자리에 함수를 넣으면 안된다.
	//// 함수를 넣으면 그 함수가 연산자에 의도된 인풋 타입을 뱉을 경우 동작은 하지만 제작자의 연산자 제작 의도에는 맞지 않다.
	//// 연산자이므로 값을 return하는 것이 목표이나 함수 중에는 값을 리턴하지 않는 함수도 있기 때문. 
	//// 어떻게든 작동하게 만들 순 있지만 문법 차원에서나 코드 공유 차원에서도 권장할 수 없다.
	//// 결과로 값이 필요할 때는 삼항연산자, 함수나 제어문이 필요할 때는 IF문을 사용하자.
	////(a <= b) ?
	////	printf("Smaller Number:", a) :
	////	printf("Smaller Number:", b);
	//
	//c = (a <= b) ? a : b;
	//printf("Smaller Number:%d", c);

	//Ex 4
	//큰 값을 하나만 말해줘도 된다고 가정
	//int a, b, c, d;

	//printf("Input three numbers: \n\n");
	//scanf_s("%d %d %d", &a, &b, &c);

	//d = (a >= b) ? a : b;
	//d = (d >= c) ? d : c;
	//printf("\nThe biggest number is: %d", d);
	//		

	//Ex 8
	//int hour, min, sec;

	//printf("Time to Sec Calculator \n");
	//printf("Input current hour, min and sec in the form below\n");
	//printf("(Time:min:sec) : ");
	//scanf_s("%d:%d:%d", &hour, &min, &sec);
	//printf("%d", 3600*hour + 60*min + sec);

	//Ex 9

	//Ex 10
	
	//Ex 7
	//0000(2)~1111(2) 사이인지 인식할 방법이 if문 말고도 있을까?

	//사용자가 0000~1111 사이의 값을 2진수로 입력한다고 가정
	//int num, a, b, c, d, num2 ;
	//printf("Binary to Decimal Converter \n\n");
	//printf("Enter 4-digit binary number between 0000 and 1111 \nNumber: ");
	//scanf_s("%d", &num);
	//a = num / 1000 ;
	//b = (num % 1000) / 100;
	//c = (num % 100) / 10;
	//d = (num % 10);
	//num2 = 8 * a + 4 * b + 2 * c + d;
	//printf("\n%d(2) as decimal is : %d", num, num2);

	//문제5.
	//사용자로 부터 정수 하나를 입력받아라. 입력받은 정수의 절대값을 출력하는 프로그램을 작성하시오.
	//int a = -1; //1111....1110
	//a = a << 1; //1111....1111 1100 
	//a = a >> 1; //?111....1111 1110 음수이므로 1로 채워진다. 이동 연산자로 부호를 없앨 순 없다.
	//printf("%d\n", a);

	//int b, c;
	//scanf_s("%d", &b);
	//c = (b >= 0) ? b : -1*b	;
	//printf("%d", c);

	//문제6.
	/*사용자로부터 한문자를 입력받아라.입력받은 문자가 영어 대문자면 소문자로, 소문자면
		대문자로, 그 밖에 특수문자면 그냥 특수문자 그대로 출력되도록 프로그램을 작성하여 보자.
		[조건(삼항)연산자 사용]*/
	//참고 'A'=65, 'Z'=90, 'a'=97
	// 
	//char letter;

	//printf("enter one character: ");
	//scanf_s("%c", &letter);
	//printf("%d %c \n", letter, letter);

	//letter = (letter < 65) ? letter :
	//	(letter <= 90) ? letter + 32 :
	//	(letter < 97) ? letter:
	//	(letter <= 122) ? letter - 32 :
	//	letter;

	//printf("%d %c \n", letter, letter);

	//문제7.
	//사용자로부터 정수 3개를 입력받아서 정수 3개의 합, 평균, 최대값, 최소값을 구해서 출력하는 프로그램을
	//작성하여 보자.단, 평균은 소수점 2째자리까지만 출력 하자)
	int num1, num2, num3;
	double sum;
	








}