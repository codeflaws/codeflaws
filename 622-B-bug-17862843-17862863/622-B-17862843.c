#include<stdio.h>
int main(int argc, char *argv[])
{
	int hh,mm,t1,t2,t,m,h;
	scanf("%d:%d",&hh,&mm);
	scanf("%d",&t2);
	t1=(hh*60)+mm;
	t=t1+t2;
	t=t%1440;
	h=t/60;
	m=t%60;
	printf("%d:%d",h,m);
	
return 0;
}
