#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int max=0;
int a[10];
int p[100];
typedef struct
{
	int val;
	int mvrg;
	int thrg;
}Ch;
typedef Ch CA[4];
int movethrow(CA,int);
int search(int pe)
{
	int i,t;
	for (i=1;i<45;i++)	
	{
		if (p[i]>0)
		{
			t=p[i];
			while (t)
			{
				if ((t%10)==pe)
					return i;
				t=t/10;
			}
		}
	}
}
int change(int pe,int pos)
{
	int t;
	t=search(pe);
	p[t]=0;
	p[pos]=pe;
	
}
int tr(CA C,int pe)
{
	int i,j;
	int f,m,r,t[4];
	int temp;
	t[1]=search(1);
	t[2]=search(2);
	t[3]=search(3);
	m=t[pe];
	temp=p[m];
	f=m-C[pe].thrg;
	r=m+C[pe].thrg;
	if (r>max)
		max=r;
	if (f<=0)
		f=1;
	for (i=f;i<=r;i++)
	{
		if (i!=m&&p[i]==0&&
			(abs(i-t[1])==1||abs(i-t[2]==1)||abs(i-t[3])==1||i==r))
		{
			
			p[i]=temp/10;
			p[m]=temp%10;
			for (j=1;j<=9;j++)
			{
				
				if (a[j]==0)
				{
					a[j]=1;a[0]++;
					movethrow(C,j);
					a[j]=0;a[0]--;
				}
			}
			p[i]=0;
			p[m]=temp;
		}
	}
	return 0;
}
int mv(CA C,int pe)
{
	int i,j;
	int f,m,r,t[4];
	t[1]=search(1);
	t[2]=search(2);
	t[3]=search(3);
	int temp;
	temp=t[pe];
	m=t[pe];
	t[pe]=t[3];
	t[3]=temp;
	f=m-C[pe].mvrg;
	r=m+C[pe].mvrg;
	if (r>max)
		max=r;
	if (f<=0)
		f=1;
	for (i=f;i<=r;i++)
	{
		if (i!=m&&p[i]==0&&
			(abs(i-t[1])<=2||abs(i-t[2]<=2)||abs(i-t[3])<=1||i==r))
		{
			change(pe,i);
			
			for (j=1;j<=9;j++)
			{
				if (a[j]==0)
				{
					a[j]=1;a[0]++;
					movethrow(C,j);
					a[j]=0;a[0]--;
				}
			}
		}
	}
	change(pe,m);
	return 0;
}

int movethrow(CA C,int fr)
{
	int i,j;
	int rt;
	if (fr%3==1)
	{
		rt=fr/3+1;
		if (a[fr+1]==1&&a[fr+2]==0)
		{
			return 0;
		}
		else if (p[search(rt)]>10)
		{
			return 0;
	 	}
		else
		{
			mv(C,rt);

			return 0;
		}
		
	}
	if (fr%3==2)
	{
		int px;
		rt=fr/3+1;
		px=search(rt);
		if (p[px]>10)
		{
			return 0;
		}
		else if (p[px-1]>0)
		{
			int temp;
			p[px]+=p[px-1]*10;
			temp=p[px-1];
			p[px-1]=0;
			for (j=1;j<=9;j++)
			{
				if (a[j]==0)
				{
					a[j]=1;a[0]++;
					movethrow(C,j);
					a[j]=0;a[0]--;
				}
			}
			p[px]=rt;
			p[px-1]=temp;
		}
		else if (p[px+1]>0)
		{
			int temp;
			p[px]+=p[px+1]*10;
			temp=p[px+1];
			p[px+1]=0;
			for (j=1;j<=9;j++)
			{
				if (a[j]==0)
				{
					a[j]=1;a[0]++;
					movethrow(C,j);
					a[j]=0;a[0]--;
				}
			}
			p[px]=rt;
			p[px+1]=temp;
			return 0;
		}
		else
		{
			return 0;
		}
	}
	if (fr%3==0)
	{
		rt=fr/3;
		int px;
		px=search(rt);
		if (a[fr-1]==0)
		{
			return 0;
		}
		else if (p[px]%10!=rt)
		{
			return 0;
		}
		else 
		{
			tr(C,rt);
			return 0;
		}
	}
}
int main(int argc, char *argv[])
{
	CA C;
	int i,j;
	for (i=1;i<100;i++)
	{
		p[i]=0;
	}
	for (i=1;i<=3;i++)
	{
		scanf("%d %d %d",&C[i].val,&C[i].mvrg,&C[i].thrg);
		p[C[i].val]=i;
	}
	for (i=0;i<=9;i++)
	{
		a[i]=0;
	}
	for (i=1;i<=9;i++)
	{
		a[i]=1;a[0]++;
		movethrow(C,i);
		a[i]=0;a[0]--;
	}
	
	printf("%d",max);
	return 0;
}
