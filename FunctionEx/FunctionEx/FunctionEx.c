#include <stdio.h>


//Ex 9-1 Sum함수를 만들어 두 정수를 더하는 프로그램
//int sum(int x, int y)
//{
//	return x + y;
//}
//
//void main()
//{
//	int c = 0;
//	c = sum(1, 2);
//	printf("Result is %d", c);
//}

//Ex 9-2 두 수를 입력 받아 큰 수를 출력하는 프로그램
//int max(int x, int y)
//{
//	if (x > y) return x;
//	else return y;
//}
//
//void main()
//{
//	printf("두 수를 입력하세요: ");
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//
//	int c = 0;
//	c = max(a, b);
//	
//	printf("더 큰 수는 %d 입니다", c);
//}

//Ex 9-3
//void intro();
//double input();
//double divide(double x, double y);
//void output(double x);
//
//void main()
//{
//	intro();
//	double a, b;
//	a = input();
//	b = input();
//
//	double c = 0;
//	c = divide(a, b);
//	
//	output(c);
//
//}
//
//void intro()
//{
//	printf("---프로그램 시작---\n");
//}
//
//double input()
//{
//	double x; 
//	printf("숫자: ");
//	scanf_s("%lf", &x);
//	return x;
//}
//
//double divide(double x, double y)
//{
//	if (y != 0) return x / y;
//	else
//	{
//		printf("두번째 수가 0입니다.");
//		return;
//	}
//}
//
//void output(double x)
//{
//	printf("결과는 %lf 입니다.", x);
//}

//Ex 9-4
//int sum();
//void output(int x);
//
//void main()
//{
//	int result;
//	
//	printf("프로그램 시작\n");
//	printf("정수 한 개를 입력하세요: ");
//
//	result = sum();
//	output(result);
//
//}
//
//int sum()
//{
//	int num = 0;
//	int sum = 0;
//	scanf_s("%d", &num);
//	for (int i = 1; i <= num; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//
//void output(int x)
//{
//	printf("결과는 %d 입니다 \n", x);
//}

//Ex 9-5


//Ex 9-6


//Ex 9-7


//Ex 9-8


//Ex 1. 숫자 입력 받아 절대값 반환
//double absolute(double x)
//{
//	(x >= 0)? x:-x;
//}
//
//void main()
//{
//	double num;
//	printf("Input : ");
//	scanf_s("%lf", &num);
//
//	printf("Absolut: %lf", absolute(num));
//}

//Ex 2. 새끼 토끼 한 마리가 있다. 한달이 지나면 어른이 되고 또 한달이 지나면 새끼 토끼 한 마리 낳는다. 1년 후 몇마리?
//1 
//1
//1 1
//1 1 1
//1 1 1 1 1
//1 1 1 1 1 1 1 1
//바로 앞 두 자리를 더하면 된다. 

//수정 필요
int rabbit()
{
	int sum = 1;
	for (int i = 0; i < 3; i++)
	{
		sum += sum;
	}
	printf("%d", sum);
}

void main()
{
	rabbit();
}


