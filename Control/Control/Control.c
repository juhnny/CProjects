#include <stdio.h>

void main()
{
	// Ch. 제어문 Control

	// 1. 조건문 if
	//if, if else
	int a;
	a = 5;
	if (a > 5)
	{
		printf("A \n");
	}
	else
	{
		printf("B \n");
	}
	printf("\nFinished \n");
	 
	//switch-case
	//분기
	//분기로 이동해서 그 이후 코드도 모두 동작한다.
	//IF문 중 변수가 특정 상수인 경우와 같다. 다만 더 간결하고 오타 가능성도 낮다.
	//진행을 멈추고 싶으면 break 사용. switch는 대부분 break를 써서 활용한다. break을 습관화하자.
	//int와 char 자료형만 가능. short, long도 기본적으론 안되고 VS에서는 가능. 
	//소수점 있는 실수형도 안된다. 내부 매커니즘이 메모리에서 값의 주소를 불러오는 것인데 소수점 숫자에는 메모리 주소가 없다고..
	//매커니즘이 if를 쓸 것 같아도 그렇지 않다.

	int b = 20;
	switch (b)
	{
	case 10: //case 뒤에는 상수만 사용 가능
		printf("case1\n");
	case 20:
		printf("case2\n");
	case 30:
		printf("case3\n");
	case 40:
		printf("case4\n");
		break;
	default: //case들 외의 경우
		printf("end\n");
		break;
	};
	
	char c = 'a';
	switch (c)
	{
	case ('A' || 'a'): //이러면 case 1이 되어 'a'는 default로 빠져나간다.
	case 'A': //여러 케이스를 한 분기로 보낼 때. if문에서는 if(c == 'A' || c == 'a')라고 쓰겠지만 여기서는 더 간단
	case 'a':
		printf("char1\n");
		break;
	case 'B':
	case 'b':
		printf("char2\n");
		break;
	default:
		break;
	}



	//2. 반복문
	//while, do while
	int d;
	while (1)
	{
		int d = 65;
		printf("%c", d);
	};

	//for

	//3. 기타 제어문
	//break
	//switch나 반복문을 멈출 때 쓴다.
	
	//continue
	//goto
	//조건문이나 반복문을 돕는 제어문

	//중괄호 {}는 region을 나타낸다.

	




}