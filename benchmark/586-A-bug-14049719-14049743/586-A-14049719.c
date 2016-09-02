#include <stdio.h>
#include <stdlib.h>

int At_Univer(int *table, int len)
{
    int i,k=0;
    if (*table==1)
        k=1;
    for(i=1;i<len-1;i++)
        if (table[i]==1)
	    k++;
	else
	    if ((table[i-1]==1)&&(table[i+1]==1))
	        k++;
    if (table[len-1]==1)
        k++;
    return k;
}


int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int *table=malloc(n*sizeof(n));
    int i,p;
    for(i=0;i<n;i++) {
        scanf("%d",&p);
	table[i]=p;
    }
    int k=At_Univer(table,n);
    printf("%d",k);
    return 0;
}    
