#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int Stage = 0;
int PosX = 0, PosY = 0;

int OriginalMap[3][11][20] = {
	{
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 5, 1, 2, 1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 5, 1, 4, 1, 1, 5, 5, 5, 5, 0, 0, 0, 0, 0, 6},
	{6, 0, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 0, 6},
	{6, 0, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 0, 6},
	{6, 0, 5, 1, 1, 1, 5, 1, 1, 5, 5, 1, 1, 1, 1, 1, 1, 5, 0, 6},
	{6, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6}
	}, {
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 5, 2, 1, 4, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 5, 1, 1, 1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6}
	}, {
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 5, 2, 4, 1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 5, 1, 1, 1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6}
	}
};

int Map[11][20] = {
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6}
};

void setPosXY()
{
	int posXY[3][2] = { {7,6}, {8,5}, {7,5} };
	PosX = posXY[Stage][0];
	PosY = posXY[Stage][1];
}

void initializeMap()
{
	for (int y = 0; y < 11; y++)
	{
		for (int x = 0; x < 20; x++)
		{
			Map[y][x] = OriginalMap[Stage][y][x];
		}
	}
	Map[PosY][PosX] = 3;
}



void display()
{	
	for (int y = 0; y < 11; y++)
	{
		for (int x = 0; x < 20; x++)
		{
			switch (Map[y][x])
			{
			case 0:
				printf("  ");
				break;
			case 1:
				printf(".,");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5: 
				printf("��");
				break;
			case 6:
				printf("��");
				break;
			}
		}
		printf("\n");
	}
}

//�� �ȿ� 3�� ������ 1�� ��ȯ
int judge()
{	
	for (int y = 0; y < 11; y++)
	{
		for (int x = 0; x < 11; x++)
		{
			if (OriginalMap[Stage][y][x] == 2)
			{
				if (Map[y][x] != 4) return 0;
			}
		}
	}
	printf("Success! \n");
	return 1;
}

int keyProcess()
{
	int key;
	key = _getch();
	//���Ű �Է� ��
	if (key == 24)
	{
		if (Stage == 0) return 1;
		else Stage = 0;
	}//esc �Է� �� ���� Ȥ�� ���� �������� �̵�

	if (key == 224) key = _getch();
	printf("key : %d \n", key);

	//key���� ���� ����Ű�� �´� �迭 ĭ ���� 
	switch (key)
	{
	case UP:
		printf("UP \n");
		if(Map[PosY -1][PosX] == 4) //�տ� ���ڰ� ������
		{ 
			printf("case1 \n");
			if (Map[PosY - 2][PosX] >= 4) return 0; //���� ���� ���̸� 
			else //���� ���� ���̳� ���ڰ� �ƴϸ�
			{
				Map[PosY - 2][PosX] = 4;
				Map[PosY - 1][PosX] = 3;

				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;
			
				PosY--;
				break; //�վ�ĭ: ����, ��ĭ: �հ���, ����ĭ: �������ΰ�
			}
		}
		else //�տ� ���ڰ� ������
		{
			printf("case2 \n");
			if (Map[PosY - 1][PosX] >= 5) return 0;//���� ���̸�
			else
			{	
				Map[PosY - 1][PosX] = 3;
				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;
				PosY--;
				break; //��ĭ: �հ���, ����ĭ: �������ΰ�
			}
		}
		break;
	case DOWN:
		printf("DOWN \n");
		if (Map[PosY + 1][PosX] == 4) //�տ� ���ڰ� ������
		{
			printf("case1 \n");
			if (Map[PosY + 2][PosX] >= 4) return 0; //���� ���� ���̸� 
			else //���� ���� ���̳� ���ڰ� �ƴϸ�
			{
				Map[PosY + 2][PosX] = 4;
				Map[PosY + 1][PosX] = 3;

				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;

				PosY++;
				break; //�վ�ĭ: ����, ��ĭ: �հ���, ����ĭ: �������ΰ�
			}
		}
		else //�տ� ���ڰ� ������
		{
			printf("case2 \n");
			if (Map[PosY + 1][PosX] >= 5) return 0;//���� ���̸�
			else
			{
				Map[PosY + 1][PosX] = 3;
				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;

				PosY++;
				break; //��ĭ: �հ���, ����ĭ: �������ΰ�
			}
		}
		break;
	case LEFT:
		printf("DOWN \n");
		if (Map[PosY][PosX - 1] == 4) //�տ� ���ڰ� ������
		{
			printf("case1 \n");
			if (Map[PosY][PosX - 2] >= 4) return 0; //�� ���� ���� ���̸� 
			else //���� ���� ���̳� ���ڰ� �ƴϸ�
			{
				Map[PosY][PosX - 2] = 4;
				Map[PosY][PosX - 1] = 3;

				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;

				PosX--;
				break; //�վ�ĭ: ����, ��ĭ: �հ���, ����ĭ: �������ΰ�
			}
		}
		else //�տ� ���ڰ� ������
		{
			printf("case2 \n");
			if (Map[PosY][PosX - 1] >= 5) return 0;//���� ���̸�
			else
			{
				Map[PosY][PosX - 1] = 3;
				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;

				PosX--;
				break; //��ĭ: �հ���, ����ĭ: �������ΰ�
			}
		}
		break;
	case RIGHT:
		printf("RIGHT \n");
		if (Map[PosY][PosX + 1] == 4) //�տ� ���ڰ� ������
		{
			printf("case1 \n");
			if (Map[PosY][PosX + 2] >= 4) return 0; //�� ���� ���� ���̸� 
			else //���� ���� ���̳� ���ڰ� �ƴϸ�
			{
				Map[PosY][PosX + 2] = 4;
				Map[PosY][PosX + 1] = 3;

				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;

				PosX++;
				break; //�վ�ĭ: ����, ��ĭ: �հ���, ����ĭ: �������ΰ�
			}
		}
		else //�տ� ���ڰ� ������
		{
			printf("case2 \n");
			if (Map[PosY][PosX + 1] >= 5) return 0;//���� ���̸�
			else
			{
				Map[PosY][PosX + 1] = 3;
				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;

				PosX++;
				break; //��ĭ: �հ���, ����ĭ: �������ΰ�
			}
		}
		break;
	}

	return 0;
}
//�հ������� ���ڸ� �и� ���� �����δ�
//���� ������ ���� ���� ���ڰ��̸� Ȯ���Ѵ�.
//���� �� ĭ�� ���� ���ΰ�? �׷��� ����, �ƴϸ� ��ĭ�� ���� ���ڰ� �ǰ� ����ĭ�� �հ����� �ȴ�. 
//�� ĭ�� �� ĭ�� �ƴѰ�? �׷��� ����, �ƴϸ� ��ĭ�� �հ��� ������ ����

//�հ����� �ִ� �ڸ��� ���� ���ڷ� �ٲ��.
//���� ������ �� ������ ������.
//�� ���� ó�� ���������� �ҷ��� �� ä���.
//�հ����� ������ �ڸ��� ���� ���� ������ ä���.

//�հ����� ���̳� ���ڰ� ������ �������� ���Ѵ�. PosX, PosY �״��. ����
//���ڴ� ���̳� ���ڰ� ������ �������� ���Ѵ�.

//�� ĭ�� ���� �ٷ�� �Ѵ�. ���� ĭ, �� ĭ, �վ�ĭ

int nextStage()
{	
	int next = 0;
	if (Stage < 2)
	{
		while (1)
		{	
			printf("Do you want to go to next stage? (Y/N)\n");
			next = _getch();
			if (next == 'y')
			{
				printf("\nLet's go to the next stage!\n");
				return 0;
			}
			else if (next == 'n')
			{
				printf("\nNo more stages \n");
				return 1;
			}
			else
			{
				printf("Press y or n \n");
			}
		}
	}
	else
	{
		printf("\nCongratulations! Finished all stages \n");
		return 1;
	}
}

void main()
{
	int stage = 0;
	
	setPosXY();
	printf("Y, X: %d, %d \n", PosY, PosX);
	initializeMap();

	while (1)
	{	
		//system("cls");
		display();
		if (judge()) //���������� ���� 1, �� ���� 0
		{
			if (nextStage()) break;//���� ���������� ������ 1, ������ 0
			else
			{
				Stage++;
				setPosXY();
				initializeMap();
				continue;
			}
		}
		keyProcess();
		printf("Y, X: %d, %d \n", PosY, PosX);
	}
	printf("\nFinished");

}