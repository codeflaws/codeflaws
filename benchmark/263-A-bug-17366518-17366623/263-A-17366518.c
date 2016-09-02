/*
 * main.c
 *
 *  Created on: Apr 17, 2016
 *      Author: chrollo
 */
#include<stdio.h>
int main(int argc, char *argv[])
{
int i,j;
	int mat[5][5]={{0,0}};
    for(i=0;i<5;i++)
    	for(j=0;j<5;j++)
    	{
    		scanf("%d",&mat[i][j]);
    	    if(mat[i][j]==1)

                printf("%d",((4-i)+(4-j)));

    	}
return 0;
}

