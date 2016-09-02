#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	char str[100010];
	char str1[100010],temp;

	int i,count=0,A=0,B=0;
	char j;
	
		gets(str);
		gets(str1);
	
	for(i=0;str[i]!='\0';i++){
		
		    if(str[i]!=str1[i])
             {
             	if(str[i]=='4'){
             		A++;
             	}
             	else
			        B++;
    
             }
		 
}
if(A>B){
	printf("%d\n",A);
}
else{
	printf("%d\n",count);
}
	
	
	return 0;
	
}
