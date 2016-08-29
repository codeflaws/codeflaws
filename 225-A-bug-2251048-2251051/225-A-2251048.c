#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,t,*a[2],x,i,j,k=0;
    scanf("%d%d",&n,&t);
    for(x=0;x<n;x++)
    {
        scanf("%d%d",&i,&j);
        if(i==t || i==7-t || j==t || j==7-t)
        k=1;
    }
    if(k==1)
    printf("NO");
    else
    printf("YES");
return 0;
}
