#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77


//������Ÿ���� �Ϲ������� ������������ ���� ���´�.

//�迭�� �Ķ���ͷ� �����ϴ� ���� ���� �� ������� �ϴ� ���������� �����.
//���� ������ ������ ���� ù�ڸ� �빮�ڷ� ���� �Ѵ�.
char Map[4][4] = {
	{2, 2, 2, 2},
	{2, 1, 0, 2},
	{2, 0, 0, 2},
	{2, 2, 2, 2}
};
int y = 1, x = 1;


//{	{'��', '��', '��', '��'}, //��״� 2����Ʈ¥���� 
//	{'��', '  ', '  ', '��'},
//	{'��', '  ', '  ', '��'},
//	{'��', '��', '��', '��'},
//}; 

void displayMap(void)
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			switch (Map[y][x])
			{
			case 0:  //��ĭ
				printf("  ");
				break;
			case 1:  //��
				printf("��");
				break;
			case 2:  //��
				printf("��");
				break;
			}
		}
		printf("\n");
	}
}

//void marker(void)
//{
//	char key;
//	int y = 1, x = 1;
//
//	printf("ddd");
//	scanf_s("%c", &key); //scanf�� ascii code�� ����ϹǷ� �� �� ���� ����Ű�� �Է¹��� �� ����.
//	printf("%c %d", key, key);
//	switch (key)
//	{
//	case 'w':
//		y--;
//		break;
//	case 's':
//		y++;
//		break;
//	case 'd':
//		x++;
//		break;
//	case 'a':
//		x--;
//		break;
//	case 27: //esc ������ ����
//		printf("Exit game");
//		return;
//	default:
//		break;
//	}
//	Map[y][x] = 1;
//	
//	
//}

int keyProcess(void)
{
	int key;

	key = _getch();
	if (key == 27) return 2;
	if (key == 224) key = _getch();
	printf("k: %d\n", key);

	switch (key)
	{
	case UP:
		if (Map[y - 1][x]) return 0; //������ ĭ�� ���� ������ �н�. ���� ������ �Է�
		y--;
		break;
	case DOWN:
		if (Map[y + 1][x]) return ; //return �ڸ� ��������� Map[y+1][x]�� �ִ� ���� ���Ƿ� ��ȯ�ع�����. �Ϳ�... ����! return �ڿ� �� ���� ���༭ �����Ϸ��� ���Ƿ� �Ǵ��� ���� ������ �ʰ� ����.
		y++;
		break;
	case LEFT:
		if (Map[y][x - 1]!=0) return 0;
		x--;
		break;
	case RIGHT:
		if (Map[y][x+1]) return 0;
		x++;
		break;
	default:
		break;
	}
	printf("y, x: %d, %d \n", y, x);
	Map[y][x] = 1;

	return 0;
}

int judge(void)
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (Map[y][x] == 0) return 0;
		}
	}
	return 1;
}


void main()
{
	printf("%d", aaa());
	int keepgoing = 0;
	while (1)
	{
		system("cls"); //�ܼ� ȭ�� Ŭ����
		displayMap();

		//�� ĭ�� �ֳ� �Ǵ��� ������ ����
		keepgoing = judge();
		printf("keepgoing? %d \n", keepgoing);
		if (keepgoing)
		{
			printf("Success! \n");
			break;
		}

		//Ű �Է��� �޾� ĭ�� ä��� esc ������ ����
		keepgoing = keyProcess();
		printf("Exit? %d \n", keepgoing);
		if (keepgoing)
		{
			printf("Exit game \n");
			break;
		}
		//switch (keepgoing) //while�� ���������� �; switch�� �ȿ��� break�� switch �б����� �������� �� �ݺ����� �����Ű�� ���Ѵ�. if�������� break�� ����.
		//					 // ����� �ΰ���. switch�� while�� �ݺ������� False�� �ٲٰų�(���ϴ� �������� Ż�� �Ұ�) return�� �Ἥ �Լ��� ���������� ��. 
		//{
		//case 0:
		//	break;
		//case 2: //esc�� ������ݺ� ����
		//	printf("Exit game \n");
		//	break;
		//}


	}
	printf("Done!");
}

//������������ stage�� ������. stage�� ������ ����. �����ϸ� ���� ���������� �̵� �����. esc�� ���� ������ �̵� 