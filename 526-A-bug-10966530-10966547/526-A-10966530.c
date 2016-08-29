#include<stdio.h>
int main(int argc, char *argv[]){
	int flag,tmp,i,j,k,l,m,n;
	char c[1005];
	scanf("%d",&n);
	scanf(" %s",c);
	flag=0;
	for(i=n-1;i>=0;i--)
		c[i+1] = c[i];
	for(i=1;i<=n/4;i++){
		for(j=1;j+i<=n;j++){
			tmp = j;
			m = 0;
			while(c[tmp]=='*' && tmp<=n){
				tmp = tmp+i;
				m++;
			}
			if(m>=4)
				flag=1;
		}
	}
	if(flag==1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}
