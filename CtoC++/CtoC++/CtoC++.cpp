#include <stdio.h>
#include <iostream> //��������� ������ 99�⵵���� ���� ���Ͽ� .h�� ������ �ʴ´�.

using namespace std;


//1. ����� ���
//printf -> cout << ������
//scanf_s -> cin >> ������
void cppCout()
{
	printf("Hello C");
	
	std::cout << "Hello C++";
	std::cout << 'A';
	std::cout << 10;
	std::cout << 4.5;
	//�ٹٲ�
	std::cout << "\n"; //�̰� c�� ������ �����ߴ���
	std::cout << std::endl; //endl�� �������.

	std::cout << 100 << 200 << 'B' << std::endl << 3.14 << std::endl;
	std::cout << 3 + 5 << std::endl;

	int a = 50;
	char b = 'A';
	std::cout << a << b << std::endl << std::endl;
	
	//������
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

	//���ڿ� �Է�
	char word[10];
	std::cout << "Enter a word: ";
	std::cin >> word;
	std::cout << word << std::endl;
}

//2. ���� ���� ��ġ free.
//���� C������ � ������ � ���๮ �Ʒ� ���� �� ������. ��� ������ ���� ������ �����߾�� �ߴµ� ������ C�� �����Ӱ� �ٲ�
//������ C�� C++ �� ���̴� ����.

//3. �Լ��� �����ε� Overloading
//�Լ��� �̸��� ���� �Ķ���Ͱ� �ٸ� �Լ��� ���
//����Ÿ���� �޶� �����ε� ���� �ʴ´�.
//�Ķ������ �ڷ����� ���� Ȥ�� ������ �ٸ��� �ٸ��� ����. 
//�Ķ������ �������� �ٸ� �� �ǹ̾���.
//�������̵����� ���� ������ ����.

//���� �ٸ� ����� �ִ� �ٸ� ����� �̸��� ���� �Լ��� ���� ���� �տ� std:: ���� ��ü �̸��� �ٿ��� ����. �տ��� ���ϴ� ��ɸ� import �ϱ⵵ �ϰ�.
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

//4. �Լ� �Ķ������ �⺻��
//C, Java���� ����, Kotlin���� �ִ� ���
void bbb(int n = 3)
{
	std::cout << n << std::endl;
}

//Default���� �� �� ����! �⺻���� �� ���� �ٸ� �Լ����� �������̵� ������ ����
//�� �Լ��� �Ʒ� �Լ��� ȣ�⿡ ������ ���� �� �ִ�. ����.
//bbb()��� ȣ���ϸ� � �Լ��� �������� �𸣰��ݾ�.
//void bbb()
//{
//	std::cout << 10 << std::endl;
//}

//�⺻���� ��� �Ķ���Ͱ� ������ �ϴ� �� �ƴ����� ���� �ΰ� ������ ù �׸� ��� �� �ִ�. 
//�Ƹ� �������� �ڷ����� ���տ� ���� �Ǵ� ����� ���� ���� ��.

//5. inline �Լ�
//���� �Լ��� �ݺ��ؼ� ȣ���ϸ� �ӵ� �����ս��� ��������.
//���� �� �Լ� ������ main �Լ� ���� ������ ���� �� �� ������.
//�Լ� �տ� inline�̶�� ���ְ� �����ϸ� �� �Լ��� ȣ���� �����Ϸ��� �� �Լ� �������� ġȯ�Ѵ�.

//�Լ� a �����, b ����� ȣ���ϴ� �Ͱ� �Լ� a, b�� ������ ����� ȣ���ϴ� �� �ӵ��� �ٸ���?

//6. namespace �̸�����
//���� ����� �۾��ϴٺ��� ���� �����������̳� �Լ����� �Ἥ ��ġ�� ��찡 �߻�
//�������� Ȥ�� �Լ��� �׷���� �����ϴ� ����
//:: �������������� Scope resolution operator

//�� ���� ������ ������
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
	//������ �Լ��� �θ� �� namespace �̸��� �������������� ::�� �ٿ��ش�.
	std::cout << origin::Ver << std::endl;
	std::cout << ver2::Ver << std::endl;
	origin::display();
	ver2::display();

	//Ư�� namespace�� �⺻������ �ϴ� ��
	using ver2::Ver; //Ver�� �������� ver2�� Ver�� �⺻��
	std::cout << Ver << std::endl;
	using origin::display; //display()�� origin�� display()�� �⺻��
	display();

	//Ư�� namespace ��ü�� �⺻������ �ϴ� ��
	using namespace ver2; //using namespace ������/�Լ���
	std::cout << Ver << std::endl;
	display(); //ver2�� �ƴ� origin�� ������. ������ ���� ������ �ؼ� �׷���?

	//std�� �⺻������ ����.
	using namespace std; 

	//�������������� ::���� ������ �����ϴ� ��
	int g = 20;
	cout << g << endl;
	cout << ::g << endl; //������ �ִ� ���� g�� ����
}

//7.���� �߰� bool
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
		//if (n == 10) break; //break�� ���� �Ʒ� ��ɵ��� ������ �ȵ�
		if (n == 10) b = false; //bool�� ������������ ���� �Ʒ� ��ɱ��� ���� ����

		cout << "Hi" << endl;
	}

	cout << "size of bool: " << sizeof(bool) << endl;
	cout << "size of b: " << sizeof(b) << endl;

	//������ ����, �Ǽ��� ���ϴ� �� �̻��ϴ�. ������ ��������� ���� �ʴ´�.
}

//8. reference ������
void useReference()
{
	int a = 111;
	int& r = a; //r�� ������ �ƴϴ�. �޸𸮸� ���������� �ʴ´�. �׳� a�� ��Ī�̴�. ���Ե� �͵� ���� ����. �׳� a�� �̸� �ϳ� �� �� ��.
				//�� �� &�� �ּ� �����ڰ� �ƴϴ�. ���� �����ڴ�. �����Ϳ��� *�� ���� �����ڰ� �ƴ� ��ó��

	int* p; //�̰� ������ ����. �޸𸮸� �����Ѵ�. 

	r = 100;
	cout << r << endl;

	//C������ �̷� ����� �����ͷ� �����ؼ� ����ߴ�.
	//�� int a = 20; �̾��ٸ� int* p = &a; �� �����Ͽ� a�� �޸𸮿� ���� �����Ͽ�* p = 10; ���� �����ϰ� �ߴ�.
	//C++������ �̷� ���ŷο�� ������� �����ϱ� ���Ͽ� ������� ������ ������ ���̶� �����ϸ� �ȴ�.

	//��������(������) ������ ������ ����, �����ڰ� �����ڸ� ������ �� �ִ�.
	a = 20;
	int& b = a;
	int& c = b;
	int& d = a;

	//�ڹٿ����� �����ڰ� ���������� �ٲ����.
	//���������δ� �����Ϳ� ����.
}

void ccc(int& k)
{
	k++;
}

//9. new, delete
//malloc(), free() ��ü
//new�� ���� ���޸𸮿� ���������. ���޸𸮴� �̸��� ���� �� ����. �׷��� ����Ʈ������ (�ڹٿ����� ����������) �ּҸ� �־� ����.
void useNewDelete()
{
	//���޸� �ּ� ���忡 reference�� �� �� ������. reference ������ �� = �����ʿ��� ������ �;� �ϴµ� new�� �ּҸ� �����ϴϱ�.
	int* p1 = new int;
	*p1 = 123;
	cout << *p1 << endl;
	//delete p1; 
	cout << *p1 << endl; //���޸𸮸� delete�ϰ� �� ������ ����ϰ� �ߴ��� cout�� ���� ������ �ż� ������ cout�� ���� ����� �ȵǳ�. ����!

	//�迭
	double* p2 = new double[3];
	p2[0] = 3.14; 
	cout << p2[0] << endl;  
	delete[] p2; //ǥ�Ⱑ �ٸ���.
	cout << p2[0] << endl;

}

//10. ����� ����Ģ�� �޶�����.
// .h�� ���̴� ��� �տ� c�� ���δ�.
//ǥ�ض��̺귯�� �Լ� <stdlib.h>�� <cstdlib>�� �ƴ�.

// object
//��ü���⿡�� ���� �߿��� �� object
//Java������ class �ȿ����� �۾��� ������.

//object�� ��ǰ�̶�� �� ���赵�� class
//Java�� class�� C++�� class���� ���Դµ� �̴� C++�� ����ü���� ���԰� �̴� �ٽ� C�� ����ü���� ���Դ�. �� ���丮...

//C++������ ����ü �ȿ� �Լ��� ����� ���� �� �ְ� �ٲ���µ�...
struct Student //�л� �̸��� ������ ������ �� �ִ� ���ο� �ڷ��� ����
{
	//��� ����
	const char* name;
	int kor;
	int eng;
	//��� �Լ�
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
	Student stu;//C++������ struct�� ���� �ʾƵ� ����ü���� �˾Ƶ�´�.
	stu.name = "TIm";
	stu.eng = 90;
	stu.kor = 80;
	Student stu2 = { "Sam", 40, 33 };
	Student stu3 = { "Kim", 12, 55 };

	cout << "Name: " << stu.name << endl;
	cout << "Korean: " << stu.kor << endl;
	cout << "English: " << stu.eng << endl;
	cout << endl;
	//������� �ݺ��ϴ� �� �������� ���� C������ ����Լ��� ���� �������.
	
	show(stu); 
	show(stu2);
	show(stu3);
	//�׷��� �̷��� ����ü�� �� ������ ����Լ��� ����� ��� ����ϴ� �ͺ��ٴ�
	//�� ����ü ���� �ȿ� ����Լ��� ���� �ִٸ� �� ������ ������? 
	//�� ����Լ��� ��� ����ü�� ���� �������� ��Ȯ������.

	stu.show();
	stu2.show();
	stu3.show();

	//����ü�� �Լ��� �ְ� ���� �� ���ϳ�.
	//�ٵ� ���� �� ����ü�� ����� �θ���? ������� �ϱ⿣ �Լ��� �ְ� �Լ���� �ϱ⿣ ������ �ִµ�?
	//object��� �θ���. ��ü. ��ü.
	//�ٵ� object �ȿ� ������ ������ ����ü ������? �Լ��� ������ ����ü �Լ���?
	//����ü�� ���Ǵ� �����ִ� �������� �����ε� �Լ��� ������ �ȵ��ݾ�.
	//�׷� �ƿ� ����ü��� �̸��� ���� ����. struct ���� �ٸ� ��� ������.
	//���� class��� ��.
	//�����鸸 ��� ����ü�� ���� ���� struct�� ����, ������ �Լ����� ��� object�� ���� ���� class�� ����.
	//class�� ���� ���� ������ �־ �Լ��� �־ ����, �Լ� ���� �־ object��� �θ���.

	//���� ������ �Լ��� ���� �ִ� �� �ƴ϶� object �ȿ� ���� �� �ְ� �ƴ�!
	//���� ��ü ��ü���� �� ����� �װ� �϶�� ���� �� �ְ� �� ���̴�!

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
	ccc(n); //C���� int�� ������ �̰� ���� ������ ���̰� &n�� ������ �ּҸ� ������ ���̾���.
			//C++������ �̰͸� ����� �Լ����� �� ������ ���� ������ �� ���� ��ü�� reference�� ������ �� ���� ���� �ƴ�.
			//�Լ����� n�� ���� �޾� ���� n�� �������� ������ reference�� ����� ���� n�� ���� �ٲ� �� �ִ�.
	cout << n << endl; // 11

	useNewDelete();

	//whatsClass();

}