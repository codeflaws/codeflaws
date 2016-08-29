#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,m,s,i,j,t,r,l;
	int ara[100000];
	scanf("%d %d",&n,&m);
	for (i=0;i<n;i++){
		scanf("%d",&ara[i]);
	}
	l=0;
	for (i=0;i<n;i++){
		if (ara[i]<0){
			l=l+1;
		}
	}
	for (i=n-1;i>=0;i--){
		for (j=0;j<i;j++){
			if (ara[j]>ara[j+1]){
				t=ara[j];
				ara[j]=ara[j+1];
				ara[j+1]=t;
			}
		}
	}
	if (l<m){
	s=0;
	for (i=0;i<l;i++){
		r=ara[i]*(-1);
		s=s+r;
	}
	}
	else{
		s=0;
	for (i=0;i<l;i++){
		r=ara[i]*(-1);
		s=s+r;
	}
	}
	printf("%d",s);
	return 0;
}
