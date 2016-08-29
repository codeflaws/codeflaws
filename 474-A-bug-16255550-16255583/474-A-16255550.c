#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
 	char a[100]="qwertyuiopasdfghjkl;zxcvbnm,./",b[100],choice;
 	int i=0;
 	int j;
 	scanf(" %c",&choice);
 	scanf("%s",b);
 	for(i=0;b[i]!='\0';i++)
 	{
 		for(j=0;a[j]!=b[i];)
 		{
 		j++;
 		}
 		if(choice='R')
 		printf("%c",a[j-1]);
 		else
 		printf("%c",a[j+1]);
 	}	
 		
 		
 	return 0;
 }	
 	
