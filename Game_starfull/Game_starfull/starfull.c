#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77


//프로토타입은 일반적으로 전역변수보다 위에 놓는다.

//배열의 파라미터로 전달하는 법을 아직 안 배웠으니 일단 전역변수로 만든다.
//전역 변수는 구별을 위해 첫자를 대문자로 쓰곤 한다.
char Map[4][4] = {
	{2, 2, 2, 2},
	{2, 1, 0, 2},
	{2, 0, 0, 2},
	{2, 2, 2, 2}
};
int y = 1, x = 1;


//{	{'■', '■', '■', '■'}, //얘네는 2바이트짜리라서 
//	{'■', '  ', '  ', '■'},
//	{'■', '  ', '  ', '■'},
//	{'■', '■', '■', '■'},
//}; 

void displayMap(void)
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			switch (Map[y][x])
			{
			case 0:  //빈칸
				printf("  ");
				break;
			case 1:  //말
				printf("□");
				break;
			case 2:  //벽
				printf("■");
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
//	scanf_s("%c", &key); //scanf는 ascii code를 사용하므로 그 중 없는 방향키는 입력받을 수 없다.
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
//	case 27: //esc 누르면 종료
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
		if (Map[y - 1][x]) return 0; //가려는 칸에 값이 있으면 패스. 값이 없으면 입력
		y--;
		break;
	case DOWN:
		if (Map[y + 1][x]) return ; //return 뒤를 비워놨더니 Map[y+1][x]에 있는 값을 임의로 반환해버리네. 와우... 주의! return 뒤엔 꼭 값을 써줘서 컴파일러가 임의로 판단한 값이 나오지 않게 하자.
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
		system("cls"); //콘솔 화면 클리어
		displayMap();

		//빈 칸이 있나 판단해 없으면 성공
		keepgoing = judge();
		printf("keepgoing? %d \n", keepgoing);
		if (keepgoing)
		{
			printf("Success! \n");
			break;
		}

		//키 입력을 받아 칸을 채우고 esc 누르면 종료
		keepgoing = keyProcess();
		printf("Exit? %d \n", keepgoing);
		if (keepgoing)
		{
			printf("Exit game \n");
			break;
		}
		//switch (keepgoing) //while을 빠져나가고 싶어도 switch문 안에서 break는 switch 분기점을 빠져나갈 뿐 반복문을 종료시키지 못한다. if문에서의 break는 가능.
		//					 // 방법은 두가지. switch로 while의 반복조건을 False로 바꾸거나(원하는 지점에서 탈출 불가) return을 써서 함수를 빠져나가는 것. 
		//{
		//case 0:
		//	break;
		//case 2: //esc를 누르면반복 종료
		//	printf("Exit game \n");
		//	break;
		//}


	}
	printf("Done!");
}

//시작페이지와 stage도 만들어보자. stage를 선택해 입장. 성공하면 다음 스테이지로 이동 물어보기. esc로 이전 페이지 이동 