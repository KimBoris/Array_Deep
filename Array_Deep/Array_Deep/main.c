#include <stdio.h>

int main()
{
	//�ִ밪 �ּҰ��� ����ؼ� ���ϸ� �װ��� ������ �ȴ�.


	//09-01 �������ķ� �˷��� ���� ����
	//�񱳱�ȯ�񱳱�ȯ
	//��ȯ�̶�� ������ ���ϴ� ������ ����ϱ� ������ �����̴�.
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


	////��������
	// �񱳺񱳺񱳺񱳱�ȯ
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

	//���� ����
	//��ȯ��ȯ��ȯ��ȯ
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


	//������׷� 2���� �迭 ����( ����� ���� )

	//1�� ���

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

	//2��° ���

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



	//3. nOffset�� Ȱ���ؼ� '���⼺'�� �� �������
	//int	aList[5][5] = { 0 };
	//int i = 0; int j = 0; int nCounter = 0; int nOffset = 1;
	//for (int i = 0; i < 5; i++)
	//{
	//	//Ȧ�� ��� ¦�� ���� �����ϰ� ù��° ����� �ʱ갪�� ���Ѵ�.
	//	if (i % 2 == 0)
	//	{
	//		nCounter = i * 5;
	//	}
	//	else
	//	{
	//		nCounter = (i + 1) * 5 + 1; //�ٽ�����Ʈ - 1
	//	}
	//	for (j = 0; j < 5; j++)
	//	{
	//		nCounter += nOffset;
	//		aList[i][j] = nCounter;
	//	}
	//	//'��ȣ ���� ���� ������'
	//	nOffset = -nOffset;				//�ٽ� ����Ʈ - 2
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("%d\t", aList[i][j]);
	//	}
	//}


//4. ���� �߿��� Flag���
	//int aList[5][5] = { 0 };
	//int i = 0; int j = 0; int nCounter = 0; int Flag = 1;

	//for (int i = 0; i < 5; i++)
	//{
	//	if (Flag)//1 = ��
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


//������ �迭 ä���
//��Ұ� int ���̰� ��� ���� ���̰� ��� 5�� 2���� �迭�� �����ϰ� ��� ��Ҹ� 0���� �ʱ�ȭ�� ��,
//'�ð���� ������'�������� ä���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�


//����
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

