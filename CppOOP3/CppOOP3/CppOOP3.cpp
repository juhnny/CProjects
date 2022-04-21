#include <iostream>
using namespace std;

//대학 회원가입을 통한 정보 Data를 저장
//1. 일반: 이름, 나이
//2. 학생: 이름, 나이, 전공
//3. 교수: 이름, 나이, 연구과제
//4. 근로장학생: 이름, 나이, 전공, 업무
class Member
{
public:
	const char* name;
	int age;
	Member(const char* name, int age)
	{
		this->name = name;
		this->age = age;
	}
	Member()
	{
		name = NULL;
		age = 0;
	}
	void show()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

class MemberStu :public Member
{
public: 
	const char* major;
	MemberStu(const char* name, int age, const char* major) :Member(name, age) //생성자
	{
		this->major = major;
	}
	void show() 
	{
		Member::show(); 
		cout << "Major: " << major << endl;
	}
};

class MemberFac :public Member
{
public:
	const char* project;
	MemberFac(const char* name, int age, const char* project) :Member(name, age)
	{
		this->project = project;
	}
	void show()
	{
		Member::show();
		cout << "project: " << project << endl;
	}
};

class MemberWork : public MemberStu
{
public:
	const char* work;
	MemberWork(const char* name, int age, const char* major, const char* work) :MemberStu(name, age, major) 
	{
		this->work = work;
	}
	void show()
	{
		MemberStu::show();
		cout << "Work: " << work << endl;
	}
};

void aaa()
{
	Member* p1 = new Member("Kim", 15);
	p1->show();
	cout << endl;

	MemberStu* p2 = new MemberStu("Lee", 34, "android");
	p2->show();
	cout << endl;

	MemberFac* p3 = new MemberFac("Choi", 60, "Mobile optimization");
	p3->show();
	cout << endl;

	MemberWork* p4 = new MemberWork("Park", 20, "Geography", "Home");
	p4->show();
	cout << endl;

}

void main()
{
	aaa();
}