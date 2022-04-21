
void hexagram()
{
	int part = 1;
	int size = 5;
	for (int i = 1; part < 5; i++)
	{
		printf("i=%d\n", i);
		if (part % 2)
		{

			for (int spc = 7 * size - 2 * i; spc > 0; spc--)
			{
				printf("%1d", spc % 10);
			}
			for (int dot = 0; dot < 4 * i; dot++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for (int spc = 0; spc < 2 * i - size; spc++)
			{
				//if (spc <= 0) break;
				printf("%1d", spc % 10);
			}
			for (int dot = 16 * size - 4 * i; dot > 0; dot--)
			{
				printf("*");
			}
			printf("\n");
		}
		if (i % size == 0) part++;

	}	
}

