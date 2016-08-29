#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // your code goes here
    int i,n,m,k,c=0,f=0;
    
    scanf("%d%d%d",&n,&m,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        c++;
        else
        f++;
    }
    int x=0,y=0,z;

    x=c-m;
    if(f>k)
    y=f-k;
    printf("%d",x+y);
    return 0;
}
