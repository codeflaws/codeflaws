#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,i,j,s,t,r,q;
	scanf("%d",&n);
	int ara[100000];
	for (i=0;i<n;i++){
		scanf("%d",&ara[i]);
	}
	printf("%d %d\n",ara[1]-ara[0],ara[n-1]-ara[0]);
	for (i=1;i<n-1;i++){
		s=ara[i+1]-ara[i];
		t=ara[i]-ara[i-1];
		r=ara[n-1]-ara[i];
		q=ara[i]-ara[0];
		if (s>t){
			printf("%d ",s);
		}
		else{
			printf("%d ",t);
		}
		if (r>q){
			printf("%d\n",r);
		}
		else{
			printf("%d\n",q);
		}
	}
	printf("%d %d",ara[n-1]-ara[n-2],ara[n-1]-ara[0]);
	return 0;
}
