#include <stdio.h>

void ex3()
{
	int num1 = 10;
	int* ip1 = NULL;
	int** ip2 = NULL;
	int*** ip3 = NULL;

	ip1 = &num1;
	ip2 = &ip1;
	ip3 = &ip2;
	
	printf("num1 is %d \n", *ip1);
	printf("num1 is %d \n", **ip2);
	printf("num1 is %d \n", ***ip3);

}

void ex4()
{
	//3번과의 차이를 모르겠어.

	/*int num1 = 10;
	int* ip1 = NULL;
	int* ip2 = NULL;
	int* ip3 = NULL;

	ip1 = &num1;
	printf("num1 is %d \n", *ip1);
	
	ip2 = &ip1;
	printf("num1 is %d \n", **ip2);

	ip3 = &ip2;
	printf("num1 is %d \n", ***ip3);*/

}

void ex5()
{
	int arr[3] = { 10, 20, 30 };
	int* ip = NULL;
	int** ipp = NULL;

	ip = &arr;
	ipp = &ip;

	printf("% d, % d, % d \n", arr[0], ip[0], *ipp[0]);

}

//void ex6(); //함수 포인터 배운 뒤에 풀기

void main()
{
	ex3();
	ex4();
	ex5();

	//ex6
	//int arr[5] = { 10, 20, 30, 40, 50 };
	//int* parr = &arr;



}

void ex6()
{

}