#include <stdio.h>

void main()
{

	int* p1[3];
	int(*p2)[3];
	printf("%d \n", sizeof(p1));
	printf("%d \n", sizeof(p2));


	int a = 10;
	int* p = &a;
	printf("%p", p);

	double d = 3.14;
	//p =  & d;
	printf("%p", p);

	
}