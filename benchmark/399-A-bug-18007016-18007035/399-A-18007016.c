#include<stdio.h>
int main(int argc, char *argv[])
{
	int i,n,p,k,n1,p1;
	scanf("%d %d %d",&n,&p,&k);
	if(p>k){
		n1=p;
		p1=k;
	}
	if(k>=p){
		n1=p;
		p1=k ;
	}
	for(i=n1-p1;i<=n1+p1;i++)
	{
		if(i>1 && i==n1-p1){
			printf("<< ");
		}
		
		if(i==p && (i>=1 && i<n)){
			printf("(%d) ",i);
		}
		else if(i!=p && (i>=1 && i<=n)){
			printf("%d ",i);
		}
		if(i==n){
			break;
		}
		if(i==n1+p1 && i!=n){
			printf(">>");
		}
	}
return 0;
}
