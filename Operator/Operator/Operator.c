#include <stdio.h>

void main()
{
	int a;
	//논리적 주소 &a
	//물리적 주소
	//printf("%x, %d", &a, &a);

	//연산자Operator, 피연산자Operand
	
	//1. 산술 연산자 +, -, *, /, %
	// / 나누기 연산자
	a = 25;
	float aa = 25;
	printf("int 25를 3으로 나누면 %d \n", a / 3); //몫이 나온다
	printf("float 25를 3으로 나누면 %f \n", aa / 3);
	//% 나머지 연산자
	printf("int 25를 3으로 나눈 나머지는 %d \n", a % 3);
	printf("float 25를 3으로 나눈 나머지는 %f \n", aa / 3);

	//2. 비교 연산자

	//3. 논리 연산자
	//산술 연산이 십진법의 연산이라면 논리 연산은 이진수 0과 1의 연산에서만 사용하는 연산
	//Boole이 만든 연산
	//스위치 2개가 직렬인 회로도에서 램프에 불이 들어오는 경우를 나타낸 것이 
	//&& AND 연산자
	printf("&& 연산자 \n");
	printf("%d \n", 0 && 0);
	printf("%d \n", 0 && 1);
	printf("%d \n", 1 && 0);
	printf("%d \n", 1 && 1);

	printf("%d \n", -1 && 1);
	printf("%d \n", 0 && 3);
	printf("%d \n", 1 && 5);
	
	//산술 연산에서 0이 아닌 모든 값은 1로 인식된다. 0과 1만 필요하니까.
	//산술 연산은 그 자체만으로 쓰이기보다는 
	//조건이 여러개일 때 조건(비교 연산)의 결과(T/F)들을 연산할 때 주로 쓰인다.

	//|| OR 연산자
	printf("|| 연산자 \n");
	printf("%d \n", 0 || 0);
	printf("%d \n", 0 || 1);
	printf("%d \n", 1 || 0);
	printf("%d \n", 1 || 1);

	printf("%d \n", 0 || 0);
	printf("%d \n", 0 || 0);

	//괄호를 양쪽에 두면 오류를 범하기 십상
	//실수하기 쉬운 표현 방법
	int age = 15;
	if (20 <= age < 30)
	{
		printf("true \n");
	}
	else
	{
		printf("false \n");
	}
	//컴퓨터는 한 번에 "하나"의 연산만 처리한다.
	//20 <= age를 먼저 연산하고 age <30을 다음에 처리한다...가 아니라!
	//20 <= age의 먼저 연산하고 "그 결과"와 30 사이에서 < 연산을 처리한다.
	//1차 연산의 결과가 True/False이므로 즉 1 또는 0이 나오므로 30보다 무조건 작다.
	//즉 무조건 참이 나오는 잘못된 로직이다.

	//! NOT 연산자
	//0이면 1을 반환, 1이면 0을 반환
	
	
	//4. 비트 연산자
	//논리 연산은 같지만 부호는 한 글자씩
	// & AND
	printf("5 & 3 = %d \n", 5 & 3);
	printf("5 & 2 = %d \n", 5 & 2);
	// | OR
	// ~ NOT
	//이진수로 바꿔서 연산을 해보면 머리로 계산한 것과는 다르게 나오는데
	//이유는 이진수 앞에도 0들이 있기 때문. 4비트int면 부호 1자리에 이진수 31자리나 되니까.
	//부호도 달라지고 어떤 값이 나올지 계산해보려면 2의 보수법을 알아야 한다.
	

	// >>, <<
	//비트값을 오른쪽 혹은 왼쪽으로 민다.
	//2의 배수로 나누거나 곱하는 효과와 비슷
	//하지만 밀려진 정보는 날아간다. 특정 칸의 값을 날리기 위해 일부러 쓰기도.
	printf("8 >> 1 = %d \n", 8 >> 1);
	printf("8 >> 3 = %d \n", 8 >> 3);
	printf("9 >> 3 = %d \n", 9 >> 3);
	printf("8 << 1 = %d \n", 8 << 1);
	printf("8 << 3 = %d \n", 8 << 1);

	// ^ Exclusive OR
	//서로 값이 배타적이면 1, 값이 같으면 0
	printf("0 ^ 0 = %d \n", 0 ^ 0);
	printf("0 ^ 1 = %d \n", 0 ^ 1);
	printf("1 ^ 0 = %d \n", 1 ^ 0);
	printf("1 ^ 1 = %d \n", 1 ^ 1);

	//5. 증감 연산자
	//++ 증가 연산자
	int c = 1;
	//A++과 ++A
	//전자는 선출력 후연산, 즉 메모리에서 값을 먼저 꺼내주고 자신의 값을 증가시킨다. 
	//후자는 선연산 후출력, 즉 자신의 값을 먼저 증가시키고 값을 꺼내준다.
	printf("c++ = %d \n", c++);
	printf("c = %d \n", c);
	c = 1;
	printf("++c = %d \n", ++c);
	printf("c = %d \n", c);

	c = 1;
	int c2 = c;

	//헷갈리는 코드이므로 ++연산은 다른 라인에서 먼저 처리한 후 쓰자.

	//-- 감소 연산자

	//6. 복합대입 연산자
	//대입 연산(=)과 산술연산을 섞은 것
	//++은 1씩 늘어나지만 3씩 늘리려면?
	//A += 1 은 "A를 증가시켜서 대입해라 3을"이라는 뜻
	//부호 순서가 바뀌어서 A=+1로 쓰면 그냥 A = +1 이 되므로 주의
	
	//3씩 증가시켜 대입해라
	int d = 1;
	d += 3;
	printf("d += 3 : %d \n", d);
	//변수를 대입할 수도 있다.
	d = 1;
	int e = 5;
	d += e;
	printf("d += 1 : %d \n", d);
	//자기 자신을 대입하면 계속 자기 크기만큼 늘어나므로 *2와 동일
	d = 2;
	d += d;
	printf("d += d : %d \n", d);
	d += d;
	printf("d += d : %d \n", d);
	d += d;
	printf("d += d : %d \n", d);
	d += d;
	printf("d += d : %d \n", d);

	//-= 빼서 넣어라
	//자기 자신을 대입하면 0. 무의미
	
	//*= 곱해서 넣어라
	//자기 자신을 대입하면 계속 자기 자신을 제곱
	d = 2;
	d *= d;
	printf("d *= d : %d \n", d);
	d *= d;
	printf("d *= d : %d \n", d);
	d *= d;
	printf("d *= d : %d \n", d);

	// /= 나눠서 넣어라

	//7. 삼항 연산자
	// 조건문. if문과 같다.
	// (조건) ? A : B
	// (조건)이 참이면 A, 거짓이면 B

	int f = 5;
	int g = f < 10 ? 1 : 2;
	printf("f : %d \n", g);
	//char 변수도 물론 가능
	char h = f < 10 ? 'a' : 'b';
	printf("h : %c \n", h);

	//다중 조건도 한 줄에 가능
	h = (f < 10) ? (f < 5) ? 'a' : 'b' : 'c';
	printf("h : %c \n", h);

	char ch = 'A';
	printf("ch : %d \n", ch + 1);
	printf("ch : %d \n", ++ch);

	//삼항연산자 예제
	int score;
	char grade;
	printf("성적을 입력해주세요 : \n\n");
	scanf_s("%d", &score);
	//(score > 100) ? printf("뻥 치고 있네") :
	(grade = (score >= 90) ? 'A' : 
			(score >= 80) ? 'B' : 
			(score >= 70) ? 'C' : 
			(score >= 60)? 'D':
			'F');
	//printf("score: %c, %d", score, score);
	//printf("grade: %c, %d", grade, grade);
	(score >= 70) ? 
		printf("\n당신의 성적은 %c입니다. 축하드립니다. \n", grade) :
		printf("당신의 성적은 %c입니다. 헐, 재수강각. \n", grade);

	
	//Tip. 모든 연산자에서 '='은 뒤에만 붙어 있다.
	
	//int를 %f로 표현하면 0이 나오니 주의
	printf("%d, %f \n", a, a);
	//float을 %d로 표현하면 0이 나오니 주의
	float b = 3;
	printf("%d, %f \n", b, b); // 0, 8.000000
	//int에 float 변수를 대입시키면 무슨 타입? 계산은 되나?
	//반대 경우는?
	//char에 int나 float을 넣으면?
	//반대 경우는?

	//= 대입 연산자
	//초기화와 대입은 다르다.
	//아래 두 과정은 결과적으로는 같지만 내부적 프로세스는 전혀 다르다. 
	int aaa = 10;
	int bbb; bbb = 10;
	//aaa는


	
	
	
	//printf("%x", &10);


	
}