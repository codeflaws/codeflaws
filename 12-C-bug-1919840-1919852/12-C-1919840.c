#include<stdio.h>
#include<string.h>
//#include<conio.h>
int main(int argc, char *argv[])
{
	int a,b,n,m,p[1000],i,j,k,c[1000];
	char f[200][100],s[100];
	while (scanf("%d%d",&n,&m)!=0)
	{
		for (i=0;i<n;i++)
			scanf("%d",&p[i]);
		for (i=0;i<n-1;i++)
			for (j=i+1;j<n;j++)
				if (p[i]>p[j])
				{
					k=p[i];
					p[i]=p[j];
					p[j]=k;
				}
		for (i=0;i<m;i++)
			scanf("%s",f[i]);
		for (i=0;i<m-1;i++)
			for (j=i+1;j<m;j++)
				if (strcmp(f[i],f[j])>0)
				{
					strcpy(s,f[i]);
					strcpy(f[i],f[j]);
								strcpy(f[j],s);
				}
		for (i=0,j=0,k=1;i<m;i++)
		{
			if (strcmp(f[i],f[i+1])==0 && i!=m-1)
				k++;
			else
			{
				c[j]=k;
				j++;
				k=1;
			}
		}
		for (i=0;i<j-1;i++)
			for (k=i+1;k<j;k++)
				if (c[i]>c[k])
				{
					a=c[i];
					c[i]=c[k];
					c[k]=a;
				}
		a=b=0;
		for (i=0,k=j-1;k>=0;k--)
		{
			a=a+c[k]*p[i];
					b=b+c[k]*p[n-1-i];
			i++;
		}
		printf("%d %d\n",a,b);
	}
//	getch();
	return(0);
}
    
