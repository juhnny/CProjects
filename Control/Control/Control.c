#include <stdio.h>

void main()
{
	// Ch. ��� Control

	// 1. ���ǹ� if
	//if, if else
	int a;
	a = 5;
	if (a > 5)
	{
		printf("A \n");
	}
	else
	{
		printf("B \n");
	}
	printf("\nFinished \n");
	 
	//switch-case
	//�б�
	//�б�� �̵��ؼ� �� ���� �ڵ嵵 ��� �����Ѵ�.
	//IF�� �� ������ Ư�� ����� ���� ����. �ٸ� �� �����ϰ� ��Ÿ ���ɼ��� ����.
	//������ ���߰� ������ break ���. switch�� ��κ� break�� �Ἥ Ȱ���Ѵ�. break�� ����ȭ����.
	//int�� char �ڷ����� ����. short, long�� �⺻������ �ȵǰ� VS������ ����. 
	//�Ҽ��� �ִ� �Ǽ����� �ȵȴ�. ���� ��Ŀ������ �޸𸮿��� ���� �ּҸ� �ҷ����� ���ε� �Ҽ��� ���ڿ��� �޸� �ּҰ� ���ٰ�..
	//��Ŀ������ if�� �� �� ���Ƶ� �׷��� �ʴ�.

	int b = 20;
	switch (b)
	{
	case 10: //case �ڿ��� ����� ��� ����
		printf("case1\n");
	case 20:
		printf("case2\n");
	case 30:
		printf("case3\n");
	case 40:
		printf("case4\n");
		break;
	default: //case�� ���� ���
		printf("end\n");
		break;
	};
	
	char c = 'a';
	switch (c)
	{
	case ('A' || 'a'): //�̷��� case 1�� �Ǿ� 'a'�� default�� ����������.
	case 'A': //���� ���̽��� �� �б�� ���� ��. if�������� if(c == 'A' || c == 'a')��� �������� ���⼭�� �� ����
	case 'a':
		printf("char1\n");
		break;
	case 'B':
	case 'b':
		printf("char2\n");
		break;
	default:
		break;
	}



	//2. �ݺ���
	//while, do while
	int d;
	while (1)
	{
		int d = 65;
		printf("%c", d);
	};

	//for

	//3. ��Ÿ ���
	//break
	//switch�� �ݺ����� ���� �� ����.
	
	//continue
	//goto
	//���ǹ��̳� �ݺ����� ���� ���

	//�߰�ȣ {}�� region�� ��Ÿ����.

	




}