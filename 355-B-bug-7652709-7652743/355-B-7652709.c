#include<stdio.h>
int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}
int main(int argc, char *argv[])
{
	int c1,c2,c3,c4,cos,n,m,i;
	int b[1000];
	int tr[1000];
	scanf("%d%d%d%d",&c1,&c2,&c3,&c4);
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(i=0;i<m;i++)
		scanf("%d",&tr[i]);
	int s1=0,s2=0;
	for(i=0;i<n;i++)
	{
		s1=s1+min(b[i]*c1,c2);
	}
	for(i=0;i<m;i++)
	{
		s2=s2+min(tr[i]*c1,c2);
	}
	printf("%d\n",s2);
	if(s1>c3)
		s1=c3;
	if(s2>c3)
		s2=c3;
	if((s1+s2)>c4)
		cos=c4;
	else
		cos=s1+s2;
	printf("%d\n",cos);
	return 0; 
}


