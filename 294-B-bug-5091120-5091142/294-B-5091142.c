#include <stdio.h>
#include <stdlib.h>
int cmp(const void * a,const void *b)
{
	int *c,*d;
	c=(int *)a;
	d=(int *)b;
	return (*d)-(*c);
}
int main(int argc, char *argv[])
{
	int p1[100],p2[100],sum=0,N,pos1=0,pos2=0,count,tmp,swidth=0;
	scanf("%d",&N);
	
	for(count=0;count < N;count++){
		scanf("%d",&tmp);
		if(tmp==1){
			scanf("%d",&p1[pos1]);
			pos1++;
			sum+=1;
		}
		else{
			scanf("%d",&p2[pos2]);
			pos2++;
			sum+=2;
		}
	}
	qsort(p1,pos1,sizeof(int),cmp);
	qsort(p2,pos2,sizeof(int),cmp);
	if(pos1!=0)
		pos1--;
	if(pos2!=0)
		pos2--;
	while(1){
		
		if(pos2>=0 && p2[pos2]+swidth <= sum -2 && ((pos1 >= 0&& p2[pos2] <= p1[pos1])
		||(pos1 >= 1&& p2[pos2] <= p1[pos1]+p1[pos1-1]))){
			swidth+=p2[pos2];
			sum-=2;
			pos2--;
		}
		else if(pos1>=0 && p1[pos1]+swidth<=sum-1){
			swidth+=p1[pos1];
			sum-=1;
			pos1--;
		}
		else
			break;
		
	}
	printf("%d",sum);
	return 0;
}
