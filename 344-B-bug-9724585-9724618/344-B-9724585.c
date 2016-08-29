#include<stdio.h>
int main(int argc, char *argv[])
{
	int a,b,c;
	int ab,bc,ca;
	scanf("%d%d%d",&a,&b,&c);
	if(0)
		printf("Impossible");
	else
	{
		int t;
		t=(a+b+c)/2;
		ab=t-c;
		bc=t-a;
		ca=t-b;
		if(((ab<=0)&&(bc<=0))||((ca<=0)&&(bc<=0))||((ab<=0)&&(ca<=0))||(ab<0)||(bc<0)||(ca<0))
			printf("Impossible");
		else
			printf("%d %d %d",ab,bc,ca);
	}
return 0;
}
