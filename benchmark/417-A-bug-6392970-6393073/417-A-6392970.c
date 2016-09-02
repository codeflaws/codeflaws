/*
	���� ���� ���� ������ c ������� ����
	���� ���� ������ ����ڵ��� �����ø���Ʈ�� ó�� n������̴�. 
	�߰����Ŷ������ ������ d ������� �����Ǿ��ִ�. �߰������� ����ڴ� �Ѹ��̴�.
	�Դٰ� ���� ���̳����� k����ڵ��� ���� ����
	���̳��� �ʴ�ȴ�.
	 ��������� �� n*m ������� ���̳��� ���߸� �Ѵ�. 
	����� ���Ŷ��带 ������ �ʿ䰡 �ִ�.
	�� n*m ����� ���̳��� �����Ѵ�. ��� ���忡�� ���� �������� �� ���� ��������
	����Ǿ��Ѵ�.
	

*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int c,d;			// c : �������Ŷ��� ������ ������ d : �߰����Ŷ����� ������ ������
	int n,m;			// n : �������Ŷ����� ����ڵ�  m : ??? n*m
	int k;			// ���� ���̳��� k����ڵ�

	int Ans;
	int Ans2;
	int Ans3;

	int iNum1;
	int iNum2;

	int iMin=100000000;

	int iCnt1;
	int iCnt2;

	scanf("%d %d", &c, &d);
	scanf("%d %d", &n, &m);
	scanf("%d", &k);
	
	Ans = n*m - k;

	if(Ans == 0)
	{
		printf("0\n");
	}
	else
	{
		for(iCnt1 = 0; ; ++iCnt1)
		{
			iNum1 = iCnt1*n;
			iNum2 = Ans - iNum1;
			if(iNum2 >= 0)
				Ans2 = iCnt1*c + iNum2*d;
			else
				Ans2 = iCnt1;
			if(iMin > Ans2)
			{
				iMin = Ans2;
				
			}
			if(iNum2 < 0) break;
		}
		printf("%d\n",iMin);
	}

	return 0;
}