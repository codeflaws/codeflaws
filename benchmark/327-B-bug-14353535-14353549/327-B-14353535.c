#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,i,m;
    scanf("%d",&n);
    int a[n];
    a[0]=2;
    for(i=1;i<n;i++){
        m=a[i-1]+1;
        while(m%a[i-1]==0){
            m++;
        }
        a[i]=m;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
