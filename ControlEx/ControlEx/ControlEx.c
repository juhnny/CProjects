#include <stdio.h>

void main()
{
	//Ex.8-2 1���� 100���� ���� �� 5�� ��� ���
	//int num = 1;
	//printf("5�� ���: ");
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
	//printf("����:");
	//scanf_s("%d", &age);
	//
	//if (age >= 15 && age <= 100)
	//{
	//	printf("ȸ�� ���� ����\n");
	//}
	//else
	//{
	//	printf("ȸ�� ���� �Ұ�\n");
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
	//	printf("%d: Ȧ�� ", a);
	//}
	//else
	//{
	//	printf("%d: ¦�� ", a);
	//};

	//if (b % 2 == 1)
	//{
	//	printf("%d: Ȧ�� ", b);
	//}
	//else
	//{
	//	printf("%d: ¦�� ", b);
	//};

	//if (c % 2 == 1)
	//{
	//	printf("%d: Ȧ�� ", c);
	//}
	//else
	//{
	//	printf("%d: ¦�� ", c);
	//};
	
	// Ex.3

	//�ٽ� �غ���
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
	//�� ������ �Է¹޾� ���� ū ���� ����ϴ� ���α׷�
	
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