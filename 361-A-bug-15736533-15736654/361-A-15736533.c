#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,b,f,g,i,s,j;
	scanf("%d %d",&n,&b);
	int ara[100000];
	f=0;
	s=0;
	for (i=0;i<n;i++){
		ara[i]=1;
		s=s+ara[i];
		if (s==b){
			f=1;
			g=i;
			break;
		}
	}
	if (f==1){
		for (i=g+1;i<n;i++){
			ara[i]=0;
		}
	}
	else{
		ara[n-1]=b-s;
	}
	for (i=n;i<2*n;i++){
		ara[i]=ara[i-n];
	}
	for (i=0;i<n;i++){
		for (j=i;j<i+n;j++){
		printf("%d ",ara[j]);	
		}
		printf("\n");
	}
	return 0;
}
