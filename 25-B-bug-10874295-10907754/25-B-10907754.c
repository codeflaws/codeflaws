#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
	int z,i,j,k,l,n,m;
	char c[1000];
	scanf("%d",&n);
	scanf(" %s",c);
	z = strlen(c);
	if(n%2==0){
		for(i=0;i<n-2;i=i+2)
			printf("%c%c-",c[i],c[i+1]);
		printf("%c%c\n",c[i],c[i+1]);
	}
	else if(n%3==0){
		for(i=0;i<n-3;i=i+3)
			printf("%c%c%c-",c[i],c[i+1],c[i+2]);
		printf("%c%c%c\n",c[i],c[i+1],c[i+2]);
	}
	else{
		for(i=0;i<n-3;i=i+2)
			printf("%c%c-",c[i],c[i+1]);
		printf("%c%c%c\n",c[i],c[i+1],c[i+2]);
	}
	return 0;
}
