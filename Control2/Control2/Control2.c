#include <stdio.h>

void main()
{
	// ���2

	// while �ݺ���
	// while�� ���� �� �ִ� �� ��� for�� ���� �� �ְ� vice versa
	// ���� ��찡 �ٸ��⺸�ٴ� while�� �������� ���� �� �� for�̰� �ǹ������� for�� �� ���� ����.

	//�ݺ� Ƚ���� ���� ���
	//1. ������� �ʱⰪ, 2. ��������, 3. ����� ����
	//�ʱⰪ i = 0, �������� < n, ���� ������ ++�� ����ϱ� ����. �迭 � ����ϱ� ����.
	//�ʱⰪ�� 0�� �� ��ǻ�Ͱ� �ν��ϴ� ù ���ڰ� 0�̴ϱ�.
	//���������� ���ߴ� ������ �ƴ϶� �����ϴ� �����̴�. i == n�̶�� ������ ���ʿ� ������ �� �Ѵ�!

	//�⺻ ����
	//int i = 0;
	//while (i < 5)
	//{
	//	printf("%d\n", i);
	//	i++;
	//} //���⼭�ݺ����� ���� ���� i ���� 4�� �ƴ϶� 5�ӿ� ���� 

	//while �ȿ��� if�� ���
	//int a = 0;
	//int input;

	//while (a < 3)
	//{
	//	printf("Enter num: ");
	//	scanf_s("%d", &input);
	//	if (input % 2 == 0)
	//		printf("%d is a multiple of 2\n", input);
	//	else
	//		printf("%d is not a multiple of 2\n", input);
	//	a++;
	//}

	//���� �ݺ�
	//while (1)
	//{

	//}

	//�����ݷ� ����
	//while �ڿ� ;�� ���� ������ �ƹ��͵� ���� �ʴ´�. ȭ�鿡�� Ŀ���� ��������.

	//��ø �ݺ���
	//������ 
	int dan = 2;
	while (dan < 10)
	{
		printf("%d Dan\n", dan);

		int i = 1; //���ο��� �ݺ��� �� ������� ���ο� �д�! �ݺ��� �ϳ��� ����� �ϳ�. ���� �ϳ��� �����ϴ� ��쵵 ������ ������.
		while (i < 10)
		{
			printf("%d x %d = %d\n", dan, i, dan * i);
			i++;
		}

		printf("\n");
		dan++;
	}

	//for��
	//while���� �ݺ�Ƚ�� ������� ������(����� �ʱⰪ, ��������, ����� ����)�� ��~~~���� �������� �Ǹ� �� ���� �ݺ� Ƚ���� �ľ��ϱ� ��������� ������
	//�� 3��Ҹ� �� ���� �ľ��� �� �ְ� �� �� for. ���Ӵٱ⺸�ٴ� ������ �����̶���..

	//for(����� �ʱⰪ; ���� ����; ����� ����)
	int b;
	for (b = 0; b < 10; b++)
	{
		printf("This is 'for'\n");
	}

	//�߰�ȣ ���� ����
	int bb;
	for (bb = 0; bb < 3; bb++) printf("This is 'for'2 \n");

	//���� ���� ��ġ�� ���� ����
	//������ for�� �ۿ��� ���� ��������
	//���������� for�� �ۿ����� ��� �� �� �ִ�. 
	//C������ ���� for�� �ۿ����� ���� ������ �� �� ������ VS���� for �Լ� ������ �� ���������� ���� �� ���� �ְ� ���ش�.
	int c;
	for (c = 0; c < 3; c++)
	{

	}

	// for�� ���ο�(������ ��) ���� ���� ���� ����
	// for�� ���ο����� Ȱ��ȴ�. 
	// Java������ �̰� �����ؼ� ���� ��쿡 ����.
	for (int d = 0; d < 3; d++);
	{

	}

	//100 ������ 5�� ��� ������
	int num;

	printf("5�� ���: ");
	for (num = 1; num <= 100; num++)
	{
		if (num % 5 == 0) printf("%3d", num); //�߰�ȣ �ȿ����� �������� �����ݷ� �ʿ� 
	} printf("Finished\n"); //�߰�ȣ�����ε� �ϳ��� ������ �����̹Ƿ� �߰�ȣ �ڿ��� ;�� �ʿ� ���� ��� �߰�ȣ �ڴ� �ٸ� �������� �ν��Ѵ�.

	//�Լ� ���� �� �� ���� �����ݷи� �־��൵ �����Ѵ�.
	/*for (;;)
	{

	}*/ //�̷��� ���� �ݺ�. while�� ���ǿ� 1�̳� 0�̶� ����� �ϴµ� for�� ��������(��° ��)�� 1�� ������ ����, 0�� ������ �������� �ʰ�, �����̾ ����.

	//�Ϻθ� �־��ְ� �ܺ� ������ �����͵� �ȴ�.
	int e;
	e = 0;
	for (; e < 3; e++);


	//do while
	//�ϴ� 1ȸ �����ϴ� while
	//����ڰ� �߸��� ���� ������ �ٽ� �Է��϶�� while�� �ݺ� ��û�ؾ� �ϴµ� �� ������ while �տ� �ѹ� �� ����� �ϴ� �� ����. �� ��  do while�� ����.
	int score;

	printf("input: "); //�ߺ�
	scanf_s("%d", &score); //�ߺ�
	while (score < 0 || score > 100)
	{
		printf("input: "); //�ߺ�
		scanf_s("%d", &score); //�ߺ�
	}

	printf("Your score is %d \n", score);

	//�� while���� do while�� �ٲٸ�
	int score2;
	
	do
	{
		printf("input: "); //�ߺ�
		scanf_s("%d", &score2); //�ߺ�
	} 
	while (score2 < 0 || score2 > 100);
	
	printf("Your score2 is %d \n", score2);

	//while VS for
	//for�� �ݺ� ȸ���� �� ���� �ľ��ϱ� �����ϱ� ������
	//�ݺ��� ȸ��(������ �����)�� ������ �ִٸ� for��, 
	//�ݺ��� ȸ���� ������ �� �ƴ϶� ������ ������ �ִٸ� while���� ����
	//����ڰ� �Է��� ���ڸ�ŭ �ݺ��Ѵ�? for
	//����ڰ� ����� �� ���� �Է��� ������ �ݺ��ؼ� ��� ��? while

	//��Ÿ���
	//break
	//switch�� �ݺ��� ����
	//break;�� ���� ����. �տ� �ݵ�� switch�� �ݺ��� �ʿ�.
	for (int i = 0; i < 5; i++)
	{
		if (i == 3) break;
		printf("%d\n", i);
	}
	printf("Done\n\n");

	//continue
	//�ݺ����� ���� ȸ�� ���� �� �ٽ� �ݺ�
	//continue;�� ���� ����. �տ� �ݵ�� switch�� �ݺ��� �ʿ�.
	for (int i = 0; i < 5; i++)
	{
		if (i == 2) continue;
		printf("%d\n", i);
	}
	printf("Done\n\n");

	//break�� ����� ����ڰ� 0�� �Է��� ������ ���ڸ� ��� �Է� �޴� ����

	for (int number;;)
	{
		scanf_s("%d", &number);
		printf("number: %d\n", number);

		if (number == 0)
		{	
			printf("Done\n");
			break;
		}
	}
	//int a = 11;
	//printf("%d\n", a);

	//if (a > 0) printf("bigger than 0\n");
	//if (a > 5) printf("bigger than 5\n");
	//if (a > 10) printf("bigger than 10\n"); else printf("lesser than 10\n");
	//if (a > 15) printf("bigger than 15\n"); else if (a > 10) printf("lesser than 15, bigger than 10\n"); else printf("lesser than 15 and also 10\n");

	//printf("Exit");








};