#include <stdio.h>

void main()
{
	// Ex 1. ���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� �޾Ƽ�, �� ����ŭ "Hello World!"�� ����ϴ� ���α׷��� �ۼ��غ���.
	//int i, count;

	//do
	//{
	//	printf("Enter a positive integer: ");
	//	scanf_s("%d", &count);

	//} while (count <= 0);

	//for (int i = 0; i < count; i++)
	//{
	//	printf("Hello World!\n");
	//}
	//printf("Done");

	//����2.
	//���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� ���� ����, �� ����ŭ 3�� ����� ���
	//�ϴ� ���α׷��� �ۼ��� ����. ���� ��� 5�� �Է¹޾Ҵٸ�, 3 6 9 12 15�� ����ؾ�
	//�ϰ� 3�� �Է¹޾Ҵٸ�, 3 6 9 �� ����ؾ� �Ѵ�.

	//int i=0, j=0, count;
	//printf("\"Multiple Generator\"\n");

	//do
	//{
	//	printf("Enter a positive Integer: ");
	//	scanf_s("%d", &count);
	//} while (count <= 0);

	////while�� �غ���
	////while (j < count)
	////{
	////	if (!((i+1) % 3))
	////	{
	////		printf("%d ", i+1);
	////		j++;
	////	}
	////	i++;
	////}
	////printf("Done");

	////for�� �غ���
	//for (;j<count ;i++)
	//{
	//	if (!((i+1) % 3))
	//	{
	//		printf("%d ", i+1);
	//		j++;
	//	}
	//}
	//printf("Done");

	//Better
	//for (int i = 0; i < count; i++)
	//{
	//	printf("%d ", i * 3);
	//}
	

	//����3.
	//���α׷� ����ڷκ��� ����ؼ� ������ �Է¹޴´�. �׸��� �� ���� ����ؼ� ����
	//������. �̷��� �۾��� ���α׷� ����ڰ� 0�� �Է��� ������ ��ӵǾ�� �ϸ�, 
	//0�� �ԷµǸ� �Էµ� ��� ������ ���� ����ϰ� ���α׷��� �����Ѵ�.
	// 
	//printf("<Summer>\n\n");
	//int num = 0, sum = 0;
	//do
	//{
	//	printf("Enter a number: ");
	//	scanf_s("%d", &num);
	//	sum += num;
	//} while (num != 0);
	//printf("Sum is : %d \n", sum);
	//printf("Done");

	//����4.
	//���α׷� ����ڷκ��� �Է� ���� ���ڿ� �ش��ϴ� �������� ����ϵ�, �������� 
	//����ϴ� ���α׷��� �ۼ��� ����.

	/*printf("<Gugudan Generator>\n");
	
	int dan = 1;
	printf("Enter a dan : ");
	scanf_s("%d", &dan);
	if (dan < 0) dan *= -1;
	for (; dan > 0; dan--)
	{
		printf("%d Dan \n", dan);
		for (int i = 0; i < 9; i++)
		{
			printf("%d x %d = %d\n", dan, i + 1, dan * (i + 1));
		}
		printf("\n");
	}
	printf("Done");*/

	//����5.
	//1�̻� 100�̸��� ���� �߿��� 7�� ����� 9�� ����� ����ϴ� ���α׷��� �ۼ��� ����.
	//��! 7�� ����̸鼭 ���ÿ� 9�� ����� ������ �ѹ��� ����ؾ� �Ѵ�.
	
	//int i = 1;
	//while (i < 100)
	//{
	//	if (!(i % 7)) printf("%d ", i); // if else �� �� ���� ���ǵ� ���̿� �������� �ִ���, �� �κ��� ��� ó���Ǵ��� �ùķ��̼��� ���� �غ���.
	//	else if(!(i % 9)) printf("%d ", i); //������ �������� 63�� ���� ���ܵƱ� ������ �� �ٿ����� 63�� ǥ������ �ʴ´�.
	//	i++;
	//}
	//printf("Done");

	//for(int i = 1; i < 100;i++)
	//{
	//	if (i % 7 == 0 || i % 9 == 0) printf("%d ", i);
	//}

	//����6.
	//�� ���� ������ �Է� �޾Ƽ� �� ���� ���� ����ϴ� ���α׷��� ������ ����. ��, ������
	//ū ������ ���� ���� �� ����� ����ؾ� �Ѵ�. ���� �� �Էµ� �� ���� ������ 
	//������� 12�� 5��� 7�� ��µǾ�� �ϰ�, �Էµ� �� ���� ������ ������� 4�� 16�̶��
	//12�� ��µǾ�� �Ѵ�. ��, ��� ����� ������ 0 �̻��� �Ǿ�� �Ѵ�.

	//int n, m, sub;
	//printf("Enter two numbers (n m) and press Enter: ");
	//scanf_s("%d %d", &n, &m);
	//if (n >= m) sub = n - m;
	//else sub = m - n;
	//printf("Substract = %d", sub);

	//����7.
	//���� 6���� ������ if~else�� ����Ͽ� �ذ��Ͽ��°�? �̸� if~else�� �ƴ� ���׿����ڸ�
	//�̿��Ͽ� ������ ����. 

	//int n, m, sub;
	//printf("Enter two numbers (n m) and press Enter: ");
	//scanf_s("%d %d", &n, &m);
	//sub = (n >= m)? n - m : m - n;
	//printf("Substract = %d", sub);
	////Ȥ�� sub ������� �ʰ� �ٷ�
	//printf("Substract = %d", (n >= m) ? n - m : m - n);


	//����8.
	//�������� ����ϵ� ¦�� ��(2��, 4��, 6��, 8��)�� ��µǵ��� �Ѵ�. ���� 2���� 2*2����,
	//4���� 4*4����, 6���� 6*6����, 8���� 8*8������ ��µǵ��� �غ���. �̸� �ذ��ϱ� 
	//���� break�� continue���� ����غ���.

	//printf("Let's Gugudan!");
	//for (int dan = 0; dan < 9; dan++)
	//{
	//	if(!(dan%2)) 
	//		for (int i = 0; i < dan; i++)
	//		{
	//			printf("%d x %d = %d \n", dan, i + 1, dan * (i + 1));
	//		}
	//	printf("\n");
	//}
	//printf("Done");

	//continue ����غ���
	//for���̸� break�� ���� �ʿ� ���µ�? while�̸� if(dan == 9) break;�� ���������� �ǰ���

	//printf("Let's Gugudan!");
	//
	//for (int dan = 0; dan < 9; dan++)
	//{
	//	if ((dan % 2)) continue;
	//	for (int i = 0; i < dan; i++)
	//	{
	//		printf("%d x %d = %d \n", dan, i + 1, dan * (i + 1));
	//	}
	//	printf("\n");
	//}
	//printf("Done");

	//����9.
	//���α׷� ����ڷκ��� �Է� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��ϵ�
	//���� �� ���� ������ �������Ѿ� �Ѵ�.
	//  - ���� �� ���� ������ �Է��� ������ ���α׷� ����ڿ��� ���´�. �׸��� �� ��
	//	��ŭ ������ �Է� �޴´�.
	//  - ��հ��� �Ҽ��� ���ϱ��� ��µǵ��� �Ѵ�.

	//printf("Average calculator \n");

	//int count, num;
	//double sum = 0;
	//do
	//{
	//	printf("How many numbers? ");
	//	scanf_s("%d", &count);
	//} while (count <= 0);

	//for (int i = 0; i < count; i++)
	//{
	//	printf("Enter numbers to calculate the average of: \n");
	//	scanf_s("%d", &num);
	//	sum += num;
	//}

	//printf("Average of %d numbers: %.2lf", count, sum / count);
	
	//����10.
	//���α׷� ����ڷκ��� �� 5���� ������ �Է� �޾Ƽ�, �� ���� ���� ����ϴ� ���α׷�
	//�� �ۼ��غ���. ��, �Ѱ��� ������ �ִ�. ������ �ݵ�� 1 �̻��̾�� �Ѵ�. ���࿡ 
	//1 �̸��� ���� �ԷµǴ� ��쿡��, �̸� �Է����� �������� �ʰ� �� �Է��� �䱸�ؾ�
	//�Ѵ�. �׷��� �ᱹ 1 �̻��� ���� 5���� ��� �Է� ���� �� �ִ� ���α׷��� �ϼ��ؾ�
	//�Ѵ�.
	
	//int num1, num2, num3, num4, num5;

	//do 
	//{
	//	printf("Enter number1:");
	//	scanf_s("%d", &num1);
	//	if (num1 <= 0) printf("Enter a positive integer.\n");
	//} while (num1 <= 0); // �迭�� �� ���� ���� �ټ� ���� �����Ϸ���(���� �ټ����� ���� ��������) �̰� �ټ� �� �ݺ��ϴ� ���ۿ� ����? �׷���. 

	//printf("%d", num1); 

	//����11.
	//�Ʒ��� ����� ���̴� ���α׷��� �ۼ��غ���.
	// *
	// o *
	// o o *
	// o o o *
	// o o o o *

	// �����, �� 5�࿡ ���ļ� ����� �̷������, ���� ������ ������ 'o'���ڰ� �����Ѵٴ�
	//Ư¡�� ������� while���� ��ø�� �����ϸ� �ȴ�.
	
	//int i = 0;
	//while (i < 5)
	//{	
	//	int j = 0;
	//	while (j < i)
	//	{
	//		printf("o ");
	//		//printf("i, j:%d, %d", i, j);
	//		j++;
	//	}
	//	printf("*\n");
	//	i++;
	//}
	
	//for���� �� ����ϳ�. �ʿ���� ������ ���� �ʰ�.
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < i; j++)
	//	{
	//		printf("o ");
	//	}
	//	printf("*\n");
	//}


	//����. �������� 3*3���� ��ġ
	//for (int dan = 1; dan < 10; dan+=3)
	//{
	//	for (int i = 1; i < 10; i++)
	//	{
	//		printf("%d x %d = %d\t%d x %d = %d\t%d x %d = %d\n", dan, i, dan * i, dan + 1, i, (dan + 1)*i, dan + 2, i , (dan + 2) * i);
	//	}
	//	printf("\n");
	//}

	//����. ����ϰ��� �ϴ� �ִ� ������ �� �ٿ� ����ϰ��� �ϴ� ������ ������ �Է¹޴´�. 
	// ��� ������ ������׷�..
	//1  2  3  4  5 
	//10 9  8  7  6
	//11 12 13 14 15
	//         17 16

	//int num = 0;
	//int end_num = 0;
	//int perLine = 0;

	//printf("������ ����: ");
	//scanf_s("%d", &num);
	//printf("�� �ٿ� �� ��: ");
	//scanf_s("%d", &perLine);

	//end_num = ((num / perLine) + 1) * perLine; // ��¥�� ������ �� ��ȣ


	//printf("%d %d\n", num, perLine);

	//for (int i = 1; i <= end_num; i++)
	//{	
	//	int line = (i - 1) / perLine; //�� ��ȣ(0, 1, 2, ...)

	//	if (line % 2 == 0) //¦����(0, 2, ...). ¦���� �׳� i �Է�
	//	{
	//		if (i <= num) printf("%d\t", i); //����ڰ� �Է��� ���� num���ϸ� ���
	//		else printf(" \t");	// �ƴϸ� �� ĭ
	//	}
	//	else //Ȧ����(1, 3, ...). Ȧ���� ��ȯ�� ���� j �� �Է��ϵ� j�� num���� ũ�� continue
	//	{	
	//		int order = (i - 1) % perLine + 1; //�� �ٿ��� �� ��°�ΰ�
	//		int j = i + perLine + 1 - 2 * order; //i�� �� �ڸ��� �´� ���� j�� �ٲٴ� ��

	//		if (j <= num) printf("%d\t", j); //����ڰ� �Է��� ���� num���ϸ� ���
	//		else printf(" \t");	// �ƴϸ� �� ĭ
	//	}
	//	if (i % perLine == 0) printf("\n");
	//}

	//�ٽ� Ǯ���
	//int i = 1, alter_i, max, real_max, line, per_line;
	//line = 1;

	//printf("Enter max number: ");
	//scanf_s("%d", &max);
	//printf("Enter per_line: ");
	//scanf_s("%d", &per_line);

	//alter_i = i + per_line;
	//real_max = max + per_line - (max % per_line);

	//for (i = 1; i <= real_max; i++)
	//{
	//	if (line % 2) //Ȧ����. �տ��� �ڷ� Ŀ����.
	//	{
	//		if (i > max)
	//		{
	//			break;
	//		}
	//		else
	//		{
	//			printf("%d\t", i);
	//		}
	//	}
	//	else //¦����. i ��� alter_i ���. �ڷ� ������ �۾�����, max���� ũ�� �Ǹ� ��.
	//	{ 
	//		if (alter_i > max)
	//		{
	//			printf("\t");
	//		}
	//		else
	//		{
	//			printf("%d\t", alter_i);
	//		}
	//		alter_i -= 1;
	//	}

	//	if (!(i % per_line)) //ĭ�� ���� ���� �ٲٰ� alter_i�� �ʱ�ȭ
	//	{
	//		printf("\n");
	//		line++;
	//		alter_i = i + per_line;
	//	}
	//}

	// ���� ���������� ����ϱ�
	



	//0���� ������ ����

	//unsigned ���� �Ẹ��
	//unsigned �������� ���� ������ �ȴ�. ��ȣ�� ���� �о�ͼ� ����� �� �����Ǳ� ����. 
	//����� �� %d�� �ϸ� signed number�� �ؼ��ϰ� %u�� �ϸ� unsigned number�� �ؼ��Ѵ�. 
	//�׷� unsigned ������ �� ����? ������ ����Ǵ� ���� signed�� ������.. 
	//int a = 5;
	//int b = -4;
	//unsigned int c = 3;
	//unsigned int d = -2;
	//printf("%u, %d \n", a, a);
	//printf("%u, %d \n", b, b);
	//printf("%u, %d \n", c, c);
	//printf("%u, %d \n", d, d);

	//x, y �׷��� �׸���
	//int x, y;
	//x = 0, y = 0;
	////printf("%d, %d", x, y);
	//
	//while (y < 10)
	//{
	//	x = y*y;
	//	int i = 0;
	//	while (i < x)
	//	{
	//		printf(" ");
	//		i++;
	//	}
	//	printf("*\n");
	//	y++;
	//}

	//printf("Done");





}