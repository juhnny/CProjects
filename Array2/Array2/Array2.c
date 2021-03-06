#include <stdio.h>


//문자열을 배열로 만드는 문법
void string()
{   
	//문자열을 글자수가 같은 배열에 넣어보기
	char word[5] = { 'H', 'e', 'l', 'l', 'o' }; //이렇게도 해보고
	char word2[5] = "Hello"; //"Hello"는 문자형 포인터 변수. 즉 주소다.
							 //큰따옴표로 된 문자열 상수는 배열 혹은 포인터로 컴파일러가 인식한다.

	//이렇게 한 글자씩 프린트할 땐 잘 나오지만 매우 번거롭다.
	for (int i = 0; i < 5; i++) printf("%c", word[i]); printf("\n");
	for (int i = 0; i < 5; i++) printf("%c", word2[i]); printf("\n\n");

	//그래서 %s도 만들었는데 문자 뒤에 이상한 글자가 더 나온다.
	printf("%s \n", word); //배열의 이름은 배열 첫 변수의 주소
						   //Hello儆儆儆儆儆儆儆儆儆儆儆儆儆?ello儆儆儆儆儆儆儆儆儆儆儆儆儆?
	printf("%s \n", word2); //같은 문제 발생
							//Hello儆儆儆儆儆儆儆儆儆儆儆儆儆?
	printf("%s \n\n", &word2[0]); // 위와 같은 말 
								  //Hello儆儆儆儆儆儆儆儆儆儆儆儆儆?
	// %s는 콤마 뒤에 있는 주소에서 1바이트씩 아스키 문자로 읽어온다. 언제까지? 0이 나올 때까지
	// 근데 0이 나오지 않으니 무한히 읽다가 컴파일러? OS?에 의해 종료되는 것이다.
	//그러니 문자열은 자리수보다 하나 큰 배열이 필요하다. 그리고 끝에 0을 채운다. 
	//이제 제대로 나온다.
	char word3[6] = "Hello";

	printf("%s \n", "Hello");
	printf("%s \n", word3);
	printf("%s \n", word3);
	printf("\n");

	//두번째 파라미터에 문자열을 쓰면 잘 나온다. 
	//왜? 쌍따옴표가 6칸이고 끝이 0인 배열을 만들어줘서
	printf("%s \n", "Hello");
	printf("%p \n", "Hello");
	printf("%s \n", &"Hello");
	printf("%p \n", &"Hello");
	printf("\n");

	//%d는 콤마 뒤에 있는 주소에서 4바이트를 읽어온다.
	//%lf는 콤마 뒤에 있는 주소에서 8바이트를 읽어온다.
	//%c는 콤마 뒤에 있는 주소에서 1바이트를 읽어온다.
	// -----------------------------------------------
	//%s는 콤마 뒤에 있는 주소에서 1바이트씩 계속 %c로 읽어온다. 무한히. 언제까지? ASCII 번호 0(문자열 끝문자)이 나올 때까지.
	//그래서 문자열을 담는 배열은 글자 수보다 한 자리가 더 길게 만들고 그 값엔 0을 담게 했다. 
	//"Hello"는 다섯 글자지만 쌍따옴표를 쓰는 순간 여섯 칸 짜리이고 끝 값은 0인 배열이 된다. 
	//마지막칸이 0인 건 초기화 때 길이보다 요소 수가 적어서 자동으로 채워진 0이 아니라 의도적으로 추가된 0이다. 

	//어? 근데 char hello[5] = "Hello"에서 왼쪽은 5칸인데 6칸이면 왜 오류가 안 났지?
	//초기화할 땐 중괄호 안에 콤마로 구분을 해놔서 몇 개가 들어가는지 컴퓨터가 알 수가 있다.
	//쌍따옴표로 쓸 때는 그냥 주소값으로 인식하기 때문에 몇 칸인지 알 수가 없다.
	//쌍따옴표를 쓸 때는 배열이 짧아도 문제가 되지는 않는다. 다만 배열 길이를 넘어가는 글자들은 담기지 않는다.
	//그래서 개발자들은 차라리 배열을 길게 만든다. 그러면 "Hello"를 담았을 때 다섯글자 + 0이 입력되고 나머지는 0으로 초기화 될테니까.

	char str01[] = "This is a string.";    // 크기를 지정하지 않은 문자열 변수 선언
	char str02[7] = "string";              // 크기를 지정한 문자열 변수 선언
	char str03[6] = "string";				//문자열 길이랑 딱 맞는 건 되는데
	//char str03[5] = "string";				//문자열 길이보다 작은 건 에러네

	char aaa[6] = "Hello"; //문자열을 이런 초기화만으로 써야 하는 걸까? 대입해서 쓸 수는 없을까?
	//aaa = "Hello"; //에러. 왼쪽도 주소 오른쪽도 주소. 주소에 주소를 대입해? 이상하니까 막아 놨다.
	
	char abc[6];
	aaa[0] = 'H';
	aaa[1] = 'e';
	aaa[2] = 0; //이렇게 하면 %s로 읽을 때 He까지 읽고 멈춘다. 하지만 캐릭터에 숫자 넣는 게 혼동을 줄 수도 있다.
	aaa[2] = '\0'; // ASCII 0번(값도 0)을 뜻하는 형식문자 \0을 만들었다.
	aaa[2] = NULL; // ASCII 0번을 뜻하는 '키워드' NULL도 만들었다.


	//일반 변수나 배열이나 컴파일 될 때는 주소로 변환된다. 하지만 컴파일러가 보는 방식은 다르고 배열 이름은 변수 테이블에 없다. 배열 이름은 포인터 상수다. 

}

void keyboard()
{
	char name[20];

	printf("Enter name: ");
	for (int i = 0; i < 20; i++)
	{
		scanf_s("%c", &name[i]);
		if (name[i] == 10 || name[i] == 32) //입력이 엔터 혹은 스페이스면 값을 0으로 바꾸겠다. 그래서 %s로 읽을 때 거기까지만 읽도록.
		{                                   //스페이스에서 입력이 끊기는 게 싫으면 빼면 되고.
			name[i] = NULL; // 0 
			break;
		}
	}

	printf(" %s \n", &name[0]); //혹은
	printf(" %s \n\n", name); //매번 &array[0]쓰기 불편하니까 배열 이름만으로도 주소가 불려오도록 했다. 이렇게 써도 된다. 

	//스캔 받을 때마다 이렇게 받는 게 불편하니까 %s로 받을 수도 있게 한다.
	scanf_s("%s", &name[0], 20); //혹은
	printf(" %s \n", name);
	scanf_s("%s", name, 20); //여기서도 &array[0]대신 배열 이름만 써도 된다. 둘은 같은 값이니까.
	printf(" %s \n\n", name);


}

//다차원 배열 Multi-dimensional Array
void multidimention()
{
	//[단지][동][층][호]
	//[n차원][n-1차원]... [2차원][1차원]
	//2차원인 2 by 3 배열을 만들어보자
	int aaa[2][3];
	
	aaa[0][0] = 10;
	aaa[0][1] = 20;
	aaa[0][2] = 30;
	
	aaa[1][0] = 100;
	aaa[1][1] = 200;
	aaa[1][2] = 300;

	printf("%d \n\n", aaa[1][0]);

	//반복문으로 출력
	for (int i = 0; i < 2; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			printf("%3d ", aaa[i][k]);
		}
		printf("\n");
	}

	//반복문으로 입력 및 출력
	int arr[2][3];

	for (int i = 0; i < 2; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			scanf_s("%d", &arr[i][k]);
		}
		printf("\n");
	}

	for (int i = 0; i < 2; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			printf("%3d ", arr[i][k]);
		}
		printf("\n");
	}

	//다시 aaa로 돌아와서 주소를 출력해보자
	for (int i = 0; i < 2; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			printf("%p ", &aaa[i][k]);
		}
		printf("\n");
	}
	printf("\n");
	
	//사실 2 by 3 배열에서 &arr[1][0]은 &[arr[0][2] 옆에 있는 주소다. 말은 다른 차원이라지만 사실 메모리는 1차원 구조라서 다차원 배열의 주소도 1차원이다. 
	//그래서 arr[0][4]에 값을 입력하면 arr[1][1]에 입력되고 물론 읽을 수도 있다.
	
	//다차원 배열에서 저차원을 쓰지 않으면 그 차원의 이름(주소)이 된다. 그 차원의 배열 전체가 아님에 주의.
	printf("%p \n", aaa[1]);
	//즉 2차원 배열에서 aaa == aaa[0] == &aaa[0][0]
	printf("%p \n", aaa);
	printf("%p \n", aaa[0]);
	printf("%p \n", &aaa[0][0]);




	printf("\n\n");
}	

//다중배열의 초기화
void multi_initialization()
{
	int arr1[2][3] = { {0, 1, 2}, {3, 4, 5} };
	int arr2[2][3] = { 0, 1, 2, 3, 4, 5 }; //중괄호를 생략해도 가능
	int arr3[2][3][4] =
	{
		{
			{100, 101, 102, 103},
			{110, 111, 112, 113},
			{120, 121, 122, 123}
		},
		{
			{200, 201, 202, 203},
			{210, 211, 212, 213},
			{220, 221, 222, 223}
		}
	}; //이런 식으로 써주면 보기 좋다.
	//차원 칸은 생략 가능. 단, 맨 앞 자리 하나만.
	int arr4[][3][4] = { 0 };
	//0으로 초기화
	int arr5[2][3][4] = { 0 };

	//이름을 
	char name1[20] = "Kim";
	char name2[20] = "Lee";
	char name3[20] = "Park";

	//이거 너무 불편해. 문자열도 배열이니까 다차원 배열로 만들자.
	char names[10][20] = { "Kim", "Lee", "Park" };
	//호출할 땐 1차원은 생략해도 된다.
	printf("%s \n\n", names[0]); //Kim

	printf("%s \n\n", names[0][0]); //???

	char namesss[10][20] = { name1, name2, name3 };
	printf("%s \n\n", namesss[0]); //???


}

//배열을 90도 회전시키기
void ex1()
{	
	int arr1[2][4] = { {1,2,3,4},{5,6,7,8} };
	int arr2[4][2] = { 0, 0, 1, 1, 3, 3, 4, 4 };

	//for (int i = 0; i < 8; i++)
	//{
	//	printf("%d %d \n", arr1[0][i], arr2[0][i]);
	//	int k = (2 * (i + 1)) % 9 - 1;
	//	arr2[0][k] = arr1[0][i];
	//}
	for (int i = 0; i < 8; i++)
	{
		printf("%d %d \n", arr1[0][i], arr2[0][i]);
		int j = 0;
		if (2 * i + 1 < 8) j = 2*i + 1;
		else j = (2 * i + 1) % 8 -1;
		//printf("i: %d, j: %d ", i, j);
		arr2[0][j] = arr1[0][i];
	}
	printf("\n");
	for (int i = 0; i < 8; i++)
	{
		printf("%d %d \n", arr1[0][i], arr2[0][i]);
	}

}

//


//int 변수의 4바이트 중 두번째 칸만 읽을 수도 있을까?
void aaa()
{
	int a = 1;
	printf("%p \n", &a);
	printf("%p \n", &a - 1); //int라서 주소가 네 칸 움직이네

	char c = 'A';
	printf("%p \n", &c);
	printf("%p \n", &c - 1); //char라서 주소가 한 칸 움직이네

}

void main()
{
	//string();
	//keyboard();
	//multidimention();
	//multi_initialization();

	ex1();

	//aaa();
}