#include <stdio.h>
#include <string.h>

int p10[8]={1,10,100,1000,10000,100000,1000000,10000000};
char r[100000][16],s[16],*ps;
int main(int argc, char *argv[])
{
	int i,j,n,pl,p,l,a,k;
	pl = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		l = strlen(s);
		if(l > pl)
		{
			for(j=0;j<l;j++)
			if(s[j]=='?')
			{
				if(j==0) r[i][j]='1';
				else r[i][j]='0';
			}
			else
			{
				r[i][j]=s[j];
			}
		}
		else if(l==pl)
		{
			a = 0; ps = r[i-1];
			for(j=0;j<l;j++)
			{
				if(s[j]=='?')
				{
					if(a==1) r[i][j]='0';
					else r[i][j]=ps[j];
				}
				else 
				{ 
					r[i][j]=s[j];
					if(s[j]>ps[j]) a=1;
					else if(a==0 && s[j]<ps[j]) break;
				}
			}
			if(a==0)
			{
				for(k=j-1;k>=0;k--)
				if(s[k]=='?')
				{
					if(r[i][k]=='9') r[i][k]='0';
					else {r[i][k]=r[i][k]+1; break;}
				}
				if(k<0) break;
				for(k=j;k<l;k++)
				{
					if(s[k]=='?') r[i][k]='0';
					else r[i][k]=s[k];
				}
			}
		}
		else break;
		r[i][l]=0; pl = l;
	}
	if(i==n) {
	printf("YES\n");
	for(i=0;i<n;i++)
		printf("%s\n",r[i]);
	}
	else printf("NO\n");
	return 0;
}
