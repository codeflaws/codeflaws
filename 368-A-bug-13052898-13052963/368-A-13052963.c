#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,d,m,i,s,temp,j;
	int ara[10000];
	scanf("%d %d",&n,&d);
	for (i=0;i<n;i++){
		scanf("%d",&ara[i]);
	}
	scanf("%d",&m);
	s=0;
	if (m==n){
		for (i=0;i<n;i++){
			s=s+ara[i];
		}
		printf("%d",s);
	}
	else if (m>n){
		for (i=0;i<n;i++){
		s=s+ara[i];
		}
		printf("%d",s-((m-n)*d));
	}
	else{
	for (i=0;i<n;i++){
		for (j=0;j<n-i;j++){
			if (ara[j]>ara[j+1]){
				temp=ara[j];
				ara[j]=ara[j+1];
				ara[j+1]=temp;
			}
		}
	}
	s=0;
	for (j=0;j<m;j++){
		s=s+ara[j+1];
	}
	printf("%d",s);
	}
	return 0;
}
