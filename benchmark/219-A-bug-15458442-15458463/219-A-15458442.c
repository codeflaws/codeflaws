#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]) {
	int x,i=0,j=0,t,u,f=1,o,snc[30]={0};
	char arr[1005]={0},p;
	scanf("%d %s",&x,arr);
	u=strlen(arr);
	if(x==1){
		printf("%c",arr[0]);return 0;
	}
	for(i=0;i<u;i++)
		snc[arr[i]-'a']++;

	for(i=0;i<26;i++)
		if(snc[i] && snc[i]%x){
			f=0;
			break;
		}

	if(f)
	  for(u=0;u<x;u++)
	    for(t=0;t<26;t++)
	   	for(i=0;i<snc[t]/x;i++)
		   printf("%c",t+'a');
	else
	   printf("-1");
	return 0;
}
