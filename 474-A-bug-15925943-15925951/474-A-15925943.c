#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]) 
{
	int i,j,u;
	char a,ars[30]={"qwertyuiopasdfghjkl;zxcvbnm,./"},arr[50];
	scanf("%c",&a);
	scanf("%s",arr);
	for(i=0;i<strlen(arr);i++){
		for(j=0;j<30;j++)
			if(arr[i]==ars[j])
				if(a=='R')
					printf("%c",ars[j-1]);
				else 
			printf("%c",ars[j+1]);
		
		
		}
	
return 0;
}
