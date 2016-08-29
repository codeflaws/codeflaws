//	writeInt(i)-> power(10,9)->max limit
//	writelongInt(l)->power(10,9)->max limit
//	writelonglongInt(ll)->power(10,19)->max limit

#include<stdio.h>
#include<stdlib.h>


/***** start of scanning and printing part*****/
#define getcx getchar_unlocked
#define pc(x) putchar_unlocked(x);

int main(int argc, char *argv[])
{
	int c1,c2,c3,c4,n,m,bus[1001],trolley[1001],i,j,costbus[1001],costtrolley[1001],totalbuscost,totaltrolleycost,cost=0;
	scanf("%d%d%d%d%d%d",&c1,&c2,&c3,&c4,&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&bus[i]);
		costbus[i]=c1*bus[i]<c2?c1*bus[i]:c2;
//		printf("cost for bus %d is %d\n",i,costbus[i]);
		cost+=costbus[i];
	}
	totalbuscost=cost<c3?cost:c3;
//	printf("total cost for bus is:%d\n",totalbuscost);
	for(i=0;i<m;i++)
	{
		scanf("%d",&trolley[i]);
		costtrolley[i]=c1*trolley[i]<c2?c1*trolley[i]:c2;
//		printf("cost for trolley %d is %d\n",i,costtrolley[i]);
		cost+=costtrolley[i];
	}
	totaltrolleycost=cost<c3?cost:c3;
//	printf("total cost for trolley is:%d\n",totaltrolleycost);
	int total=totaltrolleycost+totalbuscost;
	cost=total<c4?total:c4;
	printf("%d\n",cost);
	return 0;
}
