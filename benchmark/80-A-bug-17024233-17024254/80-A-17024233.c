#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{  int x,y,i=0;
	int pr[20]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	scanf("%d %d",&x,&y);
	for(i=1;;i++)
		if(x==pr[i])
			break;

		if(y==pr[i+1])
			printf("YES");
		else 
			printf("NO");
	return 0;	
}


