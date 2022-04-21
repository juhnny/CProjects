#include <stdio.h>
#include <stdlib.h>

//scanf_s�� ����ü�� ������ ����
void ex1_2()
{
	//����ü ����	
	struct Number
	{
		int a;
		double b;
	};

	struct Number num;
	printf("Input an integer: ");
	scanf_s("%d", &num.a);
	printf("Input a real number: ");
	scanf_s("%lf", &num.b);

	printf("a: %d, b: %lf \n", num.a, num.b);
}

//����ü ������ �ʱ�ȭ
void ex1_3()
{
	struct Number
	{
		int a;
		double b;
		char c;
	};

	struct Number num = { 10, 5.3, 'A'};
	printf("%d, %lf, %c \n", num.a, num.b, num.c);
	
	struct Number num2 = { 0 };
	printf("%d, %lf, %c \n", num2.a, num2.b, num2.c);

}

//����ü�� ��ǥ�� Ȱ��
void ex1_4()
{
	struct Point
	{
		int x;
		int y;
	};

	struct Point p1 = { 10,20 };
	struct Point p2 = { 30, 40 };
	struct Point diff = { 0 };
	
	diff.x = p2.x - p1.x;
	diff.y = p2.y - p1.y;

	printf("Diff: %d, %d \n", diff.x, diff.y);
}

//���� �ڷ����� ����ü ���������� ��°�� ���簡 �ȴ�.
void ex1_5()
{
	struct AA { int a; int b; };
	struct BB { int c; int d; };

	struct AA aa1 = { 10, 30 };
	struct AA aa2 = { 0 };
	struct BB bb = { 0 };
	aa2 = aa1;
	//bb = aa1; //������ ���Ƶ� �ڷ����� �ٸ��� ���� �Ұ�

	printf("aa: %d, %d \n", aa2.a, aa2.b);
	printf("bb: %d, %d \n", bb.c, bb.d);

	//������ �ɱ� ?
	struct AA sum = { 0 };

	//sum = aa1 + aa2; //���� �����ڴ� ������, �Ǽ��� �ڷ����� ������� �ϹǷ� ����� ���� �ڷ����� ��Ģ ������ ����. ������ ���� ���길 ����
	
}

//��ø ����ü. �л� ��ȣ, ����(��, ��, ����)
void ex1_7()
{
	struct Score
	{
		int eng, math, total;
	};

	struct Student
	{
		int no; struct Score score;
	};

	struct Student stu = { 1, {50, 60 } };
	stu.score.total = stu.score.eng + stu.score.math;

	printf("student no.%d total: %d \n", stu.no, stu.score.total);
}

//typedef�� ����ü�� ����ϴ� �ΰ��� ���
void ex1_9()
{
	struct Score
	{
		int eng, math, total;
	};
	//���1. ����ü�� ���� ����� ���� ���
	typedef struct Score SCORE;

	//���2. ����ü�� ����� �ٷ� ���
	typedef struct Student
	{
		int no;
		SCORE score;
	} STUDENT;

	STUDENT stu = {1, 0};
	printf("stu no.%d \n", stu.no);
}

//��������� �迭 ����ϱ�
void ex1_10()
{
	struct Student
	{
		char no[10], name[20]; 
		double math, eng, total;
	};

	struct Student stu1 = { "20090204", "Jones", 10, 20, 30 };
	printf("%s %s %lf %lf %lf \n", stu1.no, stu1.name, stu1.math, stu1.eng, stu1.total);

	//�л��� ��������
	struct Student stus[3] = {
		{ "20090204", "Jones", 10, 20, 30 },
		{ "20090567", "Joh", 11, 21, 31 },
		{ "20090123", "J", 12, 22, 32 }
	};

	for (int i = 0; i < 3; i++)
	{
		printf("%s %s \n", stus[i].no, stus[i].name);
	}
}

void ex1_12()
{
	struct Student
	{
		char no[10], name[20];
		double total;
	};

	struct Student stu[3];

	for (int i = 0; i < 3; i++)
	{
		printf("Input stu no., name, total in order: ");
		scanf_s("%s %s %lf", stu[i].no, 10, stu[i].name, 20, &stu[i].total); //%s �Է� ���� ���� ���� �� �Ķ���ͷ� �� �־��ָ� scanf_s�� �۵� ���ϴ� ����
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%s %s %lf \n", stu[i].no, stu[i].name, stu[i].total);
	}
}

void ex1_18()
{
	struct Student
	{
		char no[10], name[20];
		double total;
	};

	struct Student stu = { "2009022234", "Amy", 300 };
	struct Student* p = &stu;

	printf("%s %s %lf \n", stu.no, stu.name, stu.total);
	printf("%s %s %lf \n", (*p).no, (*p).name, (*p).total);
	printf("%s %s %lf \n", p->no, p->name, p->total);

	struct Student arr[3] = {
		{ "209022234", "Amy", 300 },
		{ "3009022234", "Jar", 100 },
		{ "4009022234", "Kim", 600 }
	};
	struct Student* pa = arr;

	printf("%s \n", pa[0]); //%s���� �ּҰ� ���� �Ѵٴ� �� ����
	printf("%s %s %lf \n", arr[0].no, arr[0].name, arr[0].total); //�迭�̸�, �迭�̸�, ������
	printf("%s %s %lf \n", (*pa).no, (*pa).name, (*pa).total); 
	printf("%s %s %lf \n\n", pa->no, pa->name, pa->total);

	printf("%s %s %lf \n", arr[1].no, arr[1].name, arr[1].total); //�迭�̸�, �迭�̸�, ������
	printf("%s %s %lf \n", (*(pa + 1)).no, (*(pa+1)).name, (*(pa+1)).total);
	printf("%s %s %lf \n", *pa[1].no, *pa[1].name, pa[1].total); //���Ⱑ ������. �����ͺ����� ����ü �迭 �θ��� ��� ���� �����ϱ�
	printf("%s %s %lf \n\n", (pa+1)->no, (pa+1)->name, (pa+1)->total);
}


void main()
{
	//ex1_2();
	//ex1_3();
	//ex1_4();
	//ex1_5();
	//ex1_7();
	//ex1_9();
	//ex1_10();
	//ex1_12();
	ex1_18();


}