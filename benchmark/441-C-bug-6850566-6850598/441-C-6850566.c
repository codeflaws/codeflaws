#include <stdio.h>

int main(int argc, char *argv[]){
	int N[3003],v,i=1,n,m,k,tot=0,j=1,p,carry=0,l=0;
	scanf("%d %d %d",&n,&m,&k);
	while(k>1){
		printf("%d ",2);
		if(!l&&j<m){
			printf("%d %d %d %d\n",i,j,i,j+1);
			if(j<m-1) j=j+2;
			else{
				j=j+1;
				i=i+1;
				l=1;
			}
		}
		else if(!l&&j==m){
			printf("%d %d %d %d\n",i,j,i+1,j);
			j=j-1;
			i=i+1;
			l=1;
		}
		else if(l&&j>1){
			printf("%d %d %d %d\n",i,j,i,j-1);
			if(j>2) j=j-2;
			else{
				j=j-1;
				i=i+1;
				l=0;
			}
		}
		else if(l&&j==1){
			printf("%d %d %d %d\n",i,j,i+1,j);
			j=j+1;
			i=i+1;
			l=0;
		}
		k--;
	}
	printf("%d ",(n*m-2*(k-1))/2);
	while(i<=n){
		if(i==n&&((j==m&&!l)||(j==1&&l))){
			printf("%d %d",i,j);
			++i;
		}
		else if(!l&&j<m){
			printf("%d %d %d %d ",i,j,i,j+1);
			if(j<m-1) j=j+2;
			else{
				j=j+1;
				i=i+1;
				l=1;
			}
		}
		else if(!l&&j==m){
			printf("%d %d %d %d ",i,j,i+1,j);
			j=j-1;
			i=i+1;
			l=1;
		}
		else if(l&&j>1){
			printf("%d %d %d %d ",i,j,i,j-1);
			if(j>2) j=j-2;
			else{
				j=j-1;
				i=i+1;
				l=0;
			}
		}
		else if(l&&j==1){
			printf("%d %d %d %d ",i,j,i+1,j);
			j=j+1;
			i=i+1;
			l=0;
		}
	}
	return 0;
}
