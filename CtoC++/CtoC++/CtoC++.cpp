#include <stdio.h>
#include <iostream> //헤더파일은 맞지만 99년도부터 개선 파일엔 .h를 붙이지 않는다.

using namespace std;


//1. 입출력 방법
//printf -> cout << 데이터
//scanf_s -> cin >> 변수명
void cppCout()
{
	printf("Hello C");
	
	std::cout << "Hello C++";
	std::cout << 'A';
	std::cout << 10;
	std::cout << 4.5;
	//줄바꿈
	std::cout << "\n"; //이게 c의 잔재라고 생각했는지
	std::cout << std::endl; //endl을 만들었다.

	std::cout << 100 << 200 << 'B' << std::endl << 3.14 << std::endl;
	std::cout << 3 + 5 << std::endl;

	int a = 50;
	char b = 'A';
	std::cout << a << b << std::endl << std::endl;
	
	//구구단
	printf("%d * %d = %d \n", 5, 1, 5 * 1);
	std::cout << 5 << " * " << 1 << " = " << 5 * 1 << std::endl;

}

void cppCin()
{
	int a;
	std::cout << "Enter a num: ";
	std::cin >> a;
	std::cout << a << std::endl;

	char c;
	std::cout << "Enter a character: ";
	std::cin >> c;
	std::cout << c << std::endl;

	//문자열 입력
	char word[10];
	std::cout << "Enter a word: ";
	std::cin >> word;
	std::cout << word << std::endl;
}

//2. 변수 선언 위치 free.
//원래 C에서는 어떤 변수도 어떤 실행문 아래 있을 수 없었다. 모든 변수는 제일 위에서 선언했어야 했는데 지금은 C도 자유롭게 바뀜
//지금은 C와 C++ 간 차이는 없다.

//3. 함수의 오버로딩 Overloading
//함수의 이름은 같고 파라미터가 다른 함수를 허용
//리턴타입은 달라도 오버로딩 되지 않는다.
//파라미터의 자료형의 갯수 혹은 순서가 다르면 다르게 본다. 
//파라미터의 변수명이 다른 건 의미없다.
//오버라이딩과는 전혀 관련이 없다.

//서로 다른 헤더에 있는 다른 기능의 이름이 같은 함수가 있을 때는 앞에 std:: 같은 객체 이름을 붙여서 구분. 앞에서 원하는 기능만 import 하기도 하고.
void aaa()
{
	std::cout << "aaa()" << std::endl;
}

void aaa(int n)
{
	std::cout << "aaa(" << n << ")" << std::endl;
}

void aaa(int n, int m)
{
	std::cout << "aaa(" << n << "," << m << ")" << std::endl;
}

void aaa(char c)
{
	std::cout << "aaa(" << c << ")" << std::endl;
}

void aaa(char c, int n)
{
	std::cout << "aaa(" << n << c << ")" << std::endl;
}

void aaa(int n, char c)
{
	std::cout << "aaa(" << n << c << ")" << std::endl;
}

//4. 함수 파라미터의 기본값
//C, Java에는 없고, Kotlin에는 있는 기능
void bbb(int n = 3)
{
	std::cout << n << std::endl;
}

//Default값을 쓸 때 주의! 기본값을 줄 때는 다른 함수와의 오버라이딩 에러를 주의
//위 함수와 아래 함수는 호출에 문제가 생길 수 있다. 에러.
//bbb()라고 호출하면 어떤 함수로 가야할지 모르겠잖아.
//void bbb()
//{
//	std::cout << 10 << std::endl;
//}

//기본값은 모든 파라미터가 가져야 하는 건 아니지만 항이 두개 있으면 첫 항만 비울 수 있다. 
//아마 추측컨대 자료형의 조합에 따라 되는 경우의 수가 많을 듯.

//5. inline 함수
//같은 함수를 반복해서 호출하면 속도 퍼포먼스가 떨어진다.
//차라리 그 함수 내용을 main 함수 내에 복붙해 놓는 게 더 빠르다.
//함수 앞에 inline이라고 써주고 선언하면 그 함수의 호출을 컴파일러가 그 함수 내용으로 치환한다.

//함수 a 오백번, b 오백번 호출하는 것과 함수 a, b를 번갈아 오백번 호출하는 게 속도가 다른가?

//6. namespace 이름공간
//여러 사람이 작업하다보면 같은 전역변수명이나 함수명을 써서 겹치는 경우가 발생
//전역변수 혹은 함수의 그룹명을 지정하는 느낌
//:: 범위지정연산자 Scope resolution operator

//두 개의 범위를 만들어보자
namespace origin
{
	int Ver = 1;
	int Score = 60;

	void display()
	{
		std::cout << "origin" << std::endl;
	}
}

namespace ver2
{
	int Ver = 2;
	int Score = 70;

	void display()
	{
		std::cout << "ver2" << std::endl;
	}
}

int g = 10;

void whatsNamespace()
{	
	//변수나 함수를 부를 땐 namespace 이름과 범위지정연산자 ::을 붙여준다.
	std::cout << origin::Ver << std::endl;
	std::cout << ver2::Ver << std::endl;
	origin::display();
	ver2::display();

	//특정 namespace를 기본값으로 하는 법
	using ver2::Ver; //Ver는 이제부터 ver2의 Ver가 기본값
	std::cout << Ver << std::endl;
	using origin::display; //display()는 origin의 display()가 기본값
	display();

	//특정 namespace 전체를 기본값으로 하는 법
	using namespace ver2; //using namespace 변수명/함수명
	std::cout << Ver << std::endl;
	display(); //ver2가 아닌 origin이 나오네. 위에서 세부 지정을 해서 그런가?

	//std도 기본값으로 하자.
	using namespace std; 

	//범위지정연산자 ::으로 전역을 지정하는 법
	int g = 20;
	cout << g << endl;
	cout << ::g << endl; //전역에 있는 변수 g를 지정
}

//7.논리형 추가 bool
//true, false
void useBool()
{
	cout << true << endl; //1
	cout << false << endl; //0

	int n = 0;
	bool b = true;

	while (b)
	{
		n++;
		//if (n == 10) break; //break를 쓰면 아래 명령들은 실행이 안됨
		if (n == 10) b = false; //bool을 제어조건으로 쓰면 아래 명령까지 실행 가능

		cout << "Hi" << endl;
	}

	cout << "size of bool: " << sizeof(bool) << endl;
	cout << "size of b: " << sizeof(b) << endl;

	//논리형과 정수, 실수를 더하는 건 이상하다. 논리형은 산술연산이 되지 않는다.
}

//8. reference 참조자
void useReference()
{
	int a = 111;
	int& r = a; //r은 변수가 아니다. 메모리를 차지하지도 않는다. 그냥 a의 별칭이다. 대입된 것도 딱히 없다. 그냥 a에 이름 하나 더 준 셈.
				//이 때 &는 주소 연산자가 아니다. 참조 연산자다. 포인터에서 *가 곱셈 연산자가 아닌 것처럼

	int* p; //이건 변수의 선언. 메모리를 차지한다. 

	r = 100;
	cout << r << endl;

	//C에서는 이런 방식을 포인터로 구현해서 사용했다.
	//즉 int a = 20; 이었다면 int* p = &a; 로 선언하여 a의 메모리에 직접 접근하여* p = 10; 으로 변경하곤 했다.
	//C++에서는 이런 번거로움과 어려움을 개선하기 위하여 참조라는 개념을 도입한 것이라 생각하면 된다.

	//참조자의(별명의) 개수는 제한이 없고, 참조자가 참조자를 참조할 수 있다.
	a = 20;
	int& b = a;
	int& c = b;
	int& d = a;

	//자바에서는 참조자가 참조변수로 바뀌었다.
	//내부적으로는 포인터와 같다.
}

void ccc(int& k)
{
	k++;
}

//9. new, delete
//malloc(), free() 대체
//new를 쓰면 힙메모리에 만들어진다. 힙메모리는 이름을 가질 수 없다. 그러니 포인트변수에 (자바에서는 참조변수에) 주소를 넣어 쓴다.
void useNewDelete()
{
	//힙메모리 주소 저장에 reference를 쓸 수 없구나. reference 선언할 때 = 오른쪽에는 변수가 와야 하는데 new는 주소를 리턴하니까.
	int* p1 = new int;
	*p1 = 123;
	cout << *p1 << endl;
	//delete p1; 
	cout << *p1 << endl; //힙메모리를 delete하고 그 영역을 출력하게 했더니 cout이 완전 먹통이 돼서 이후의 cout이 전부 출력이 안되네. 주의!

	//배열
	double* p2 = new double[3];
	p2[0] = 3.14; 
	cout << p2[0] << endl;  
	delete[] p2; //표기가 다르다.
	cout << p2[0] << endl;

}

//10. 헤더의 명명규칙이 달라졌다.
// .h를 붙이는 대신 앞에 c를 붙인다.
//표준라이브러리 함수 <stdlib.h>는 <cstdlib>이 됐다.

// object
//객체지향에서 가장 중요한 건 object
//Java에서는 class 안에서만 글씨가 써진다.

//object가 제품이라면 그 설계도가 class
//Java의 class는 C++의 class에서 나왔는데 이는 C++의 구조체에서 나왔고 이는 다시 C의 구조체에서 나왔다. 그 스토리...

//C++에서는 구조체 안에 함수를 멤버로 넣을 수 있게 바뀌었는데...
struct Student //학생 이름과 성적을 저장할 수 있는 새로운 자료형 설계
{
	//멤버 변수
	const char* name;
	int kor;
	int eng;
	//멤버 함수
	void show()
	{
		cout << "Name: " << name << endl;
		cout << "Korean: " << kor << endl;
		cout << "English: " << eng << endl;
		cout << endl;
	}
};

void show(Student s)
{
	cout << "Name: " << s.name << endl;
	cout << "Korean: " << s.kor << endl;
	cout << "English: " << s.eng << endl;
	cout << endl;
}

void whatsClass()
{
	Student stu;//C++에서는 struct를 쓰지 않아도 구조체인지 알아듣는다.
	stu.name = "TIm";
	stu.eng = 90;
	stu.kor = 80;
	Student stu2 = { "Sam", 40, 33 };
	Student stu3 = { "Kim", 12, 55 };

	cout << "Name: " << stu.name << endl;
	cout << "Korean: " << stu.kor << endl;
	cout << "English: " << stu.eng << endl;
	cout << endl;
	//사람마다 반복하는 게 귀찮으니 원래 C에서는 기능함수를 따로 만들었다.
	
	show(stu); 
	show(stu2);
	show(stu3);
	//그런데 이렇게 구조체를 쓸 때마다 기능함수를 만들어 대신 출력하는 것보다는
	//그 구조체 변수 안에 기능함수가 같이 있다면 더 편하지 않을까? 
	//그 기능함수가 어느 구조체를 위한 것인지도 명확해진다.

	stu.show();
	stu2.show();
	stu3.show();

	//구조체에 함수도 넣고 보니 더 편하네.
	//근데 이제 이 구조체를 뭐라고 부르지? 변수라고 하기엔 함수도 있고 함수라고 하기엔 변수도 있는데?
	//object라고 부르자. 물체. 객체.
	//근데 object 안에 변수만 있으면 구조체 변수야? 함수만 있으면 구조체 함수야?
	//구조체의 정의는 연관있는 데이터의 묶음인데 함수가 있으면 안되잖아.
	//그럼 아예 구조체라는 이름도 쓰지 말자. struct 말고 다른 명령 만들자.
	//이제 class라고 해.
	//변수들만 묶어서 구조체를 만들 때는 struct를 쓰고, 변수와 함수까지 묶어서 object를 만들 때는 class를 쓰자.
	//class로 만든 것은 변수만 있어도 함수만 있어도 변수, 함수 같이 있어도 object라고 부른다.

	//이제 변수와 함수는 따로 있는 게 아니라 object 안에 묶을 수 있게 됐다!
	//이제 객체 자체에게 네 기능은 네가 하라고 말할 수 있게 된 것이다!

}



void main()
{
	//cppCout();
	//cppCin();

	//aaa();
	//aaa(10);
	//aaa(10, 5);
	//aaa('C');
	//aaa('C', 5);
	//aaa(10, 'C');

	bbb(500);
	bbb();

	whatsNamespace();
	
	useBool();

	useReference();
	int n = 10;
	ccc(n); //C에서 int를 보내면 이건 값을 보내는 것이고 &n을 보내면 주소를 보내는 것이었다.
			//C++에서는 이것만 보고는 함수에서 이 변수의 값만 쓰는지 이 변수 자체를 reference로 쓰는지 알 수가 없게 됐다.
			//함수에서 n의 값만 받아 쓰면 n은 수정되지 않지만 reference를 만들어 쓰면 n의 값도 바뀔 수 있다.
	cout << n << endl; // 11

	useNewDelete();

	//whatsClass();

}