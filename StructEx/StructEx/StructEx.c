#include <stdio.h>
#include <stdlib.h>

//scanf_s로 구조체에 데이터 저장
void ex1_2()
{
	//구조체 설계	
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

//구조체 변수의 초기화
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

//구조체를 좌표로 활용
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

//같은 자료형의 구조체 변수끼리는 통째로 복사가 된다.
void ex1_5()
{
	struct AA { int a; int b; };
	struct BB { int c; int d; };

	struct AA aa1 = { 10, 30 };
	struct AA aa2 = { 0 };
	struct BB bb = { 0 };
	aa2 = aa1;
	//bb = aa1; //구조가 같아도 자료형이 다르면 복사 불가

	printf("aa: %d, %d \n", aa2.a, aa2.b);
	printf("bb: %d, %d \n", bb.c, bb.d);

	//덧셈도 될까 ?
	struct AA sum = { 0 };

	//sum = aa1 + aa2; //덧셈 연산자는 정수형, 실수형 자료형을 대상으로 하므로 사용자 정의 자료형에 사칙 연산은 에러. 오로지 대입 연산만 가능
	
}

//중첩 구조체. 학생 번호, 점수(영, 수, 총점)
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

//typedef를 구조체에 사용하는 두가지 방법
void ex1_9()
{
	struct Score
	{
		int eng, math, total;
	};
	//방법1. 구조체를 먼저 만들고 따로 사용
	typedef struct Score SCORE;

	//방법2. 구조체를 만들며 바로 사용
	typedef struct Student
	{
		int no;
		SCORE score;
	} STUDENT;

	STUDENT stu = {1, 0};
	printf("stu no.%d \n", stu.no);
}

//멤버변수로 배열 사용하기
void ex1_10()
{
	struct Student
	{
		char no[10], name[20]; 
		double math, eng, total;
	};

	struct Student stu1 = { "20090204", "Jones", 10, 20, 30 };
	printf("%s %s %lf %lf %lf \n", stu1.no, stu1.name, stu1.math, stu1.eng, stu1.total);

	//학생이 많아지면
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
		scanf_s("%s %s %lf", stu[i].no, 10, stu[i].name, 20, &stu[i].total); //%s 입력 받을 때는 문자 수 파라미터로 안 넣어주면 scanf_s가 작동 안하니 주의
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

	printf("%s \n", pa[0]); //%s에는 주소가 들어가야 한다는 걸 유의
	printf("%s %s %lf \n", arr[0].no, arr[0].name, arr[0].total); //배열이름, 배열이름, 변수명
	printf("%s %s %lf \n", (*pa).no, (*pa).name, (*pa).total); 
	printf("%s %s %lf \n\n", pa->no, pa->name, pa->total);

	printf("%s %s %lf \n", arr[1].no, arr[1].name, arr[1].total); //배열이름, 배열이름, 변수명
	printf("%s %s %lf \n", (*(pa + 1)).no, (*(pa+1)).name, (*(pa+1)).total);
	printf("%s %s %lf \n", *pa[1].no, *pa[1].name, pa[1].total); //여기가 막히네. 포인터변수로 구조체 배열 부르는 방법 전부 정리하기
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