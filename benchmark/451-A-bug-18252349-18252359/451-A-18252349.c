#include <stdio.h>

int main(int argc, char *argv[]){
	int i,j,m,n,t;
	scanf("%d %d",&n,&m);
	t=m*n;
	for(i=0;t!=0;i++){
		t=t-(m+n-1);
		m--;
		n--;
		}
	if (i%2!= 0 ) 
        printf("Malvika");
	else 
        printf("Akshat");
	return 0;
}