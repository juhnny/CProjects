#include <stdio.h>


//Ex 9-1 Sum�Լ��� ����� �� ������ ���ϴ� ���α׷�
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

//Ex 9-2 �� ���� �Է� �޾� ū ���� ����ϴ� ���α׷�
//int max(int x, int y)
//{
//	if (x > y) return x;
//	else return y;
//}
//
//void main()
//{
//	printf("�� ���� �Է��ϼ���: ");
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//
//	int c = 0;
//	c = max(a, b);
//	
//	printf("�� ū ���� %d �Դϴ�", c);
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
//	printf("---���α׷� ����---\n");
//}
//
//double input()
//{
//	double x; 
//	printf("����: ");
//	scanf_s("%lf", &x);
//	return x;
//}
//
//double divide(double x, double y)
//{
//	if (y != 0) return x / y;
//	else
//	{
//		printf("�ι�° ���� 0�Դϴ�.");
//		return;
//	}
//}
//
//void output(double x)
//{
//	printf("����� %lf �Դϴ�.", x);
//}

//Ex 9-4
//int sum();
//void output(int x);
//
//void main()
//{
//	int result;
//	
//	printf("���α׷� ����\n");
//	printf("���� �� ���� �Է��ϼ���: ");
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
//	printf("����� %d �Դϴ� \n", x);
//}

//Ex 9-5


//Ex 9-6


//Ex 9-7


//Ex 9-8


//Ex 1. ���� �Է� �޾� ���밪 ��ȯ
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

//Ex 2. ���� �䳢 �� ������ �ִ�. �Ѵ��� ������ ��� �ǰ� �� �Ѵ��� ������ ���� �䳢 �� ���� ���´�. 1�� �� ���?
//1 
//1
//1 1
//1 1 1
//1 1 1 1 1
//1 1 1 1 1 1 1 1
//�ٷ� �� �� �ڸ��� ���ϸ� �ȴ�. 

//���� �ʿ�
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


