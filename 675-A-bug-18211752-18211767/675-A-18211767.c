#include<stdio.h>
int main(int argc, char *argv[]) {
	int f=1,a,b,c,i,sum=0;
	scanf("%d %d %d",&a,&b,&c);
	if(c==0){ 
		if(a==b)
		printf("YES");
		else printf("NO");
		return 0;
}
	if((b-a)%c==0 && (b-a)/c>=0)
			printf("YES");
		else 
		printf("NO");
		}


		

