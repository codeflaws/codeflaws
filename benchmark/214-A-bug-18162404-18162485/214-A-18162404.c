#include <stdio.h>
 
int main(int argc, char *argv[]) {
	int a,b=0,N,M,cont=0;
	scanf("%d %d",&N,&M);
	for(a=0;a<36;a++){
		if(a*a+b==N){
				if(b*b+a==M){
					cont=cont+1;
				}
		}
		if(a==34){
			a=0;b=b+1;
		}
		if(b==35){
			a=37;
		}
	}
	printf("%d\n",cont);
	return 0;
}