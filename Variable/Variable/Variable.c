#include <stdio.h>
void main()
	//printf
{	//����׸� �ְ� ������ ���� ��. garbage value �����Ⱚ�� ��ȯ��. �޸��� �ƹ� ��ġ�� �о�´�. �׷��� ���δ� �ٸ� ������ ������ ������ �ҷ����⵵.
	printf("ex1. %d");

	printf("ex2. %d \n");

	printf("ex3. %d \n", 1);

	printf("ex4. %d \n", 1 + 2);

	//���ڴ� �ϳ��ε� ��� ĭ�� ���̸�
	printf("ex5. %d %d \n", 4);

	//Data Type (������) �ڷ���
	//char 
	char a;
	a = 'A';
	//a = 'Its a';
	printf("char a is %c\n", a);

	int k;
	k = 5;
	printf("int k is %d \n", k);

	float b;
	b = 3.14;
	//��ǻ�Ϳ����� �⺻������ �Ҽ��� double�� �޾Ƶ��̹Ƿ� �Ҽ�(double)�� float�� ������ �ϸ� warning�� ���. 
	//warning�� �ȴٸ� ���� �ڿ� f�� �ٿ��ָ� �ȴ�.
	printf("float b is %.3f \n", b);
	
	int e = 100;
	int f = 200;
	printf("e, f are %d, %d \n", e, f);
	printf("e + f is %d \n", e + f);
	
	//�������� �� ������ ����
	e = f;
	printf("e = f ��� �����ϸ� e = %d, f = %d \n", e, f);

	//���� ��� �� ���ǻ���
	//������ �����ϰ� �ʱ�ȭ���� ���� ���¿��� ����� ��
	int p;
	//printf("%d =n", p); //c������ ������ ������ ���־� ��Ʃ��������� ����. garbage value ��ȯ

	int q;
	//q = 10 + p; //���� ���� ���� p�� ����ϴ� ����

	//�׷��� ������ �����ϰ� �ٷ� ���� �����ϴ� �۾� �ʿ�
	int r;
	r = 10;
	//Ȥ�� ����� ���ÿ� �ʱ�ȭ. ��� ������ ���ϸ� ���� �Ʒ��� �ٸ���. ���� '����', �Ʒ��� '�ʱ�ȭ'
	//int s = 20; 
	//printf("r, w = %d, %d", r, s);
	
	//���� �ڷ����� ������ ������ ���� ���� ��� ����
	int t;
	int u;
	int v;
	int tt, uu, vv;
	//int aa, float bb; //����. �ڷ����� �ٸ� �� �޸�(���� ������?) ��� �Ұ�
	int aa = 10, bb, cc = 30; //�Ϻ� ������ �ʱ�ȭ ����

	printf("%d \n", 2147483648);
	
	//char�� C���� 1����Ʈ(ASCII��)�� �Ҵ�Ǿ �����ڵ�(2����Ʈ)�� ����ϴ� �ѱ��� �����ϸ� ����
	char ga = 'a';
	char gb = '��';
	printf("%c", ga);
	printf("%c", gb);

	//sizeof() : �޸� ������(byte)�� �˷��ִ� �Լ�
	printf("%d \n", sizeof(char));
	printf("%d \n", sizeof(short));
	printf("%d \n", sizeof(int));
	printf("%d \n", sizeof(long));
	printf("%d \n", sizeof(float));
	printf("%d \n", sizeof(double));
	printf("%d \n", sizeof(50));
	printf("%d \n", sizeof(330000));
	printf("%d \n", sizeof(3.14));
	printf("%d \n", sizeof(a));

	//float�� double�� ���̴� �Ҽ��� �Ʒ� ��Ȯ�� ����
	float fff = 0.1234567890123456789;
	double ddd = 0.1234567890123456789;
	//�⺻�����δ� f�� ���� long float, lf�� ���� 6�ڸ������� �����ش�.
	printf("fff = %f, ddd = %lf \n", fff, ddd);
	//�Ҽ��� ���ϸ� ǥ���ϵ��� ���Ĺ��ڸ� ���ָ� 6�ڸ� ���ĵ� �� �� �ִ�.
	printf("fff = %.10f, ddd = %.10lf \n", fff, ddd);

	//scanf Ű���� �Է��Լ� 
	//scanf("�Է�����", &������)
	//���ۻ��� ����� �� ��!
	//Ű���� �Է¹��� scanf ���� �ݵ�� �Է°��� ������ �������� ����� ���ƾ� ��
	//scanf �Լ��� ������ ���� scanf_s�� �ٲ�
	//�Է��� ���� �ڿ��� ����(�ٵ� �ٲ��)
	int age;
	printf("���� �Է�: ");
	scanf_s("%d", &age);
	printf("age: %d�� \n", age);
	
	char sex; char grade;
	printf("���� �Է�(m/f): ");
	scanf_s("%c %c", &sex,&grade);//���͸� ���ڷ� �޾Ƽ� �� ��° ���ڷ� �ν��ϴ� ����
	printf("sex: %c, grade: %c \n", sex, grade);

	//����1. ������ �ܼ��� �Է¹޾� �� ���� ����ϴ� ���α׷�
	/*int dan;
	printf("�� ���� ������?: ");
	scanf_s("%d", &dan);
	printf("\n%d���� ����մϴ�.\n", dan);
	printf("%d * 1 = %d \n", dan, 1, dan * 1);
	printf("%d * 2 = %d \n", dan, 2, dan * 2);
	printf("%d * 3 = %d \n", dan, 3, dan * 3);
	printf("%d * 4 = %d \n", dan, 4, dan * 4);
	printf("%d * 5 = %d \n", dan, 5, dan * 5);*/

	//����2. ����ڷκ��� 2���� ������ �Է¹޾� �����ϴ� ���α׷�
	/*printf("�� ���� �Է¹޾� �����ϴ� ���α׷��Դϴ�.\n\n");
	int num1, num2, sum;
	printf("ù ��° ���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &num1);
	printf("�� ���� ���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &num2);
	sum = num1 + num2;
	printf("\n%d + %d = %d", num1, num2, sum);*/

}
