#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int n, x[105], m;
    scanf("%d",&n);
    scanf("%d",&m);
    int i, j, aux;
    for(i=1;i<=n;i++)
        scanf("%d",&x[i]);
    for(i=1;i<n;i++)
        for(j=1;j<n;j++)
            if(x[j]<x[j+1]){
                aux=x[j];
                x[j]=x[j+1];
                x[j+1]=aux;
            }
    j=1;
    while(m>x[i]){
        m-=x[j];
        j++;
    }
    printf("%d", j);
    return 0;
}
