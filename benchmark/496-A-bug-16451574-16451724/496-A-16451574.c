#include<stdio.h>
#include<math.h>
int x[101];
int main(int argc, char *argv[])
{
    int n,i,c=0,m=1001;
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        scanf("%d",&x[i]);
        if(i>=2&&(x[i]-x[i-1]>c))
            c=x[i]-x[i-1];
        if(i>=3&&(x[i]-x[i-2]<m))
            m=x[i]-x[i-2];
    }
    if(m>c)
        printf("%d",c);
    else
        printf("%d",m);
    return 0;
}
