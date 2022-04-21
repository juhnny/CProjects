#include <stdio.h>
#include <stdlib.h>

//포인터 혹은 포인터 변수
void makePointer()
{
	//일반적인 변수들은 데이터를 저장하기 위한 변수
	//포인터변수는 포인터 즉 주소를 저장하기 위한 변수. 데이터를 저장하지 않는다.
	//자바에서는 참조변수
	int a = 10;
	//a라는 이름을 안 쓰고 10을 불러와보자. a의 주소를 담을 변수를 만든다.
	int* p; //내가 가리키는 변수의 데이터타입을 써주고 int를 가리킨다는 의미로 별을 붙여주자. 이 안에 주소를 담을 것이다. 
			 //얘는 int형 포인터 변수라고 말한다.
			 //주소는 데이터 타입이라고 말하지 않는다.
			 //포인터변수는 64비트 체계에선 64비트 주소를 담기 위해 8바이트, 32비트 체계에선 32비트 주소를 담기 위해 4바이트가 된다. 컴퓨터 상황에 따라 달라진다.
			 //주소의 표현은 16진수로 하면 64비트 주소는 16자리, 32비트 주소는 8자리.
	p = -10; 
	printf("%p \n", p); //오, 그냥 정수로 담을 수도 있네. 하지만 포인터 변수를 굳이 만들었으니
	//제대로 주소를 담아보자.
	p = &a;
	printf("a: %p, \np: %p \n", &a, p);
	//p++; //이러면 주소가 변수 한 칸만큼 더해진다.
	//printf("a: %p, \np: %p \n", &a, p);

	//그럼 이제 p만 사용해 a의 값을 불러와보자.
	//포인터 연산자(역참조 연산자) *을 붙여준다. p가 포인팅하는 곳의 값이 나온다.
	printf("a: %d \n", * p); 

	//p를 사용해 a의 값을 바꿀 수도 있다.
	*p = 20;
	printf("a: %d \n", a);

	//다른 자료형들도 물론 가능
	double b = 3.14;
	double* p2 = &b;
	printf("b: %lf \n", *p2);

	*p2++;
	printf("b: %lf \n", *p2);

	char c = 'A';
	char* p3 = &c;
	printf("c: %c \n", *p3);

	//*p3++; //이건 뭐가 될까? ++연산이 * 연산보다 우선한다.
	//printf("c: %c \n", *p3);

	// scanf도 가능
	// scanf의 두번째 파라미터는 주소를 넣는 곳임을 유의
	//scanf_s("p3를 넣으면 % c", p3); //p3의 값을 주소로 인식. 원래의 변수를 찾아간다.
	//printf("c의 값 %c \n", c);

	//scanf_s("*p3를 넣으면 %c", *p3); //주의. p3가 가리키는 곳의 값을 주소로 인식. 여기서는 c의 값 65를 주소로 인식해서 65번지를 찾아간다. 활용 불가. 
	//int* pp = 65;
	//printf("65번지의 값 %c \n", *pp);
	
	//scanf_s("&p3를 넣으면 %c", &p3); //주의. 포인터 변수의 주소를 찾아간다. 8바이트 중 첫 1바이트를 바꿔버릴테니 활용 불가
	//printf("p3의 값 %p \n", p3);

	//포인터 변수를 복사하는 것도 가능
	int* p4;
	p4 = p3;
	printf("%p \n", p4);


}

//포인터의 사용 이유 4가지

//1. 다른 지역의 지역변수를 제어하고 싶을 때
//함수 aaa에서는 함수 main의 지역변수 k를 죽어도 건드릴 수 없다.
//하지만 포인터 변수를 쓰는 bbb에서는 건드릴 수 있다.
void cbv(int n)
{
	n = n + 1;
	printf("aaa n: %d \n", n);
}

void cba(int* n)
{	
	*n = *n + 1;
	printf("bbb n: %d \n", *n);
}

//2. 문자열을 (주소를) 저장하는 목적
void saveConstantAddress()
{
	printf("-----saveConstantAddress-----\n");

	char arr[10] = "Hello";
	printf("%s \n", arr);

	//하지만 배열에 문자열을 저장하는 방법엔 단점이 있다.
	//초기화 때 말고는 문자열 대입이 불가능하고
	//arr = "Apple";
	//초기화 때 배열보다 긴 문자열을 넣으면 에러는 안 나지만 문자열이 잘리고, 마지막 값으로 0을 넣지 못해 쓰레기 값까지 읽어오다가 컴파일러에 의해 멈춘다.
	char arrrr[10] = "Hello"; 
	printf("%s \n", arrrr);

	char* p10;
	p10 = "Hello"; //포인터 변수에 문자열 상수의 시작 주소를 담는다.
	printf("%s", p10); //언뜻 보면 포인터 변수에 문자열이 담기고 그 값을 프린트하는 것으로 보이지만 실제로는 문자열 상수의 주소가 담기고 그 주소의 값을 읽는 것임을 유의!

	//참고로 상수는 알고리즘에 의해 같은 값이면 매번 새로 만들지 않고 같은 주소를 공유한다.

	//데이터 변수의 초기화와 포인터 변수의 초기화의 차이
	int n = 10; //데이터 변수의 초기화 시 메모리에 변수 공간을 만들면서 바로 값을 넣는다.
	int k; k = 20; //대입은 메모리에 변수와 상수의 공간을 모두 만들고 변수에 상수를 읽어와 대입한다.

	char str[10] = "Hello"; //배열을 문자열로 초기화 할 떄도 배열 형태로 변수를 만들면서 문자열의 값('H','e','l','l','o',\0)을 바로 넣는다. 길이보다 길면 잘리고 0은 들어가지 않으므로 읽을 때 에러.

	char* p11 = "Hello"; //포인터 변수의 초기화는 다르다. 
	//포인터변수에 문자열을 넣을 순 없잖아. 
	//비록 초기화지만 문자열 상수('H','e','l','l','o',\0)를 메모리에 만든 후 그 시작 주소를 대입한다. 


	//포인터변수에 문자열을 담으면 문자열의 길이와 상관없이 저장할 수 있다. 글자수를 정해줘야 하는 배열보다 편하다.
	char* p12 = "abcdefghijklmnop";
	printf("포인터변수에 문자열 주소 담기: %s \n", p11);

	//그럼 문자열 쓸 땐 배열 대신 포인터변수만 쓰면 되나?
	//scanf 쓸 땐 다르다. 배열을 쓸 때는 없던 문제가...
	//char word[10]; 
	//scanf_s("%s", word);
	//printf("%s \n", word);

	//char* pword = "";
	//scanf_s("%s", *pword); //scanf 두번째 파라미터에 주소를 써줘야 하는데 이러면  
	//scanf_s("%s", pword); //scanf 두번째 파라미터에 주소를 써줘야 하는데 이러면  
	//printf("%s", pword); 

	//실제 개발자들은 문자열을 저장할 때는 포인터 변수를 활용하고 scanf를 받아야 할 때만 배열에 담는다. 그것도 그대로 놔두지 않고 다시 포인터 변수에 담아서 활용한다. 배열은 지워버리고.


}

// 3. 지역(함수)에서 선언된 배열을 다른 함수에 파라미터, 리턴으로 전달하는 목적
void readArray()
{
	printf("-----readArray-----\n");

	//포인터 변수로 배열을 어떻게 가리킬 수 있을까? 
	//배열을 참조하는 포인터변수 문법은 따로 없다. (그리고 배열은 자료형이 아니다. 문법이지.)

	//포인터 변수 하나로 여러 변수 값을 제어하려면? 주소를 계속 바꿔주면 된다, 당연히.
	//반복문에서 이름 하나로 여러 변수를 제어할 수 있다는 게 포인터의 장점
	int x = 10, y = 20, z = 30;
	int* pp;
	pp = &x;
	printf("pp: %d \n", *pp);
	pp = &y;
	printf("pp: %d \n", *pp);
	pp = &z;
	printf("pp: %d \n\n", *pp);

	//그럼 배열은?
	int arr[3] = { 10, 20, 30 };
	int* parr = &arr[0];
	printf("%d \n", *parr);
	parr = &arr[1];
	printf("%d \n", *parr);
	parr = &arr[2];
	printf("%d \n\n", *parr);

	//포인터 변수에 배열 주소를 담으면 배열처럼 대괄호로 읽을수도 있다.
	//배열의 이름이 바로 포인터 상수니까. 주소를 담고 있지만 값은 바꿀 수 없는. 
	//포인터 변수나 포인터 상수나 연산방법은 동일하다.
	//배열의 연산이 사실 포인터 변수의 연산방법이었던 것.

	//[]는 위치 연산자
	parr = arr;
	printf("%d \n", parr[0]);
	printf("%d \n", parr[1]);
	printf("%d \n", parr[2]);

	//주소의 연산을 활용하면
	// + 1을 덧셈 연산을 써서
	// 이 문법을 쓰기가 불편해서 만든 게 대괄호 연산
	parr = arr;
	printf("%d \n", *parr);
	parr++;
	printf("%d \n", *(parr + 1));
	parr++;
	printf("%d \n\n", *(parr + 2));

	//괄호 빼면 연산 하면 안돼
	//parr = arr;
	//printf("%d \n", *parr);
	//printf("%d \n", *parr + 1);
	//printf("%d \n", *parr + 2);
	
	// ++ 증가연산을 써서
	parr = arr;
	printf("%d \n", *parr);
	parr++;
	printf("%d \n", *parr);
	parr++;
	printf("%d \n\n", *parr);

	//그렇담 세 종류 모두 반복문으로
	parr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("%d \n", *(parr+i));
	}

	parr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("%d \n", *parr++);
	}

	parr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("%d \n", parr[i]);
	}

	//이제 배열의 주소만 갖고도 포인터변수에 담아 읽을 수 있다.
}

//포인터 변수를 파라미터로 전달할 때는 주소가 넘어가는 것이고 
//배열의 이름이 주소니까 주소를 받아 쓰려면 포인터 변수에 담아야만 한다.
//배열을 포인터 변수로 넘겨받아 배열처럼 사용한다고 기억하자. 배-포-배
void useArray(int* p)
{
	printf("-----useArray-----\n");

	for (int i = 0; i < 7; i++)
	{
		printf("%d \n", p[i]);
	}
}
//파라미터를 써줄 때 * 떼고 배열처럼 표기하는 걸 허용해줬지만 여전히 p는 포인터 변수다. 배열이 아님에 주의!
void ccc(int p[]);
void ddd(int p[5]);

//배열을 리턴하거나 포인터 값을 리턴하는 함수는 이름에 *을 붙여준다.
//리턴된 값을 다른 함수에서 받을 땐 물론 위에서 얘기했듯 포인터 변수에 담아 써야 한다.
int* returnArr()
{

	//return arr;
}

int* returnP()
{

	//return p;
}

//4. 동적 메모리 할당 Dynamic Memory Allocation
//C언어 메모리 영역
//Code, Data, Stack, Heap 네 영역으로 나뉘어짐

//1. Code 영역
//한번 써지면 바뀌지 않는 데이터를 쓴다. 
//상수, 코드(함수)
//CPU는 절대 하드디스크를 읽지 않는다. 램에만 읽고 쓰고 지운다. 하드디스크에서 램으로 옮겨온 데이터들은 다 Code에 있다.
//나머지 세 영역은 모두 변수의 영역

//2. Data 영역
//프로그램 시작부터 종료까지 사용하는 변수
//전역 변수, 정적변수

//3. Stack 영역
//함수 시작부터 종료까지 쓰이는 변수
//지역 변수, 매개 변수

//4. Heap 영역
//개발자가 동적 할당 할 수 있는 영역. 가장 비중이 크다.
//변수를 원할 때 만들어서 내가 원할 때까지 쓸 수 있다.
//할당(Memory Allocation) 명령어 malloc(); 괄호 안엔 바이트 수 
//삭제 명령어 free(); 괄호 안엔 메모리 주소
//쓰레기값 존재

void dynamicMemoryAllocation()
{
	printf("-----dynamicMemoryAllocation-----\n");
	//malloc, free는 <malloc.h>, <stdlib.h> 두 곳에 모두 쓰여있는데 전자에는 malloc, free 두가지만 있고 후자에는 다른 유용한 기능들이 많아서 어차피 후자를 쓰게 된다.
	//Heap 메모리는 변수명을 사용할 수 없다. 
	//그러면 어떻게 써!
	//다행히 주소는 알려준다.
	malloc(5); //heap 메모리에 바이트 수만큼 할당하고 시작주소를 리턴함.
	printf("%p", malloc(5)); 

	//활용하려면 포인터 변수에 담아야 한다.
	//이 변수의 데이터타입은 안 정해져 있으므로 포인터 변수 선언 때 형변환도 해주고 포인터 변수 선언 때도 자료형을 써준다.
	//int* pm = (int*)malloc(4); //오른쪽 항 앞에 & 필요 없나? 필요없지. malloc() 명령이 주소를 리턴하니까.
	//더 명확하게 하려면
	//int* pm = (int*)malloc(sizeof(int));
	//3칸짜리 배열이면
	//int* pm = (int*)malloc(sizeof(int) * 3);
	
	int* pm = malloc(sizeof(int));
	*pm = 1000;
	printf("*pm: %d", *pm);
	free(pm);

	int* pm2 = malloc(sizeof(int) * 3);
	pm2[0] = 10;
	pm2[1] = 20;
	pm2[3] = 30;
	printf("pm[1]: %d \n", pm2[1]);
	

}

//포인터 변수도 배열로 만들 수 있다.
void pArray()
{	
	printf("\n-----pArray-----\n");
	int* parr[3]; //포인터 변수 3개가 나열된 배열. 24바이트
	int* pa, pb, pc;
	int a = 11, b = 22, c = 33;
	
	pa = &a, pb = &b, pc = &c;
	
	parr[0] = pa;
	parr[1] = pb;
	parr[2] = pc;

	//사실 바로 담아도 된다.
	//parr[0] = &a;
	//parr[1] = &b;
	//parr[2] = &c;
	
	printf("a의 주소 %p \n", &a);
	printf("첫번째 요소: %p \n", parr[0]); //pa의 값 즉 a의 주소
	printf("첫번째 요소가 가리키는 값: %d \n", *parr[0]); //혹은 
	printf("첫번째 요소가 가리키는 값: %d \n", **parr);

	//다차원 배열도 가능(배열과 똑같다)
	char* names[3]; //24 바이트
	names[0] = "Sam"; //문자열의 주소를 담는다.
	names[1] = "Miles";
	names[2] = "Bruce";
	
	for (int i = 0; i < 3; i++)
	{
		printf("%s \n", names[i]);
	}

	//문자열 여러개를 저장할 때 포인터 변수를 가장 많이 쓴다.

}


void main()
{
	makePointer();

	int k = 10;
	cbv(k); //Call by value 
	printf("main k: %d \n", k);
	cba(&k); //Call by address (C++이나 Java에서는 비슷한 개념으로 Call by reference가 있다)
	printf("main k: %d \n", k);

	saveConstantAddress();

	readArray();
	int app[5] = { 100, 200, 300 };
	useArray(app);

	dynamicMemoryAllocation();

	pArray();
}

//참고로 포인터 초기화 때 값을 바로 넣지 않을 거면 NULL을 넣어 의도를 명확히 하자.