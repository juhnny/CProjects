#include <stdio.h>

void main()
{
	//Ex 7-2 
	//1에서 10까지 더하기
	/*int i = 1, sum = 0;
	while (i <= 10)
	{
		sum = sum + i;
		printf("i: %d, sum: %d \n", i, sum);
		i++;
	}
	printf("Done\n");*/

	//Ex 7-4
	/*int i = 1, j=1, result;
	while (i < 10)
	{
		while (j < 10)
		{
			result = i * j;
			printf("%d x %d = %d\n", i, j, result);
			j++;
		}
		printf("\n");
		i++;
		j = 1;
	}
	printf("Done\n\n");*/

	//Ex 7-5
	//구구단 단을 입력받아 내림차순 출력
	/*int dan, i = 9, result;
	printf("Enter dan number (1~9):");
	scanf_s("%d", &dan);
	while (dan < 0 || dan > 9)
	{
		printf("Enter dan number (1~9):");
		scanf_s("%d", &dan);
	}

	while (dan > 0)
	{
		while(i>0)
		{
			result = dan * i;
			printf("%d x %d = %d\n", dan, i, result);
			i--;
		}
		dan--;
		i = 9;
		printf("\n");
	}
	printf("Done\n\n");*/



	//Ex 7-12
	//숫자를 입력 받아 factorial 구하기
	//int i=1, num, factorial=1;
	//printf("Enter factorial number: ");
	//scanf_s("%d", &num);

	//for (i = 1; i <= num; i++)
	//{
	//	factorial = factorial * i;
	//}
	//printf("%d! is %d\n\n", num, factorial);
	
	//Ex 1 p.195
	//int i = 1, num, count = 0;
	//
	//printf("Enter a number to find multiples of: ");
	//scanf_s("%d", &num);

	//printf("Multiples of %d: ", num);

	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % num == 0)
	//	{
	//		printf("%d ", i);
	//		count++;
	//	}
	//}
	//printf("\nCount of multiples of % d: %d\n", num, count);
	//printf("Done\n");


	//Ex 2
	//for (int i = 1; i <= 5; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//Ex 3
	int width, spaces, stars;
	width = 101;
	spaces = 0;

	for (spaces = 0; 2 * spaces < width; spaces++)
	{
		stars = width - 2 * spaces;
		for (int i = 0; i < spaces; i++)
		{
			printf(" ");
		}

		for (int i = 0; i < stars; i++)
		{
			printf("*");
		}

		for (int i = 0; i < spaces; i++)
		{
			printf(" ");
		}
		printf("\n");
	}
	

	//Ex 4


	//Ex 5


	//Ex 6


	//Ex 7


	//Ex 8








}