#include <stdio.h>
char ar[1000000];
char er[1000000];
int main(int argc, char *argv[])
{
	int i;
	char k;
	for(i=1;;i++){
		scanf("%c",&k);
		if(k!='\n')
			ar[i]=k;
		else
			break;	
	}
	int a;
	a=i;
	for(i=1;;i++){
		scanf("%c",&k);
   		if(k!='\n')
			er[i]=k;
		else
			break;
	}
	if(i>a)
		a=i;
	for(i=1;i<a;i++){
		if(ar[i]!=er[i]||er[i]=='\0'||ar[i]=='\0'){
			printf("1");
			return 0;;
		}
	}
	for(i=1;i<a;i++)
		printf("%c",ar[i]);


	return 0;
}
