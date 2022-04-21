#include <stdio.h>
#include <conio.h> //_getch가 들어있는 헤더. 부르지 않아도 컴파일러가 700개의 C 기본 함수들을 찾아서 _getch를 찾아내긴 한다. 하지만 미리 불러놓으면 더 빠르겠지.

//_getch와 scanf_s의 차이를 알아보자
void main()
{
	//char ch;
	//scanf_s("%c", &ch);
	//printf("%c", ch);

	//_getch는 내가 입력한 문자가 화면에 남지 않고, 엔터를 기다리지 않고 바로 입력된다.
	int ch;
	//ch = _getch();
	//printf("%c %d", ch, ch);

	//근데 방향키를 눌러보면 모두 224가 나온다.
	//넘버패드에 있는 방향키(Num lock 해제 후)는 0이 나온다.
	//방향키는 번호가 하나가 아니기 때문
	//ch = _getch();
	//printf("%c %d", ch, ch);
	//ch = _getch();
	//printf("%c %d", ch, ch);
	//첫번째 숫자들로 인해 이 문자가 아스키 코드 문자가 아니고 특수번호임을 알 수 있다.
	//두번째 숫자로 방향키를 구분할 수 있다.

	//그러면 첫번째 입력은 무시하고 두번째 값만 이용하면?
	//ch = _getch();
	//ch = _getch();
	//printf("%c %d", ch, ch);
	//하지만 이러면 사용자가 문자를 입력했을 때 한번만 눌러서는 반응이 없다.

	//그래서 특수키일 때만 그 값을 이용하도록 한다.
	ch = _getch();
	if(ch==224)	ch = _getch();
	printf("%c %d", ch, ch);

	switch (ch)
	{
	case 72: //UP
		
		break;
	case 80: //DOWN

		break;
	case 75: //LEFT

		break;
	case 77: //RIGHT
		
		break;
	}

}