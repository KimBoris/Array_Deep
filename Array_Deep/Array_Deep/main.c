#include <stdio.h>

int main()
{
	//최대값 최소값을 계속해서 구하면 그것이 정렬이 된다.


	//09-01 선택정렬로 알려진 버블 정렬
	//비교교환비교교환
	//교환이라는 행위를 비교하는 곳에서 계속하기 때문에 버블이다.
	//int aList[5] = { 30,40,10,50,20 };
	//int i = 0, j = 0, nTmp = 0;

	/*for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (aList[i] > aList[j])
			{
				nTmp = aList[i];
				aList[i] = aList[j];
				aList[j] = nTmp;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", aList[i]);

	}*/


	////선택정렬
	// 비교비교비교비교교환
	//int nIndexMin = 0;
	//for (i = 0; i < 4; i++)
	//{
	//	nIndexMin = i;
	//	for (j = i + 1; j < 5; j++)
	//	{
	//		if (aList[nIndexMin] > aList[j])
	//		{
	//			nIndexMin = j;
	//		}
	//	}
	//	if (i != nIndexMin) {
	//		nTmp = aList[i];
	//		aList[i] = aList[nIndexMin];
	//		aList[nIndexMin] = nTmp;
	//	}
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d\t", aList[i]);
	//}

	//버블 정렬
	//교환교환교환교환
	/*for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (aList[i] > aList[j])
			{
				nTmp = aList[i];
				aList[i] = aList[j];
				aList[j] = nTmp;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", aList[i]);
	}*/


	//지그재그로 2차원 배열 배우기( 방법이 많다 )

	//1번 방법

	/*int aList[5][5] = { 0 };
	int i = 0; int tmp = 0;

	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0) {
			for (int j = 0; j < 5; j++)
			{
				tmp++;

				aList[i][j] = tmp;
			}
		}
		else
		{
			for (int j = 4; j >= 0; j--)
			{
				tmp++;
				aList[i][j] = tmp;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", aList[i][j]);
		}
		putchar('\n');
	}*/

	//2번째 방법

	//int aList[5][5] = { 0 };
	//int tmp = 0;
	//for (int i = 0; i < 5; ++i)
	//{
	//	if (i % 2 == 0)
	//	{
	//		for (int j = 0; j < 5; j++)
	//		{
	//			++tmp;
	//			aList[i][j] = tmp;
	//		}
	//	}
	//	else
	//	{
	//		for (int j = 0; j < 5; j++)
	//		{
	//			++tmp;
	//			aList[i][4 - j] = tmp;
	//		}
	//	}
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("%d\t", aList[i][j]);
	//	}
	//}



	//3. nOffset을 활용해서 '방향성'을 띈 구현방식
	//int	aList[5][5] = { 0 };
	//int i = 0; int j = 0; int nCounter = 0; int nOffset = 1;
	//for (int i = 0; i < 5; i++)
	//{
	//	//홀수 행과 짝수 행을 구별하고 첫번째 요소의 초깃값을 구한다.
	//	if (i % 2 == 0)
	//	{
	//		nCounter = i * 5;
	//	}
	//	else
	//	{
	//		nCounter = (i + 1) * 5 + 1; //핵심포인트 - 1
	//	}
	//	for (j = 0; j < 5; j++)
	//	{
	//		nCounter += nOffset;
	//		aList[i][j] = nCounter;
	//	}
	//	//'부호 변경 단항 연산자'
	//	nOffset = -nOffset;				//핵심 포인트 - 2
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("%d\t", aList[i][j]);
	//	}
	//}


//4. 가장 중요한 Flag방식
	//int aList[5][5] = { 0 };
	//int i = 0; int j = 0; int nCounter = 0; int Flag = 1;

	//for (int i = 0; i < 5; i++)
	//{
	//	if (Flag)//1 = 참
	//	{
	//		for (int j = 0; j < 5; j++)
	//		{
	//			aList[i][j] = ++nCounter;
	//		}
	//		Flag = 0;
	//	}
	//	else
	//	{
	//		for (int j = 0; j < 5; j++)
	//		{
	//			aList[i][4 - j] = ++nCounter;
	//		}
	//		Flag = 1;
	//	}
	//}

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("%d\t",  aList[i][j]);
	//	}
	//}


//달팽이 배열 채우기
//요소가 int 형이고 행과 열의 길이가 모두 5인 2차원 배열을 선언하고 모든 요소를 0으로 초기화한 후,
//'시계방향 달팽이'형식으로 채워서 출력하는 프로그램을 작성하시오


//예시
//1  2  3  4  5 
//16 17 18 19 6
//15 24 25 20 7
//14 23 22 21 8
//13 12 11 10 9

	/*int aList[5][5] = { 0 };
	int i = 0;
	int j = 0;
	int nCounter = 1;
	int nOffset = 0;
	scanf_s("%d", &nOffset);

	 */


//Look-Up Table

	return 0;
}

