#include <iostream>
using namespace std;

//1. 정보은닉 Information hiding
//접근 제한자
//1. private
//외부에서 점. 찍어도 보이지 않음
//클래스 내부 멤버들끼리만 접근 가능

//2. protected
//외부에서 점. 찍어도 보이지 않음
//가족(상속받은)끼리는 접근 가능

//3. public
//외부에서 점. 으로 접근 가능

//C++에서 기본값은 private

//멤버변수들은 private으로 두고 그것들을 보여주는 멤버함수들은 public으로 두는 게 지난 20년간 일반적이었으나
//class Student
//{
//private:
//	char* name;
//	int kor;
//protected:
//	int eng;
//public:
//	void show()
//	{
//		cout << name << endl;
//		cout << kor << endl;
//		cout << eng << endl;
//	}
//};

//함수형 프로그래밍에서는 정보은닉이 코딩만 불편하게 한다고 보고 보통 public으로 두는 게 트렌드.
class Student //객체의 자료형을 클래스명이라고도 부른다. "이 객체의 자료형이 뭐야? = "이 객체의 클래스명이 뭐야?"
{
public:
	const char* name;
	int kor;
	int eng;

	void show()
	{
		cout << name << endl;
		cout << kor << endl;
		cout << eng << endl;
	}

	void setMembers(const char* name, int kor, int eng) 
	{
		//name = name //?? 파라미터를 name, kor, eng이라고 했더니 멤버변수 이름을 가렸다. 그렇다고 파라미터명을 다르게 하기는 마땅치 않다면?
		//Class 안에서 본인(의 주소)을 가리키는 포인터변수가 있다. 
		//This

		Student::name = name;
		Student::kor = kor;
		Student::eng = eng;
	}

	Student(const char* name, int kor, int eng) //함수명 앞에 리턴타입을 쓰면 안된다.
	{
		this->name = name;
		this->kor = kor;
		this->eng = eng;
		cout << "객체 생성 및 파라미터 초기화" << endl;

	} //이 함수를 만들고 나니 기존에 new Student라고 객체를 만들던 명령들이 에러가 난다. 
	//모든 객체에는 default contructor가 있다. 초기화 하지 않는 기본값 생성자
	//그동안 new Student라고만 쓸 때도 Student 뒤에는 보이지는 않지만 기본값 생성자 함수가 작동하고 있던 것.
	//하지만 같은 이름의 생성자 함수를 하나라도 만드는 순간 디폴트 생성자는 무시된다. 그래서 에러가 나는 것.
	//그러면 어떡하나? 함수 오버로드를 이용한다.
	//파라미터가 없는 Student 생성자 함수를 하나 더 만든다. 만드는 김에 초기화 기능을 넣어서 쓴다.

	Student()
	{
		name = NULL;
		kor = 0;
		eng = 0;
		cout << "객체 생성 및 0으로 초기화" << endl;
	}
};

void infoHiding()
{
	Student stu; //Student 객체: 변수 + 함수. 이 객체의 자료형은 Student형이다. 지역에 만들었으니 지역 객체
	stu.name = "Sam";
	stu.kor = 70;
	stu.eng = 90;
	stu.show();

	Student stu2; //Student 객체
	stu2.name = "Tim";
	stu2.kor = 10;
	stu2.eng = 30;
	stu2.show();

	//변수는 선언한다고 하고, 함수는 선언 및 정의한다고 하고, 
	//객체는 생성한다고 한다.

	//Java에서 모든 객체는 Heap 영역에만 만들 수 있다.
	//C++에서는 변수처럼 원하는 곳에 만들 수 있다. 
	//Heap 메모리에 객체를 생성해보자.
	new int;
	new double;
	new Student;
	//new도 malloc처럼 주소를 리턴해준다. 포인터 변수에 담아 쓴다.
	Student* p = new Student;
	//*p.name = "John"; // . 점 연산자가 * 역참조 연산자보다 우선하므로 p.name을 먼저 찾느데 포인터 변수 안에 name 이 없으니 에러.
	(*p).name = "John"; // 이렇게 쓰거나
	p->name = "John"; //이렇게 쓴다.
	p->show();
	
	//멤버변수 대입을 한번에 할 수 있는 기능함수를 만들자.
	p->setMembers("Lee", 40, 56);
	p->show();

	//객체는 생성하면서 바로 초기화할 수 없나?
	//매번 객체 생성 후 따로 대입을 해줘야 하잖아. 두 줄 씩.
	Student* p2 = new Student;
	p2->name = "Ko";
	//객체의 생성과 동시에 발동하는 초기화 함수가 있다면?
	//생성자(함수)가 바로 그것!
}

//생성자 Constructor
void constructor()
{
	//객체가 생성될 때 자동으로 발동하는 Method. 
	//규칙도 특별하다.
	//규칙1. 함수 이름이 클래스 이름과 같아야 한다.
	//규칙2. return type은 명시하지 않는다. 리턴타입을 함수 앞에 쓰지 않아야 한다.
	//규칙3. 파라미터를 전달받을 수 있다. 초기화값을 받아야 하니까.
	Student* p3 = new Student("Park", 22, 33); //클래스명이 곧 함수명이니 그 뒤에 파라미터를 전달한다.
	//Student* p4 = new Student;
	Student* p4 = new Student(); //클래스명 뒤에 괄호를 생략해도 되지만 함수 느낌을 주기 위해 괄호를 써주는 것을 선호.
}

//상속 Inheritance

class Robot
{
public:
	const char* name;
	int hp;
	//이동 기능
	void move()
	{
		cout << "가자가자" << endl;
	}
	//공격 기능
	void attack()
	{
		cout << "죽어랏!" << endl;
	}
};

class RobotFly
{
public:
	Robot robot; //로봇 기능은 그대로 가져오면서
	//비행 기능만 추가
	void fly()
	{
		cout << "부우우웅" << endl;
	}
};

//하지만 중첩보다 더 좋은 방법이 상속!
class RobotSwim :public Robot //뒤에 써주는 게 상속의 문법 
{ //Robot의 멤버변수를 복붙하는 방식이 아니라 RobotSwim 객체 안에 Robot 객체가 만들어지는 것. 마트료시카 인형처럼.
public:
	void swim()
	{
		cout << "풍~덩~" << endl;
	}
};

//오버라이드
//상속받은 기능을 수정하는 문법
//함수명과 파라미터가 동일하므로 오버로드와는 다르다.
//상속받은 attack()을 수정한 attack()이 올라타서 가려진다. 둘 다 살아있다.
class RobotFast :public Robot 
{ 
public:
	void attack()
	{
		cout << "받아라! 와다다다" << endl;
	}
};

void inheritance()
{
	Robot* r1 = new Robot(); 
	r1->move();
	r1->attack();

	RobotFly* r3 = new RobotFly(); //Robot을 중첩한 클래스
	r3->robot.move();
	r3->robot.attack();
	r3->fly();

	RobotSwim* r4 = new RobotSwim(); //Robot을 상속한 클래스. 
	r4->move();
	r4->attack();
	r4->swim();

	RobotFast* r5 = new RobotFast();
	r5->attack(); //수정한 attack(). 오버라이드. 

	//언어별 상위 클래스 - 하위 클래스
	//C++	base class - driven class 
	//Java: super class - sub class
	//C#:	parent class - chiild class

}

void main()
{
	infoHiding();
	constructor();
	inheritance();


}