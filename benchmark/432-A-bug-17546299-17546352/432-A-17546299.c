/*
 * main.c
 *
 *  Created on: Apr 27, 2016
 *      Author: chrollo
 */
#include<stdio.h>
int main(int argc, char *argv[])
{
int n,k,i,m,team=0;

scanf("%d%d",&n, &k);
	for(i=0;i<n;i++)
		{
		scanf("%d",&m);

		 if ((k>m)&&(5-m)>=k)
			team++;
		}
	printf("%d",team/3);
return 0;
}
