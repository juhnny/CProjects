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
				printf("◎");
				break;
			case 3:
				printf("☞");
				break;
			case 4:
				printf("■");
				break;
			case 5: 
				printf("▧");
				break;
			case 6:
				printf("▩");
				break;
			}
		}
		printf("\n");
	}
}

//맵 안에 3이 없으면 1을 반환
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
	//기능키 입력 시
	if (key == 24)
	{
		if (Stage == 0) return 1;
		else Stage = 0;
	}//esc 입력 시 종료 혹은 메인 페이지로 이동

	if (key == 224) key = _getch();
	printf("key : %d \n", key);

	//key값에 따라 방향키에 맞는 배열 칸 수정 
	switch (key)
	{
	case UP:
		printf("UP \n");
		if(Map[PosY -1][PosX] == 4) //앞에 상자가 있으면
		{ 
			printf("case1 \n");
			if (Map[PosY - 2][PosX] >= 4) return 0; //상자 앞이 벽이면 
			else //상자 앞이 벽이나 상자가 아니면
			{
				Map[PosY - 2][PosX] = 4;
				Map[PosY - 1][PosX] = 3;

				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;
			
				PosY--;
				break; //앞앞칸: 상자, 앞칸: 손가락, 현재칸: 오리지널값
			}
		}
		else //앞에 상자가 없으면
		{
			printf("case2 \n");
			if (Map[PosY - 1][PosX] >= 5) return 0;//앞이 벽이면
			else
			{	
				Map[PosY - 1][PosX] = 3;
				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;
				PosY--;
				break; //앞칸: 손가락, 현재칸: 오리지널값
			}
		}
		break;
	case DOWN:
		printf("DOWN \n");
		if (Map[PosY + 1][PosX] == 4) //앞에 상자가 있으면
		{
			printf("case1 \n");
			if (Map[PosY + 2][PosX] >= 4) return 0; //상자 앞이 벽이면 
			else //상자 앞이 벽이나 상자가 아니면
			{
				Map[PosY + 2][PosX] = 4;
				Map[PosY + 1][PosX] = 3;

				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;

				PosY++;
				break; //앞앞칸: 상자, 앞칸: 손가락, 현재칸: 오리지널값
			}
		}
		else //앞에 상자가 없으면
		{
			printf("case2 \n");
			if (Map[PosY + 1][PosX] >= 5) return 0;//앞이 벽이면
			else
			{
				Map[PosY + 1][PosX] = 3;
				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;

				PosY++;
				break; //앞칸: 손가락, 현재칸: 오리지널값
			}
		}
		break;
	case LEFT:
		printf("DOWN \n");
		if (Map[PosY][PosX - 1] == 4) //앞에 상자가 있으면
		{
			printf("case1 \n");
			if (Map[PosY][PosX - 2] >= 4) return 0; //그 상자 앞이 벽이면 
			else //상자 앞이 벽이나 상자가 아니면
			{
				Map[PosY][PosX - 2] = 4;
				Map[PosY][PosX - 1] = 3;

				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;

				PosX--;
				break; //앞앞칸: 상자, 앞칸: 손가락, 현재칸: 오리지널값
			}
		}
		else //앞에 상자가 없으면
		{
			printf("case2 \n");
			if (Map[PosY][PosX - 1] >= 5) return 0;//앞이 벽이면
			else
			{
				Map[PosY][PosX - 1] = 3;
				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;

				PosX--;
				break; //앞칸: 손가락, 현재칸: 오리지널값
			}
		}
		break;
	case RIGHT:
		printf("RIGHT \n");
		if (Map[PosY][PosX + 1] == 4) //앞에 상자가 있으면
		{
			printf("case1 \n");
			if (Map[PosY][PosX + 2] >= 4) return 0; //그 상자 앞이 벽이면 
			else //상자 앞이 벽이나 상자가 아니면
			{
				Map[PosY][PosX + 2] = 4;
				Map[PosY][PosX + 1] = 3;

				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;

				PosX++;
				break; //앞앞칸: 상자, 앞칸: 손가락, 현재칸: 오리지널값
			}
		}
		else //앞에 상자가 없으면
		{
			printf("case2 \n");
			if (Map[PosY][PosX + 1] >= 5) return 0;//앞이 벽이면
			else
			{
				Map[PosY][PosX + 1] = 3;
				if (OriginalMap[Stage][PosY][PosX] == 2) Map[PosY][PosX] = 2;
				else Map[PosY][PosX] = 1;

				PosX++;
				break; //앞칸: 손가락, 현재칸: 오리지널값
			}
		}
		break;
	}

	return 0;
}
//손가락으로 상자를 밀면 같이 움직인다
//현재 포지션 앞의 값이 상자값이면 확인한다.
//상자 앞 칸의 값이 벽인가? 그러면 리턴, 아니면 앞칸은 값이 상자가 되고 상자칸은 손가락이 된다. 
//앞 칸이 빈 칸이 아닌가? 그러면 리턴, 아니면 앞칸은 손가락 값으로 대입

//손가락이 있던 자리는 원래 문자로 바뀐다.
//맵을 원본과 빈 맵으로 나눈다.
//빈 맵은 처음 스테이지를 불러올 때 채운다.
//손가락이 움직인 자리는 원본 맵의 값으로 채운다.

//손가락은 벽이나 상자가 있으면 움직이지 못한다. PosX, PosY 그대로. 리턴
//상자는 벽이나 상자가 있으면 움직이지 못한다.

//세 칸의 값을 다뤄야 한다. 현재 칸, 앞 칸, 앞앞칸

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
		if (judge()) //스테이지를 깨면 1, 못 깨면 0
		{
			if (nextStage()) break;//다음 스테이지가 없으면 1, 있으면 0
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