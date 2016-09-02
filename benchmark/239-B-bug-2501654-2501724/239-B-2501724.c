#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, q, l, r, i, j, num[12], ap, idap;
	char s[105], exp[105];
	scanf(" %d %d", &n, &q);
	scanf(" %s ", s);
	while(q--)
	{
		scanf("%d %d", &l, &r);
		memset(num, 0, sizeof(num));
		j=0;
		for(i=l; i<=r; i++)
			exp[j++] = s[i-1];
		r-=l;
		l=i=0;
		j=1;
		ap=0;
		while(1)
		{
			if(i<0 || i>r)
				break;
			if(exp[i]=='_')
			{
				i+=j;
				continue;
			}
			if(exp[i]!='<' && exp[i]!='>')
			{
				ap=0;
				num[exp[i]-'0']++;
				if(exp[i]=='0')
					exp[i]='_';
				else
					exp[i]-=1;
			}
			else if(exp[i]=='<')
			{
				if(ap==1)
					exp[idap]='_';
				ap=1;
				idap=i;
				j=-1;
			}
			else if(exp[i]=='>')
			{
				if(ap==1)
					exp[idap]='_';
				idap=i;
				ap=1;
				j=1;
			}
			i+=j;
		}
		for(i=0;i<10;i++)
			printf("%d ", num[i]);
		printf("\n");
	}
	return 0;
}
