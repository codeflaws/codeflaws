#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef unsigned u;
u a[200000],b[200000],B[200000],C[200000],Ok[200000];
int F(const void*x,const void*y){return(*(u*)x>=*(u*)y)+(*(u*)x>*(u*)y)-1;}
int main(int argc, char *argv[])
{
	u n,m,p,i,j,k,x,y,z,M,E,*v;
	scanf("%u%u%u",&n,&m,&p);
	if(n/p<n){printf("0\n");return 0;}
	for(i=0;i<n;scanf("%u",a+i++));
	for(i=0;i<m;scanf("%u",b+i++));
	qsort(b,m,sizeof(u),F);
	for(B[M=0]=i=1;i<m;i++)
	{
		if(b[i]==b[M])B[M]++;
		else{B[++M]=1;b[M]=b[i];}
	}
	for(M++,k=y=0;k<p;k++)
	{
		if(k+p*(m-1)>=n)break;
		for(i=E=0,j=k;i<m;j+=p,i++)
		{
			v=(u*)bsearch(a+j,b,M,sizeof(u),F);
			if(v==NULL)E++;
			else
			{
				C[x=v-b]++;
				if(B[x]<C[x])E++;
			}
		}
		if(E==0){Ok[k]=1;y++;}
		for(i=k;j<n;j+=p)
		{
			v=(u*)bsearch(a+i,b,M,sizeof(u),F);
			if(v==NULL)E--;
			else
			{
				if(B[v-b]<C[v-b])E--;
				C[v-b]--;
			}
			v=(u*)bsearch(a+j,b,M,sizeof(u),F);
			if(v==NULL)E++;
			else
			{
				C[x=v-b]++;
				if(B[x]<C[x])E++;
			}
			i+=p;
			if(E==0){Ok[i]=1;y++;}
		}
		for(j=0;j<M;C[j++]=0);
	}
	printf("%u\n",y);
	for(i=z=0;i<n;)
	{
		if(Ok[i++])
		{
			if(z)putchar(' ');
			else z=1;
			printf("%u",i);
		}
	}
	putchar('\n');
	return 0;
}
