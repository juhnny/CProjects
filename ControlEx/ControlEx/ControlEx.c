#include <stdio.h>

void main()
{
	//Ex.8-2 1부터 100까지 숫자 중 5의 배수 출력
	//int num = 1;
	//printf("5의 배수: ");
	//while (1)
	//{
	//	if (num % 5 == 0)
	//	{
	//		printf("%d ", num);

	//	};
	//	if (num == 100)
	//	{
	//		break;
	//	}
	//	num++;
	//};

	//Ex.8-3
	//int age;
	//
	//printf("나이:");
	//scanf_s("%d", &age);
	//
	//if (age >= 15 && age <= 100)
	//{
	//	printf("회원 가입 축하\n");
	//}
	//else
	//{
	//	printf("회원 가입 불가\n");
	//};
	
	//Ex 2 p.222
	//int num, a, b, c;
	//printf("Enter: \n");
	//scanf_s("%d", &num);
	//a = (num / 100) ;
	//b = ((num % 100) / 10) ;
	//c = num % 10;
	//if (a%2 == 1)
	//{
	//	printf("%d: 홀수 ", a);
	//}
	//else
	//{
	//	printf("%d: 짝수 ", a);
	//};

	//if (b % 2 == 1)
	//{
	//	printf("%d: 홀수 ", b);
	//}
	//else
	//{
	//	printf("%d: 짝수 ", b);
	//};

	//if (c % 2 == 1)
	//{
	//	printf("%d: 홀수 ", c);
	//}
	//else
	//{
	//	printf("%d: 짝수 ", c);
	//};
	
	// Ex.3

	//다시 해보기
	int score;
	while (1)
	{
		printf("Enter score: ");
		scanf_s("%d", &score);
		printf("input: %d\n", score);

		if (score > 0 && score <= 100)
		{
			//printf("%d \n", score);
			switch (score)
			{
			case 100:
			case 99:
			case 98:
			case 97:
			case 96:
			case 95:
			case 94:
			case 93:
			case 92:
			case 91:
			case 90:
				printf("A");
				break;
			case 89:
			case 88:
			case 87:
			case 86:
			case 85:
			case 84:
			case 83:
			case 82:
			case 81:
			case 80:
				printf("B");
				break;
			default:
				printf("F");
				break;
			}
		}

		printf("too big or small number: %d \n", score);
		break;
	};

	//Ex. 4
	//세 정수를 입력받아 가장 큰 값을 출력하는 프로그램
	
	//int a, b, c, result;
	//printf("Enter three integers: ");
	//scanf_s("%d%d%d", &a, &b, &c);
	//if (a >= b)
	//{
	//	if (a >= c)
	//	{
	//		result = a;
	//	}
	//	else
	//	{
	//		result = c;
	//	}
	//}
	//else
	//{
	//	if (b >= c)	result = b;
	//	else result = c;
	//};
	//printf("%d\n", result);




}