#include <stdio.h>

void main()
{
	//Ex 5-2 ~ 12

	//Ex1 
	//int a, b, c;
	//printf("ù��° ������ �Է��ϼ��� : \n\n");
	//scanf_s("%d", &a);
	//printf("\n�ι�° ������ �Է��ϼ��� : \n\n");
	//scanf_s("%d", &b);
	//printf("\n����° ������ �Է��ϼ��� : \n\n");
	//scanf_s("%d", &c);
	////% z��� �ؽ�Ʈ�� �� ������ ����
	//printf("\nù��° %d, �ι�° %d, ����° %d �Դϴ�. \n", a, b, c);
	//printf("(x + y) * (y + z) / (y % z) = %d", (a + b) * (a + c) / (b % c));

	//Ex2 
	//int a, b, c;
	//printf("input :");
	//scanf_s("%d", &a);

	//printf("input :");
	//scanf_s("%d", &b);

	//// ���׿����� ��� �ڸ��� �Լ��� ������ �ȵȴ�.
	//// �Լ��� ������ �� �Լ��� �����ڿ� �ǵ��� ��ǲ Ÿ���� ���� ��� ������ ������ �������� ������ ���� �ǵ����� ���� �ʴ�.
	//// �������̹Ƿ� ���� return�ϴ� ���� ��ǥ�̳� �Լ� �߿��� ���� �������� �ʴ� �Լ��� �ֱ� ����. 
	//// ��Ե� �۵��ϰ� ���� �� ������ ���� ���������� �ڵ� ���� ���������� ������ �� ����.
	//// ����� ���� �ʿ��� ���� ���׿�����, �Լ��� ����� �ʿ��� ���� IF���� �������.
	////(a <= b) ?
	////	printf("Smaller Number:", a) :
	////	printf("Smaller Number:", b);
	//
	//c = (a <= b) ? a : b;
	//printf("Smaller Number:%d", c);

	//Ex 4
	//ū ���� �ϳ��� �����൵ �ȴٰ� ����
	//int a, b, c, d;

	//printf("Input three numbers: \n\n");
	//scanf_s("%d %d %d", &a, &b, &c);

	//d = (a >= b) ? a : b;
	//d = (d >= c) ? d : c;
	//printf("\nThe biggest number is: %d", d);
	//		

	//Ex 8
	//int hour, min, sec;

	//printf("Time to Sec Calculator \n");
	//printf("Input current hour, min and sec in the form below\n");
	//printf("(Time:min:sec) : ");
	//scanf_s("%d:%d:%d", &hour, &min, &sec);
	//printf("%d", 3600*hour + 60*min + sec);

	//Ex 9

	//Ex 10
	
	//Ex 7
	//0000(2)~1111(2) �������� �ν��� ����� if�� ���� ������?

	//����ڰ� 0000~1111 ������ ���� 2������ �Է��Ѵٰ� ����
	//int num, a, b, c, d, num2 ;
	//printf("Binary to Decimal Converter \n\n");
	//printf("Enter 4-digit binary number between 0000 and 1111 \nNumber: ");
	//scanf_s("%d", &num);
	//a = num / 1000 ;
	//b = (num % 1000) / 100;
	//c = (num % 100) / 10;
	//d = (num % 10);
	//num2 = 8 * a + 4 * b + 2 * c + d;
	//printf("\n%d(2) as decimal is : %d", num, num2);

	//����5.
	//����ڷ� ���� ���� �ϳ��� �Է¹޾ƶ�. �Է¹��� ������ ���밪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	//int a = -1; //1111....1110
	//a = a << 1; //1111....1111 1100 
	//a = a >> 1; //?111....1111 1110 �����̹Ƿ� 1�� ä������. �̵� �����ڷ� ��ȣ�� ���� �� ����.
	//printf("%d\n", a);

	//int b, c;
	//scanf_s("%d", &b);
	//c = (b >= 0) ? b : -1*b	;
	//printf("%d", c);

	//����6.
	/*����ڷκ��� �ѹ��ڸ� �Է¹޾ƶ�.�Է¹��� ���ڰ� ���� �빮�ڸ� �ҹ��ڷ�, �ҹ��ڸ�
		�빮�ڷ�, �� �ۿ� Ư�����ڸ� �׳� Ư������ �״�� ��µǵ��� ���α׷��� �ۼ��Ͽ� ����.
		[����(����)������ ���]*/
	//���� 'A'=65, 'Z'=90, 'a'=97
	// 
	//char letter;

	//printf("enter one character: ");
	//scanf_s("%c", &letter);
	//printf("%d %c \n", letter, letter);

	//letter = (letter < 65) ? letter :
	//	(letter <= 90) ? letter + 32 :
	//	(letter < 97) ? letter:
	//	(letter <= 122) ? letter - 32 :
	//	letter;

	//printf("%d %c \n", letter, letter);

	//����7.
	//����ڷκ��� ���� 3���� �Է¹޾Ƽ� ���� 3���� ��, ���, �ִ밪, �ּҰ��� ���ؼ� ����ϴ� ���α׷���
	//�ۼ��Ͽ� ����.��, ����� �Ҽ��� 2°�ڸ������� ��� ����)
	int num1, num2, num3;
	double sum;
	








}