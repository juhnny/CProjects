#include <stdio.h>
#include <stdlib.h>

//Struct ����ü
//���� �����ִ� �������� ��� �����ϴ� ���
//������ ���� �ڷ��� - ���� 6���� �ڷ��� ��� ���ο� �ڷ����� �����ϴ� ����
//������ �ƴ϶� �ڷ����� ����� �Ŵ�?
//�̸��� ������ Ű���� �ܿ��� ������� ���ص� �ȴ�.
//�ڹٿ� ���� Class�� �ٲ��.

//�л� ���� ������
struct Student //��Ʃ��Ʈ��(�ڷ���)
{
	char* name; //���� ������ �� �ƴ϶� �ڷ����� ������ ���̴�. �� ���赵 �����δ� �޸� ������ ������ �ϳ��� ��������� �ʴ´�.
	int kor;	//�� ������ ĭ���� ������ �θ���. ������ ������� �ڿ��� ���������� �θ���. Java������ �ʵ�...���� �ٵ� ���������� �θ��ٰ�.
	int eng;	
	int math;
	double aver;

	//������ ���� ��: �ڷ����� ù���ڴ� �빮�ڷ�. ������ �ƴ϶�� ������ �ַ���. �Ľ�Į ǥ�������.
	//�Ϲ� �������� ī�� ǥ���, ������� ���� �빮�ڷ�
};

//��ø ����ü
//����ü �ȿ� ����ü�� ���� �� �ִ�.
struct Local
{
	char* nation;
	char* city;
};

struct People
{
	char* name;
	int age;
	//�ּ� �ȿ� ������ ���ø� �����ϰ� ������? �׷� ����ü(Local)�� �̸� ���� �ҷ��´�.
	struct Local address;
};//People�� ����� �������� ��ü�����δ� ���� �ȴ�.

struct Member
{
	char names[20];
	int age;
};

void printStudent(struct Student s);
//������ #include - ����ü - ������Ÿ�� - �������� - main - �Լ� ������ �����ϱ� ��ȣ

//����ü�� ũ��
void sizeofStruct()
{
	printf("----sizeofStruct---");
	printf("%zd \n", sizeof(struct Student)); 
	printf("%zd \n", sizeof(struct Local));
	printf("%zd \n", sizeof(struct People)); //20����Ʈ¥�� �迭�� �־ �׳� 20+4�� ������. �迭�� �� �ٸ���.
	printf("%zd \n", sizeof(struct Member));
	//����ü�� ũ��� �ܼ��� ����������� ���� �ƴϴ�.
	//CPU�� �޸𸮸� �о���� ��Ŀ� ����ȭ�ǵ��� �޸� ������ ����� ������ ����� ��
	//���� ũ�Ⱑ ū ��������� �������� ����� ������ �Ҵ��Ѵ�. 
	//int, char, char, char*, char ���̸� ������ ������ 8����Ʈ�� �������� ��ġ�Ѵ�. 
	//��ġ�ϴٰ� 8����Ʈ�� �Ѿ�� ���ް������� �ΰ� ���� 8����Ʈ�� �Ҵ��Ѵ�.
	//8(int 4, char 1, char1, ���� 2) + 8(char* 8) + 8(char 1, ���� 7) = 24
	//����ü�� ũ�⸦ ���δٰ� ��������� ������ �ٲ� �ʿ�� ���� �׳� ���Ѵ�� ����.
	//�ٸ� ������ ���� malloc() ���� �� ����Ʈ ���� ���� ����� ���� Ʋ�� �� ������ ��� sizeof�� ���� �� ����.
}

void main()
{
	sizeofStruct();

	//Student �ڷ����� ���
	struct Student stu1; //Ű����-�ڷ���-������ ������ ����. static int a;�� ���� ����. �޸𸮿� ���� ���� 
	//student�� ������� �θ���. int�� ����, char�� ����ó��.
	//����� ���ÿ� �ټ����� ������ ���������.
	//�޸𸮸� �����ϴ� ������ �迭ó�� ���ʴ�� ����������� �߰��� ���ް����� ���⵵ �Ѵ�.
	printf("%p \n", &stu1);
	printf("%p \n", &stu1.name);
	printf("%p \n", &stu1.kor);
	printf("%p \n", &stu1.eng);
	printf("%p \n", &stu1.math); //int 4����Ʈ �ڿ� ���ް����� 4����Ʈ
	printf("%p \n", &stu1.aver);
	
	//������ �迭ó�� Student�� ���� �̸��� ��´ٰ� �ּҰ� ������ �ʴ´�. ����?
	printf("%p \n", &stu1);

	//�ʱ�ȭ
	struct Student stu2 = { "Tom", 40, 50, 60, 50.0 };

	//����
	//����ü �ȿ� �ִ� ĭ�� ������ �� �ִ� ���� ������ . ��
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

	//����ü ���������� ����
	//�Ϲ� �ڷ��� �������� �����ϴ� �Ͱ� ����.
	//�迭�� ����� �޸� ������ ���� ������ �迭�� �̸��� �ּ��� �Ͱ� �޸� ����ü ������ �̸��� �ּҰ� �ƴϴ�. 
	struct Student stu3;
	stu3 = stu2;

	//�Ź� ����Ʈ�� �ټ����� �ϴ� �� �����ϳ�
	//����ü �ڷ����� ������ִ� ���� �Լ��� ����� �̿��Ѵ�.
	//
	printStudent(stu3);

	//People �ڷ����� ���(��ø ����ü)
	struct People h1;
	h1.name = "Sara";
	h1.age = 11;
	h1.address.nation = "Korea";
	h1.address.city = "Busan";

	printf("%s(%d) %s, %s \n", h1.name, h1.age, h1.address.city, h1.address.nation);

	//����ü �迭
	//Ư���� �� ����.
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

	//����ü �迭�� �ʱ�ȭ
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

	//Ű����� �Է¹ޱ�
	//scanf�� ���ڿ��� �迭�� �Է¹޾ƾ� �Ѵ�.
	struct Member m1;
	printf("Name: ");
	scanf_s("%s", m1.names, 20); //names�� �迭 �̸��̴ϱ� �ּ�. &�� �ʿ� ����.
	printf("Age: ");
	scanf_s("%d", &m1.age);

	printf("%s %d \n", m1.names, m1.age);

	//����ü ������ ����
	struct Member* sp;
	sp = &m1;
	//(*sp).names = "Paul";//names�� �̹� ������� �迭�̶� ���ڿ��� �� ���±���. �����Ϸ��� for�� ���. ���ʿ� names�� ������ ������ �������.
	(*sp).age = 30; //������ ���� ������ ��ȣ ������ *(sp.age)�� �����µ� sp.age�� �����ͺ����� �ƴϹǷ� ����.
	printf("%s %d \n", m1.names, m1.age);

	//��������� �����ͺ����� ������ (*ptr).member ��� ���� �� �����ؼ� ptr->member��� ǥ���� �������
	sp->age = 40;
	printf("%s %d \n", m1.names, m1.age);

	//����ü�� Heap memory�� �����(���� �޸� �Ҵ�)
	//�ڹٿ��� Ŭ����(����ü �Ǵ� ��ü)�� ������ Heap ������ ���������.
	struct People* psm = (struct People*)malloc(sizeof(struct People));
	psm->name = "John";
	psm->age = 25;
	psm->address.nation = "Asgard";
	psm->address.city = "The city";
	printf("%s %d \n", psm->name, psm->age);

	struct People* psm2 = psm; //���絵 ����
	printf("%s %d \n", psm2->name, psm2->age); 

	free(psm); 
	//free(psm2);//�����Ϸ� ����. �̹� ������ ������ ����� �ڵ�.
	//printf("%s %d \n", psm->name, psm->age); //�ȳ��´�.
	//printf("%s %d \n", psm2->name, psm2->age); //�ȳ��´�.


	//����ü �����ͺ��� 3��¥�� �迭
	struct People* pp[3]; //'����ü�� ����Ű�� �����ͺ���'�� ���� �迭 3ĭ. ������ ������ �� ����.

	pp[0] = malloc(sizeof(struct People)); //�� �����ͺ����� Heap memory ������ ����� �ּ� �Ҵ�
	pp[1] = malloc(sizeof(struct People));
	pp[2] = malloc(sizeof(struct People));
	
	pp[0]->name = "Black"; pp[0]->age = 99; pp[0]->address.nation = "France"; 
	pp[1]->name = "Aden"; pp[1]->age = 49; 
	pp[2]->name = "Luke"; pp[2]->age = 59; pp[2]->address.nation = "USA"; 
	
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d %s %s \n", pp[i]->name, pp[i]->age, pp[i]->address.nation); //NULL���� �ѹ� ����Ʈ ��Ű�ϱ� �� ���� ���� �ƹ��͵� �ȳ�����.
																				//���Ĺ��ڴ� �� ���� �ּҴ� ���� �� ���� �ִϱ� �׹�° ĭ���� ������ ���� "Seoul"�� ������. 
																				//printf�� Ư¡���� ����
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

