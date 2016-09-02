#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int conteo1,conteo2,indice;
	int n,m,vector[6];
	
	char caracter;
	scanf("%d %d",&n,&m);
	for(conteo1=indice=0;conteo1<n;conteo1++)
	{
		for(conteo2=0;conteo2<m;conteo2++)
		{
			scanf("%c",&caracter);
			if(caracter=='*')
			{
				vector[indice++]=conteo1+1;
				vector[indice++]=conteo2+1;
			}
		}
	}
	
	if(vector[0]!=vector[2] && vector[0]!=vector[4])
	{
		printf("%d",vector[0]);
	}
	else if(vector[2]!=vector[0] && vector[2]!=vector[4])
	{
		printf("%d",vector[2]);
	}
	else if(vector[4]!=vector[0] && vector[4]!=vector[2])
	{
		printf("%d",vector[4]);
	}
	printf(" ");
	if(vector[1]!=vector[3] && vector[1]!=vector[5])
	{
		printf("%d",vector[1]);
	}
	else if(vector[3]!=vector[1] && vector[3]!=vector[5])
	{
		printf("%d",vector[3]);
	}
	else if(vector[5]!=vector[1] && vector[5]!=vector[3])
	{
		printf("%d",vector[5]);
	}
	
	
	
	return 0;
}