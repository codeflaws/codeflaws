#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,h=0;
    int person[1000];
    int i=0;
    int value=0;
    
    scanf("%d %d",&n,&h);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&person[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(person[i] <= h)
        {
            value++;
        }
        else
            value = value +2;
    }
    
    printf("%d",value);
    
    
    return 0;
}