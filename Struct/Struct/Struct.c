#include <stdio.h>
#include <stdlib.h>

//Struct 구조체
//서로 연관있는 변수들을 묶어서 관리하는 기법
//개발자 정의 자료형 - 기존 6개의 자료형 대신 새로운 자료형을 설계하는 문법
//변수가 아니라 자료형을 만드는 거다?
//이름은 기존의 키워드 외에는 마음대로 정해도 된다.
//자바에 가면 Class로 바뀐다.

//학생 성적 데이터
struct Student //스튜던트형(자료형)
{
	char* name; //변수 선언한 게 아니라 자료형의 설계일 뿐이다. 이 설계도 만으로는 메모리 영역에 변수는 하나도 만들어지지 않는다.
	int kor;	//요 각각의 칸들은 멤버라고 부른다. 변수가 만들어진 뒤에는 멤버변수라고 부른다. Java에서는 필드...지만 다들 멤버변수라고 부른다고.
	int eng;	
	int math;
	double aver;

	//변수명 생성 룰: 자료형의 첫글자는 대문자로. 변수가 아니라는 느낌을 주려고. 파스칼 표기법으로.
	//일반 변수명은 카멜 표기법, 상수명은 전부 대문자로
};

//중첩 구조체
//구조체 안에 구조체를 만들 수 있다.
struct Local
{
	char* nation;
	char* city;
};

struct People
{
	char* name;
	int age;
	//주소 안에 국가와 도시를 저장하고 싶으면? 그런 구조체(Local)를 미리 만들어서 불러온다.
	struct Local address;
};//People의 멤버는 셋이지만 전체적으로는 넷이 된다.

struct Member
{
	char names[20];
	int age;
};

void printStudent(struct Student s);
//순서는 #include - 구조체 - 프로토타입 - 전역변수 - main - 함수 순으로 기입하길 선호

//구조체의 크기
void sizeofStruct()
{
	printf("----sizeofStruct---");
	printf("%zd \n", sizeof(struct Student)); 
	printf("%zd \n", sizeof(struct Local));
	printf("%zd \n", sizeof(struct People)); //20바이트짜리 배열이 있어도 그냥 20+4가 나오네. 배열은 좀 다른가.
	printf("%zd \n", sizeof(struct Member));
	//구조체의 크기는 단순히 멤버변수들의 합이 아니다.
	//CPU가 메모리를 읽어오는 방식에 최적화되도록 메모리 영역을 만들기 때문에 생기는 일
	//가장 크기가 큰 멤버변수를 기준으로 배수로 공간을 할당한다. 
	//int, char, char, char*, char 순이면 포인터 변수의 8바이트를 기준으로 배치한다. 
	//배치하다가 8바이트를 넘어가면 유휴공간으로 두고 다음 8바이트를 할당한다.
	//8(int 4, char 1, char1, 버퍼 2) + 8(char* 8) + 8(char 1, 버퍼 7) = 24
	//구조체의 크기를 줄인다고 멤버변수의 순서를 바꿀 필요는 없고 그냥 편한대로 쓴다.
	//다만 주의할 곳은 malloc() 선언 때 바이트 수를 직접 계산해 쓰면 틀릴 수 있으니 대신 sizeof를 쓰는 게 좋다.
}

void main()
{
	sizeofStruct();

	//Student 자료형의 사용
	struct Student stu1; //키워드-자료형-변수명 순으로 선언. static int a;와 같은 문법. 메모리에 변수 생성 
	//student형 변수라고 부른다. int형 변수, char형 변수처럼.
	//선언과 동시에 다섯개의 변수가 만들어진다.
	//메모리를 차지하는 영역은 배열처럼 차례대로 만들어지지만 중간에 유휴공간이 남기도 한다.
	printf("%p \n", &stu1);
	printf("%p \n", &stu1.name);
	printf("%p \n", &stu1.kor);
	printf("%p \n", &stu1.eng);
	printf("%p \n", &stu1.math); //int 4바이트 뒤에 유휴공간이 4바이트
	printf("%p \n", &stu1.aver);
	
	//하지만 배열처럼 Student형 변수 이름을 찍는다고 주소가 나오진 않는다. 정말?
	printf("%p \n", &stu1);

	//초기화
	struct Student stu2 = { "Tom", 40, 50, 60, 50.0 };

	//대입
	//구조체 안에 있는 칸에 접근할 수 있는 접근 연산자 . 쩜
	stu1.name = "Sam";
	stu1.kor = 80;
	stu1.eng = 70;
	stu1.math = 90;
	stu1.aver = (double)(stu1.kor + stu1.eng + stu1.math) / (double)3;

	printf("%s \n", stu1.name);
	printf("%d \n", stu1.kor);
	printf("%d \n", stu1.eng);
	printf("%d \n", stu1.math);
	printf("%lf \n", stu1.aver);

	//구조체 변수끼리의 대입
	//일반 자료형 변수끼리 대입하는 것과 같다.
	//배열과 흡사한 메모리 구조를 갖고 있지만 배열의 이름이 주소인 것과 달리 구조체 변수의 이름은 주소가 아니다. 
	struct Student stu3;
	stu3 = stu2;

	//매번 프린트를 다섯번씩 하는 게 불편하네
	//구조체 자료형을 출력해주는 전용 함수를 만들어 이용한다.
	//
	printStudent(stu3);

	//People 자료형의 사용(중첩 구조체)
	struct People h1;
	h1.name = "Sara";
	h1.age = 11;
	h1.address.nation = "Korea";
	h1.address.city = "Busan";

	printf("%s(%d) %s, %s \n", h1.name, h1.age, h1.address.city, h1.address.nation);

	//구조체 배열
	//특별할 거 없다.
	struct People workers[3];
	workers[0].name = "Karl";
	workers[0].age = 80;
	workers[0].address.nation = "Brazil";
	workers[0].address.city = "Sao Paulo";

	for (int i = 0; i < 1; i++)
	{
		printf("%s(%d) %s, %s \n", workers[i].name, workers[i].age, workers[i].address.city, workers[i].address.nation);
	}
	printf("---\n");

	//구조체 배열의 초기화
	struct People teachers[3] = {
		{"Kim", 20, {"Korea", "Seoul"}},
		{"Park", 40},
		{"Lee", 50}
	};
	//, {"Korea", "Seoul"}

	printf("%s %d %s %s \n", teachers[0].name, teachers[0].age, teachers[0].address.nation, teachers[0].address.city);
	printf("---\n");

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%s(%d) %s, %s \n", teachers[i].name, teachers[i].age, teachers[i].address.city, teachers[i].address.nation);
	//}
	//printf("\n");

	//키보드로 입력받기
	//scanf는 문자열을 배열로 입력받아야 한다.
	struct Member m1;
	printf("Name: ");
	scanf_s("%s", m1.names, 20); //names는 배열 이름이니까 주소. &가 필요 없다.
	printf("Age: ");
	scanf_s("%d", &m1.age);

	printf("%s %d \n", m1.names, m1.age);

	//구조체 포인터 변수
	struct Member* sp;
	sp = &m1;
	//(*sp).names = "Paul";//names가 이미 만들어진 배열이라 문자열이 안 들어가는구나. 대입하려면 for문 써야. 애초에 names를 포인터 변수로 만들던가.
	(*sp).age = 30; //연산자 순서 때문에 괄호 없으면 *(sp.age)로 읽히는데 sp.age는 포인터변수가 아니므로 에러.
	printf("%s %d \n", m1.names, m1.age);

	//멤버변수가 포인터변수일 때마다 (*ptr).member 라고 쓰는 게 불편해서 ptr->member라는 표현을 만들어줌
	sp->age = 40;
	printf("%s %d \n", m1.names, m1.age);

	//구조체를 Heap memory에 만들기(동적 메모리 할당)
	//자바에선 클래스(구조체 또는 객체)는 무조건 Heap 영역에 만들어진다.
	struct People* psm = (struct People*)malloc(sizeof(struct People));
	psm->name = "John";
	psm->age = 25;
	psm->address.nation = "Asgard";
	psm->address.city = "The city";
	printf("%s %d \n", psm->name, psm->age);

	struct People* psm2 = psm; //복사도 가능
	printf("%s %d \n", psm2->name, psm2->age); 

	free(psm); 
	//free(psm2);//컴파일러 에러. 이미 없어진 영역을 지우는 코드.
	//printf("%s %d \n", psm->name, psm->age); //안나온다.
	//printf("%s %d \n", psm2->name, psm2->age); //안나온다.


	//구조체 포인터변수 3개짜리 배열
	struct People* pp[3]; //'구조체를 가리키는 포인터변수'가 들어가는 배열 3칸. 지금은 쓰레기 들어가 있음.

	pp[0] = malloc(sizeof(struct People)); //각 포인터변수에 Heap memory 영역을 만들어 주소 할당
	pp[1] = malloc(sizeof(struct People));
	pp[2] = malloc(sizeof(struct People));
	
	pp[0]->name = "Black"; pp[0]->age = 99; pp[0]->address.nation = "France"; 
	pp[1]->name = "Aden"; pp[1]->age = 49; 
	pp[2]->name = "Luke"; pp[2]->age = 59; pp[2]->address.nation = "USA"; 
	
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d %s %s \n", pp[i]->name, pp[i]->age, pp[i]->address.nation); //NULL값을 한번 프린트 시키니까 그 이후 줄은 아무것도 안나오네.
																				//형식문자는 네 갠데 주소는 값은 세 개만 주니까 네번째 칸에는 이전에 들어갔던 "Seoul"이 나오네. 
																				//printf의 특징으로 참고
	}

}

void printStudent(struct Student s)
{
	printf("Name: %s \n", s.name);
	printf("Korean: %d \n", s.kor);
	printf("English: %d \n", s.eng);
	printf("Math: %d \n", s.math);
	printf("Average: %lf \n", s.aver);

}

