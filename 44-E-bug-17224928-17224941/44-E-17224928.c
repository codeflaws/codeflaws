#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int n,a,b,i,j,g,h,w,k,m;
	double f;
	scanf("%d %d %d",&n,&a,&b);
	char str[201];
	scanf("%s",str);
	w=strlen(str);
	
	if (n>w){
		printf("No solution");
	}
	if ((n*a)>w || (n*b)<w){
		printf("No solution");
	}
	else{
		f=(double)w/n;
		g=floor(f);
		h=ceil(f);
		//printf("%d ",h);
		if(w-g*(n-1)>b){
			k=0;
			for (i=0;i<w;i+=h){
				for (j=i;j<i+h;j++){
					printf("%c",str[j]);
				}
				printf("\n");
				if (k==n-1){
					break;
				}
			}
			for (m=j;m<w;m++){
				printf("%c",str[m]);
			}
		}
		else{
			k=0;
			for (i=0;i<w;i+=g){
				for (j=i;j<i+g;j++){
					printf("%c",str[j]);
				}
				printf("\n");
				k=k+1;
				if (k==n-1){
					break;
				}
			}
			for (m=j;m<w;m++){
				printf("%c",str[m]);
			}
		}
	}
	return 0;
}
