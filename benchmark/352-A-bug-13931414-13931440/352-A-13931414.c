#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,i,g,f,s,l,t;
	scanf("%d",&n);
	int ara[100000];
	for (i=0;i<n;i++){
		scanf("%d",&ara[i]);
	}
	g=0;
	f=0;
	for (i=0;i<n;i++){
		if (ara[i]==5){
			g=g+1;
		}
		else if(ara[i]==0){
			f=f+1;
		}
	}
	l=g/9;
	t=l*9;
	/*s=0;
	l=0;
	t=0;
	for (i=0;i<n;i++){
		s=s+ara[i];
		if (s%9==0 && s>0){
			l=l+1;
			t=t+9;
		}
	}
	printf("%d",);*/
	if (f!=0 && l==0){
		printf("0");
	}
	else if (f==0 && l==0){
		printf("-1");
	}
	else{
		for (i=0;i<t;i++){
			printf("5");
		}
		for (i=0;i<f;i++){
			printf("0");
		}
	}
		
	return 0;
}
