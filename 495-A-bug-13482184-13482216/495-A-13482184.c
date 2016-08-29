#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int n,i,p,q,ans;
    int x1,x2;
    scanf("%d",&n);
    int a[10];
    a[0]=2,a[1]=7,a[2]=2,a[3]=3,a[4]=3,a[5]=3,a[6]=2,a[7]=5,a[8]=1,a[9]=2;
    p=n%10;
    n=n/10;
    q=n%10;
    x1=a[p];
    x2=a[q];
    ans= x1*x2;
    printf("%d",ans);
    // your code goes here
    return 0;
}
