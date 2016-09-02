#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
   int n,i,s=1;
    scanf("%d",&n);
    for(i=1;i<n;i++)
        {
        s=(s+i)%n;
        printf("%d ",s);
        
    }
   
    return 0;
}
