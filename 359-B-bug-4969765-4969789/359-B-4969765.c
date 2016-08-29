#include<stdio.h>
int A[50001];
int main(int argc, char *argv[])
{
    int i,j,k,l;
    scanf("%d%d",&i,&j);
    printf("%d",1+j);
    A[1+j]=1;
    for(k=1;k<=2*i;k++)
    {
    //  printf("k=%d\n",k);
        if(A[k]==0)
        printf(" %d",k);
    }
    return 0;
}