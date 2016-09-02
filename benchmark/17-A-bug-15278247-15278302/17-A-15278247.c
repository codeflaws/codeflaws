#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a,b,i,j,k,f,r;
	scanf("%d %d",&a,&b);
	int ara[1000];
	k=0;
	for (i=2;i<=a;i++){
		f=0;
		for (j=2;j<i;j++){
			if (i%j==0){
				f=1;
				break;
			}
		}
		if (f==0){
			ara[k]=i;
			k=k+1;
		}
		
	}
	r=0;
	for (i=0;i<k-1;i++){
		for (j=i+2;j<k;j++){
			if (ara[i]+ara[i+1]+1==ara[j]){
				r=r+1;
				break;
			}
		}
		
	}
	if (r==b){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
