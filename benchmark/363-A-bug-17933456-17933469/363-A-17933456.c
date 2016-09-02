#include <stdio.h>
int main(int argc, char *argv[])
{
    long long int n;
    int k, j=0, a[10], i=0;
    scanf("%lld", &n);
    
    if(!n)
        printf("O-|-OOOO\n");
    
    while(n)
    {
        a[j]=n%10;
        if(a[j]>5)
        {
            printf("-O|");
            a[j]-=5;
        }
        else
        {
            printf("O-|");
        }
        //printf("a[%d]=%d\n", j, a[j]);
        for(i=0; i<a[j]; i++)
            printf("O");
            
        for(k=0; k<(5-(4-i)-i); k++)
            printf("-");
        
        for(k=0; k<(4-i); k++)
            printf("O");
            
        printf("\n");
        j++;
        n/=10;
    }
    
return 0;
}