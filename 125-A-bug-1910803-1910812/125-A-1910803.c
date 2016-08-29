#include<stdio.h>
int main(int argc, char *argv[])
{
	int c,i,f;
	while(scanf("%d",&c)!=EOF)
	{
		f=c/36;
		i=(c-f*36)%3==2?(c-f*36)/3+1:(c-f*36)/3;
		if(i%12>=6||i%12==0){
			++f;i=0;
		}
		printf("%d %d\n",f,i);
	}
return 0;
}
