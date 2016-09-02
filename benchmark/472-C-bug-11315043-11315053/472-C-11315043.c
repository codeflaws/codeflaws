//Codeforces 472 //C. Design Tutorial: Make It Nondeterministic //Codeforces Round #270 (Div. 2)
#if 1
//���� : n���� ������� ���� �̸��� �־�����. n���� ������� ������ �־��� ��,
//�� ������� ������� �� �Ǵ� �̸��� ���������� ���� �� �ִ��� Ȯ���϶�.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
typedef struct _name
{
	char f[51];
	char s[51];
}Name;


int main(int argc, char *argv[])
{
	int n;
	Name *name;
	int i;
	int check=0;
	int *num;
	char temp[50];
	FILE *fin = freopen("input.txt", "r", stdin);
	scanf("%d ", &n);
	name = (Name*)calloc(n+1, sizeof(Name));
	num = (int*)calloc(n, sizeof(int));
	for(i=1; i<=n; i++)
	{
		scanf("%s", name[i].f);
		scanf("%s", name[i].s);
	}

	for(i=0; i<n; i++)
		scanf("%d ", &num[i]);


	if(strcmp(name[num[0]].f, name[num[0]].s) < 0) //n�� n-1 ���� �Ѵ�ũ�ٸ� �����ż�����
		strcpy(temp, name[num[0]].f);
	else
		strcpy(temp, name[num[0]].s);

	for(i=1; i<n; i++)
	{
		if((strcmp(name[num[i]].f, temp) > 0) && 
			(strcmp(name[num[i]].s, temp) > 0)) //n�� n-1 ���� �Ѵ�ũ�ٸ� �����ż�����
		{
			if(strcmp(name[num[i]].f, name[num[i]].s) < 0)
				strcpy(temp, name[num[i]].f);
			else
				strcpy(temp, name[num[i]].s);
		}
		else if(strcmp(name[num[i]].f, temp) > 0) //�ϳ��� ũ�ٸ�
		{
			strcpy(temp, name[num[i]].f);
		}
		else if(strcmp(name[num[i]].s, temp) > 0) //�ϳ��� ũ�ٸ�
		{
			strcpy(temp, name[num[i]].s);
		}
		else //�Ѵ� ��ũ�ٸ� Ż��
		{
			check = 1;
			break;
		}
	}
	if(!check)
		printf("YES");
	else
		printf("NO");

	free(num);
	free(name);
	return 0;
}

#endif