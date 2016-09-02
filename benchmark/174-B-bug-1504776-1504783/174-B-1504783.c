#include<stdio.h>
#include<string.h>

char line[400010],names[200000][13];

int main(int argc, char *argv[])
{
	int i,first=1,prev,cur=0;

	memset(names,0,sizeof(names));

	scanf("%s",line);

	for (i=0;line[i]!=0;i++)
	{
		if (first && line[i]!='.') { names[0][i]=line[i]; }
		if (line[i]!='.') { continue; }
		if (first)
		{
			if (i<1 || i>8)
			{
				printf("NO\n");
				return 0;
			}
			first=0;
			prev=i;
			continue;
		}

		if (i-prev<3 || i-prev>12)
		{
			printf("NO\n");
			return 0;
		}
		if (i-prev<5)
		{
			strncat(names[cur++],line+prev,2);
			strncat(names[cur],line+prev+2,i-prev-2);
		}
		else
		{
			strncat(names[cur++],line+prev,4);
			strncat(names[cur],line+prev+4,i-prev-4);
		}
		prev=i;
	}
	if (i-prev>4 || i-prev<2)
	{
		printf("NO\n");
		return 0;
	}
	strcat(names[cur++],line+prev);
	printf("YES\n");
	for (i=0;i<cur;i++)
	{
		printf("%s\n",names[i]);
	}

	return 0;
}

