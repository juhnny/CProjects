#include <stdio.h>

void main()
{
	// Ex 1. 프로그램 사용자로부터 양의 정수를 하나 입력 받아서, 그 수만큼 "Hello World!"를 출력하는 프로그램을 작성해보자.
	//int i, count;

	//do
	//{
	//	printf("Enter a positive integer: ");
	//	scanf_s("%d", &count);

	//} while (count <= 0);

	//for (int i = 0; i < count; i++)
	//{
	//	printf("Hello World!\n");
	//}
	//printf("Done");

	//문제2.
	//프로그램 사용자로부터 양의 정수를 하나 입력 받은 다음, 그 수만큼 3의 배수를 출력
	//하는 프로그램을 작성해 보자. 예를 들어 5를 입력받았다면, 3 6 9 12 15를 출력해야
	//하고 3을 입력받았다면, 3 6 9 를 출력해야 한다.

	//int i=0, j=0, count;
	//printf("\"Multiple Generator\"\n");

	//do
	//{
	//	printf("Enter a positive Integer: ");
	//	scanf_s("%d", &count);
	//} while (count <= 0);

	////while로 해보기
	////while (j < count)
	////{
	////	if (!((i+1) % 3))
	////	{
	////		printf("%d ", i+1);
	////		j++;
	////	}
	////	i++;
	////}
	////printf("Done");

	////for로 해보기
	//for (;j<count ;i++)
	//{
	//	if (!((i+1) % 3))
	//	{
	//		printf("%d ", i+1);
	//		j++;
	//	}
	//}
	//printf("Done");

	//Better
	//for (int i = 0; i < count; i++)
	//{
	//	printf("%d ", i * 3);
	//}
	

	//문제3.
	//프로그램 사용자로부터 계속해서 정수를 입력받는다. 그리고 그 값을 계속해서 더해
	//나간다. 이러한 작업은 프로그램 사용자가 0을 입력할 때까지 계속되어야 하며, 
	//0이 입력되면 입력된 모든 정수의 합을 출력하고 프로그램을 종료한다.
	// 
	//printf("<Summer>\n\n");
	//int num = 0, sum = 0;
	//do
	//{
	//	printf("Enter a number: ");
	//	scanf_s("%d", &num);
	//	sum += num;
	//} while (num != 0);
	//printf("Sum is : %d \n", sum);
	//printf("Done");

	//문제4.
	//프로그램 사용자로부터 입력 받은 숫자에 해당하는 구구단을 출력하되, 역순으로 
	//출력하는 프로그램을 작성해 보자.

	/*printf("<Gugudan Generator>\n");
	
	int dan = 1;
	printf("Enter a dan : ");
	scanf_s("%d", &dan);
	if (dan < 0) dan *= -1;
	for (; dan > 0; dan--)
	{
		printf("%d Dan \n", dan);
		for (int i = 0; i < 9; i++)
		{
			printf("%d x %d = %d\n", dan, i + 1, dan * (i + 1));
		}
		printf("\n");
	}
	printf("Done");*/

	//문제5.
	//1이상 100미만의 정수 중에서 7의 배수와 9의 배수를 출력하는 프로그램을 작성해 보자.
	//단! 7의 배수이면서 동시에 9의 배수인 정수는 한번만 출력해야 한다.
	
	//int i = 1;
	//while (i < 100)
	//{
	//	if (!(i % 7)) printf("%d ", i); // if else 를 쓸 때는 조건들 사이에 교집합이 있는지, 그 부분이 어떻게 처리되는지 시뮬레이션을 먼저 해보자.
	//	else if(!(i % 9)) printf("%d ", i); //위에서 교집합인 63은 먼저 제외됐기 때문에 이 줄에서는 63을 표현하지 않는다.
	//	i++;
	//}
	//printf("Done");

	//for(int i = 1; i < 100;i++)
	//{
	//	if (i % 7 == 0 || i % 9 == 0) printf("%d ", i);
	//}

	//문제6.
	//두 개의 정수를 입력 받아서 두 수의 차를 출력하는 프로그램을 구현해 보자. 단, 무조건
	//큰 수에서 작은 수를 뺀 결과를 출력해야 한다. 예를 들어서 입력된 두 수가 순서에 
	//상관없이 12와 5라면 7이 출력되어야 하고, 입력된 두 수가 순서에 상관없이 4와 16이라면
	//12가 출력되어야 한다. 즉, 출력 결과는 무조건 0 이상이 되어야 한다.

	//int n, m, sub;
	//printf("Enter two numbers (n m) and press Enter: ");
	//scanf_s("%d %d", &n, &m);
	//if (n >= m) sub = n - m;
	//else sub = m - n;
	//printf("Substract = %d", sub);

	//문제7.
	//문제 6번의 내용을 if~else를 사용하여 해결하였는가? 이를 if~else가 아닌 삼항연산자를
	//이용하여 구현해 보자. 

	//int n, m, sub;
	//printf("Enter two numbers (n m) and press Enter: ");
	//scanf_s("%d %d", &n, &m);
	//sub = (n >= m)? n - m : m - n;
	//printf("Substract = %d", sub);
	////혹은 sub 사용하지 않고 바로
	//printf("Substract = %d", (n >= m) ? n - m : m - n);


	//문제8.
	//구구단을 출력하되 짝수 단(2단, 4단, 6단, 8단)만 출력되도록 한다. 또한 2단은 2*2까지,
	//4단은 4*4까지, 6단은 6*6까지, 8단은 8*8까지만 출력되도록 해보자. 이를 해결하기 
	//위해 break와 continue문을 사용해보자.

	//printf("Let's Gugudan!");
	//for (int dan = 0; dan < 9; dan++)
	//{
	//	if(!(dan%2)) 
	//		for (int i = 0; i < dan; i++)
	//		{
	//			printf("%d x %d = %d \n", dan, i + 1, dan * (i + 1));
	//		}
	//	printf("\n");
	//}
	//printf("Done");

	//continue 사용해보기
	//for문이면 break가 굳이 필요 없는데? while이면 if(dan == 9) break;로 빠져나오면 되겠지

	//printf("Let's Gugudan!");
	//
	//for (int dan = 0; dan < 9; dan++)
	//{
	//	if ((dan % 2)) continue;
	//	for (int i = 0; i < dan; i++)
	//	{
	//		printf("%d x %d = %d \n", dan, i + 1, dan * (i + 1));
	//	}
	//	printf("\n");
	//}
	//printf("Done");

	//문제9.
	//프로그램 사용자로부터 입력 받은 정수의 평균을 출력하는 프로그램을 작성하되
	//다음 두 가지 조건을 만족시켜야 한다.
	//  - 먼저 몇 개의 정수를 입력할 것인지 프로그램 사용자에게 묻는다. 그리고 그 수
	//	만큼 정수를 입력 받는다.
	//  - 평균값은 소수점 이하까지 출력되도록 한다.

	//printf("Average calculator \n");

	//int count, num;
	//double sum = 0;
	//do
	//{
	//	printf("How many numbers? ");
	//	scanf_s("%d", &count);
	//} while (count <= 0);

	//for (int i = 0; i < count; i++)
	//{
	//	printf("Enter numbers to calculate the average of: \n");
	//	scanf_s("%d", &num);
	//	sum += num;
	//}

	//printf("Average of %d numbers: %.2lf", count, sum / count);
	
	//문제10.
	//프로그램 사용자로부터 총 5개의 정수를 입력 받아서, 그 수의 합을 출력하는 프로그램
	//을 작성해보자. 단, 한가지 조건이 있다. 정수는 반드시 1 이상이어야 한다. 만약에 
	//1 미만의 수가 입력되는 경우에는, 이를 입력으로 인정하지 않고 재 입력을 요구해야
	//한다. 그래서 결국 1 이상의 정수 5개를 모두 입력 받을 수 있는 프로그램을 완성해야
	//한다.
	
	//int num1, num2, num3, num4, num5;

	//do 
	//{
	//	printf("Enter number1:");
	//	scanf_s("%d", &num1);
	//	if (num1 <= 0) printf("Enter a positive integer.\n");
	//} while (num1 <= 0); // 배열을 안 쓰고 정수 다섯 개를 보관하려면(변수 다섯개에 각각 넣으려면) 이걸 다섯 번 반복하는 수밖에 없나? 그렇다. 

	//printf("%d", num1); 

	//문제11.
	//아래의 출력을 보이는 프로그램을 작성해보자.
	// *
	// o *
	// o o *
	// o o o *
	// o o o o *

	// 참고로, 총 5행에 걸쳐서 출력이 이루어지고, 행이 더해질 때마다 'o'문자가 증가한다는
	//특징을 기반으로 while문의 중첩을 구성하면 된다.
	
	//int i = 0;
	//while (i < 5)
	//{	
	//	int j = 0;
	//	while (j < i)
	//	{
	//		printf("o ");
	//		//printf("i, j:%d, %d", i, j);
	//		j++;
	//	}
	//	printf("*\n");
	//	i++;
	//}
	
	//for문이 더 깔끔하네. 필요없는 변수도 남지 않고.
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < i; j++)
	//	{
	//		printf("o ");
	//	}
	//	printf("*\n");
	//}


	//문제. 구구단을 3*3으로 배치
	//for (int dan = 1; dan < 10; dan+=3)
	//{
	//	for (int i = 1; i < 10; i++)
	//	{
	//		printf("%d x %d = %d\t%d x %d = %d\t%d x %d = %d\n", dan, i, dan * i, dan + 1, i, (dan + 1)*i, dan + 2, i , (dan + 2) * i);
	//	}
	//	printf("\n");
	//}

	//문제. 출력하고자 하는 최대 정수와 한 줄에 출력하고자 하는 숫자의 개수를 입력받는다. 
	// 출력 순서는 지그재그로..
	//1  2  3  4  5 
	//10 9  8  7  6
	//11 12 13 14 15
	//         17 16

	//int num = 0;
	//int end_num = 0;
	//int perLine = 0;

	//printf("마지막 정수: ");
	//scanf_s("%d", &num);
	//printf("한 줄에 몇 개: ");
	//scanf_s("%d", &perLine);

	//end_num = ((num / perLine) + 1) * perLine; // 진짜로 끝나야 할 번호


	//printf("%d %d\n", num, perLine);

	//for (int i = 1; i <= end_num; i++)
	//{	
	//	int line = (i - 1) / perLine; //줄 번호(0, 1, 2, ...)

	//	if (line % 2 == 0) //짝수줄(0, 2, ...). 짝수면 그냥 i 입력
	//	{
	//		if (i <= num) printf("%d\t", i); //사용자가 입력한 숫자 num이하면 출력
	//		else printf(" \t");	// 아니면 빈 칸
	//	}
	//	else //홀수줄(1, 3, ...). 홀수면 변환된 숫자 j 을 입력하되 j가 num보다 크면 continue
	//	{	
	//		int order = (i - 1) % perLine + 1; //그 줄에서 몇 번째인가
	//		int j = i + perLine + 1 - 2 * order; //i를 그 자리에 맞는 숫자 j로 바꾸는 식

	//		if (j <= num) printf("%d\t", j); //사용자가 입력한 숫자 num이하면 출력
	//		else printf(" \t");	// 아니면 빈 칸
	//	}
	//	if (i % perLine == 0) printf("\n");
	//}

	//다시 풀어보자
	//int i = 1, alter_i, max, real_max, line, per_line;
	//line = 1;

	//printf("Enter max number: ");
	//scanf_s("%d", &max);
	//printf("Enter per_line: ");
	//scanf_s("%d", &per_line);

	//alter_i = i + per_line;
	//real_max = max + per_line - (max % per_line);

	//for (i = 1; i <= real_max; i++)
	//{
	//	if (line % 2) //홀수줄. 앞에서 뒤로 커진다.
	//	{
	//		if (i > max)
	//		{
	//			break;
	//		}
	//		else
	//		{
	//			printf("%d\t", i);
	//		}
	//	}
	//	else //짝수줄. i 대신 alter_i 사용. 뒤로 갈수록 작아지고, max보다 크면 탭만 함.
	//	{ 
	//		if (alter_i > max)
	//		{
	//			printf("\t");
	//		}
	//		else
	//		{
	//			printf("%d\t", alter_i);
	//		}
	//		alter_i -= 1;
	//	}

	//	if (!(i % per_line)) //칸이 차면 줄을 바꾸고 alter_i를 초기화
	//	{
	//		printf("\n");
	//		line++;
	//		alter_i = i + per_line;
	//	}
	//}

	// 숫자 나선형으로 출력하기
	



	//0으로 나누면 오류

	//unsigned 변수 써보기
	//unsigned 변수에도 음수 저장이 된다. 부호는 값을 읽어와서 사용할 때 결정되기 때문. 
	//출력할 때 %d로 하면 signed number로 해석하고 %u로 하면 unsigned number로 해석한다. 
	//그럼 unsigned 변수를 왜 쓰냐? 어차피 저장되는 값도 signed와 같은데.. 
	//int a = 5;
	//int b = -4;
	//unsigned int c = 3;
	//unsigned int d = -2;
	//printf("%u, %d \n", a, a);
	//printf("%u, %d \n", b, b);
	//printf("%u, %d \n", c, c);
	//printf("%u, %d \n", d, d);

	//x, y 그래프 그리기
	//int x, y;
	//x = 0, y = 0;
	////printf("%d, %d", x, y);
	//
	//while (y < 10)
	//{
	//	x = y*y;
	//	int i = 0;
	//	while (i < x)
	//	{
	//		printf(" ");
	//		i++;
	//	}
	//	printf("*\n");
	//	y++;
	//}

	//printf("Done");





}