#include <stdio.h>
#define MIN(i,j) i<j?i:j
int main(int argc, char *argv[])
{
	int i,j,w,h,a,b,min;
	double count=0;
	scanf("%d %d",&w,&h);
	min = MIN(w,h);
	for(a=2;a<=w;a+=2){
		for(b=2;b<=w;b+=2)
		{
			count+=(w-a+1)*(h-b+1);
		}
	}
	printf("%.0lf\n",count);

return 0;
}