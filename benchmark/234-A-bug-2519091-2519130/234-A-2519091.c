#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char st[110];
int i,l;

int main(int argc, char *argv[])
{
	scanf("%d",&l);
	scanf("%s",st+1);
	for(i=1;i<=l/2;i++){
		if(st[i]=='L'){
			printf("%d %d\n",i,i+l/2);
		}
		if(st[i]=='R'){
			printf("%d %d\n",i+l/2,i);
		}
	}
	return 0;
}
