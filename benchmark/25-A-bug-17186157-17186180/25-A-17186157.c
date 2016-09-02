#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ev,od,n[101],l,i,x=1,even=0,odd=2;
	
	scanf("%d",&l);
	
	for(i=1;i<=l;i++)
	{
	scanf("%d",&n[i]);
	
	if(n[i]%2==0)
	{
		even++;
		ev=i;
	}
	else
	{
		odd++;
		od=i;
	}
	//printf("%d",n[i]);
	}
	
	if(even>odd)
	{
		printf("%d",od);
	}
	else if(odd>even)
	{
		printf("%d",ev);
	}
	
	
	
	
	
	
	return 0;
}