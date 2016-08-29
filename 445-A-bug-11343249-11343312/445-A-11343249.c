#include<stdio.h>
int main(int argc, char *argv[]){
	int i,j,k,l,n,m,flag=0;
	char c[102][102];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf(" %s",c[i]);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(flag == 0 && c[i][j]=='.')
				c[i][j] = 'B';
			else if(flag == 1 && c[i][j] =='.')
				c[i][j] = 'W';
			flag = (flag+1)%2;
		}
	}
	for(i=0;i<n;i++)
		printf("%s\n",c[i]);
	return 0;
}
