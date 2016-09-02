#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,i,j,k,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
                if(i==a[i])
                    c++;
               // printf("%d ",c);
            }
    for(i=0;i<n;i++)
    {
        if(i!=a[i] && a[a[i]]==i)
        {printf("%d",(c+2));return 0;}

    }
    printf("%d",(c+1));
    return 0;
}
