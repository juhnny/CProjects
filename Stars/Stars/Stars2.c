#include <stdio.h>

void stars2()
{
	for (int i = 0; i < 10; i++)
	{
		printf("*");

		int k = 10 - i;
		if (k % 3 == 0) printf("\n");
	}
}