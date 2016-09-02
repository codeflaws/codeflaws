#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 7

int min=6;

int hammingDistance(char* str1, char* str2)
{
    int hDistance = 0;
    int i; 
    for(i=0; i<LEN; i++)
        if(str1[i] != str2[i])
            hDistance++;
    return hDistance;
}

int main(int argc, char *argv[])
{
    int i,j,n,temp;
    scanf("%d", &n);
    if(n == 1)
    {
        printf("6\n");
    }
    else
    {
    	char str[n][LEN]; // strings
    	for(i=0; i < n; i++)
    	{
    	    scanf("%6s", str[i]);
    	}
    	for(i=0; i < n-1; i++)
    	{
    		for(j=i+1; j < n; j++)
    		{
        	   temp = hammingDistance(str[i], str[j]);
        	    if (temp < min)
        	        min = temp;
    	    }
    	}
    	printf("%d", ((min>1)?((min-1)/2):0));
    }
    return 0;
}
