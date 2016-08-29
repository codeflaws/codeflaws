#include<stdio.h>
#include <ctype.h>
int i,d,upp,low;
char a[10000];
int main(int argc, char *argv[])
{
	scanf("%s",a);
	d=strlen(a);
	
	for(i=0;i<d;i++)
	{
		if(a[i]>=97&&a[i]<=122)
		{
		low++;
		}
		else if(a[i]>65&&a[i]<=90)
		{
		upp++;	
		}	
	}
	i=0;
	
	if(upp>low)
	while(a[i])
	   {
	      putchar (toupper(a[i]));
	      i++;
	   }

	else
	while(a[i])
	   {
	      putchar (tolower(a[i]));
	      i++;
	   }
return 0;
}
