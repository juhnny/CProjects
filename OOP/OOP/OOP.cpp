#include <iostream>
using namespace std;

//1. �������� Information hiding
//���� ������
//1. private
//�ܺο��� ��. �� ������ ����
//Ŭ���� ���� ����鳢���� ���� ����

//2. protected
//�ܺο��� ��. �� ������ ����
//����(��ӹ���)������ ���� ����

//3. public
//�ܺο��� ��. ���� ���� ����

//C++���� �⺻���� private

//����������� private���� �ΰ� �װ͵��� �����ִ� ����Լ����� public���� �δ� �� ���� 20�Ⱓ �Ϲ����̾�����
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

//�Լ��� ���α׷��ֿ����� ���������� �ڵ��� �����ϰ� �Ѵٰ� ���� ���� public���� �δ� �� Ʈ����.
class Student //��ü�� �ڷ����� Ŭ�������̶�� �θ���. "�� ��ü�� �ڷ����� ����? = "�� ��ü�� Ŭ�������� ����?"
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
		//name = name //?? �Ķ���͸� name, kor, eng�̶�� �ߴ��� ������� �̸��� ���ȴ�. �׷��ٰ� �Ķ���͸��� �ٸ��� �ϱ�� ����ġ �ʴٸ�?
		//Class �ȿ��� ����(�� �ּ�)�� ����Ű�� �����ͺ����� �ִ�. 
		//This

		Student::name = name;
		Student::kor = kor;
		Student::eng = eng;
	}

	Student(const char* name, int kor, int eng) //�Լ��� �տ� ����Ÿ���� ���� �ȵȴ�.
	{
		this->name = name;
		this->kor = kor;
		this->eng = eng;
		cout << "��ü ���� �� �Ķ���� �ʱ�ȭ" << endl;

	} //�� �Լ��� ����� ���� ������ new Student��� ��ü�� ����� ��ɵ��� ������ ����. 
	//��� ��ü���� default contructor�� �ִ�. �ʱ�ȭ ���� �ʴ� �⺻�� ������
	//�׵��� new Student��� �� ���� Student �ڿ��� �������� ������ �⺻�� ������ �Լ��� �۵��ϰ� �ִ� ��.
	//������ ���� �̸��� ������ �Լ��� �ϳ��� ����� ���� ����Ʈ �����ڴ� ���õȴ�. �׷��� ������ ���� ��.
	//�׷��� ��ϳ�? �Լ� �����ε带 �̿��Ѵ�.
	//�Ķ���Ͱ� ���� Student ������ �Լ��� �ϳ� �� �����. ����� �迡 �ʱ�ȭ ����� �־ ����.

	Student()
	{
		name = NULL;
		kor = 0;
		eng = 0;
		cout << "��ü ���� �� 0���� �ʱ�ȭ" << endl;
	}
};

void infoHiding()
{
	Student stu; //Student ��ü: ���� + �Լ�. �� ��ü�� �ڷ����� Student���̴�. ������ ��������� ���� ��ü
	stu.name = "Sam";
	stu.kor = 70;
	stu.eng = 90;
	stu.show();

	Student stu2; //Student ��ü
	stu2.name = "Tim";
	stu2.kor = 10;
	stu2.eng = 30;
	stu2.show();

	//������ �����Ѵٰ� �ϰ�, �Լ��� ���� �� �����Ѵٰ� �ϰ�, 
	//��ü�� �����Ѵٰ� �Ѵ�.

	//Java���� ��� ��ü�� Heap �������� ���� �� �ִ�.
	//C++������ ����ó�� ���ϴ� ���� ���� �� �ִ�. 
	//Heap �޸𸮿� ��ü�� �����غ���.
	new int;
	new double;
	new Student;
	//new�� mallocó�� �ּҸ� �������ش�. ������ ������ ��� ����.
	Student* p = new Student;
	//*p.name = "John"; // . �� �����ڰ� * ������ �����ں��� �켱�ϹǷ� p.name�� ���� ã���� ������ ���� �ȿ� name �� ������ ����.
	(*p).name = "John"; // �̷��� ���ų�
	p->name = "John"; //�̷��� ����.
	p->show();
	
	//������� ������ �ѹ��� �� �� �ִ� ����Լ��� ������.
	p->setMembers("Lee", 40, 56);
	p->show();

	//��ü�� �����ϸ鼭 �ٷ� �ʱ�ȭ�� �� ����?
	//�Ź� ��ü ���� �� ���� ������ ����� ���ݾ�. �� �� ��.
	Student* p2 = new Student;
	p2->name = "Ko";
	//��ü�� ������ ���ÿ� �ߵ��ϴ� �ʱ�ȭ �Լ��� �ִٸ�?
	//������(�Լ�)�� �ٷ� �װ�!
}

//������ Constructor
void constructor()
{
	//��ü�� ������ �� �ڵ����� �ߵ��ϴ� Method. 
	//��Ģ�� Ư���ϴ�.
	//��Ģ1. �Լ� �̸��� Ŭ���� �̸��� ���ƾ� �Ѵ�.
	//��Ģ2. return type�� ������� �ʴ´�. ����Ÿ���� �Լ� �տ� ���� �ʾƾ� �Ѵ�.
	//��Ģ3. �Ķ���͸� ���޹��� �� �ִ�. �ʱ�ȭ���� �޾ƾ� �ϴϱ�.
	Student* p3 = new Student("Park", 22, 33); //Ŭ�������� �� �Լ����̴� �� �ڿ� �Ķ���͸� �����Ѵ�.
	//Student* p4 = new Student;
	Student* p4 = new Student(); //Ŭ������ �ڿ� ��ȣ�� �����ص� ������ �Լ� ������ �ֱ� ���� ��ȣ�� ���ִ� ���� ��ȣ.
}

//��� Inheritance

class Robot
{
public:
	const char* name;
	int hp;
	//�̵� ���
	void move()
	{
		cout << "���ڰ���" << endl;
	}
	//���� ���
	void attack()
	{
		cout << "�׾��!" << endl;
	}
};

class RobotFly
{
public:
	Robot robot; //�κ� ����� �״�� �������鼭
	//���� ��ɸ� �߰�
	void fly()
	{
		cout << "�ο���" << endl;
	}
};

//������ ��ø���� �� ���� ����� ���!
class RobotSwim :public Robot //�ڿ� ���ִ� �� ����� ���� 
{ //Robot�� ��������� �����ϴ� ����� �ƴ϶� RobotSwim ��ü �ȿ� Robot ��ü�� ��������� ��. ��Ʈ���ī ����ó��.
public:
	void swim()
	{
		cout << "ǳ~��~" << endl;
	}
};

//�������̵�
//��ӹ��� ����� �����ϴ� ����
//�Լ���� �Ķ���Ͱ� �����ϹǷ� �����ε�ʹ� �ٸ���.
//��ӹ��� attack()�� ������ attack()�� �ö�Ÿ�� ��������. �� �� ����ִ�.
class RobotFast :public Robot 
{ 
public:
	void attack()
	{
		cout << "�޾ƶ�! �ʹٴٴ�" << endl;
	}
};

void inheritance()
{
	Robot* r1 = new Robot(); 
	r1->move();
	r1->attack();

	RobotFly* r3 = new RobotFly(); //Robot�� ��ø�� Ŭ����
	r3->robot.move();
	r3->robot.attack();
	r3->fly();

	RobotSwim* r4 = new RobotSwim(); //Robot�� ����� Ŭ����. 
	r4->move();
	r4->attack();
	r4->swim();

	RobotFast* r5 = new RobotFast();
	r5->attack(); //������ attack(). �������̵�. 

	//�� ���� Ŭ���� - ���� Ŭ����
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