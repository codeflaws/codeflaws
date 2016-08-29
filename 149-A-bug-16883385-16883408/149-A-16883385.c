//by ahmeterdem™
#include <stdio.h>
#include <string.h>
#include <math.h>
#define min(a,b) (a<b)?a:b
#define max(a,b) (a<b)?b:a
#define FOR (i,a,b) for(i=a;i<b;i++)
#define ROF(i,a,b) for(i=b;i>=0;i--)
int main(int argc, char *argv[]) {
	int i,arr[15],d,c,k,tut,top=0;
	scanf("%d",&k);
	if(k==0){
		printf("0");
		return 0;
	}
	for(i=0;i<12;i++)
	scanf("%d",&arr[i]);
	for (c = 0 ; c <11; c++)
  	{
		for (d = 0 ; d <12 - c - 1; d++)
		{
			if (arr[d] > arr[d+1])
			{
				tut=arr[d];
				arr[d]=arr[d+1];
				arr[d+1]=tut;
			}
		}
	}
for(i=11;i>=0;i--){
k-=arr[i];
top++;
if(k<=0){
	printf("%d",top);
return 0;}


}





	return 0 ;
}
