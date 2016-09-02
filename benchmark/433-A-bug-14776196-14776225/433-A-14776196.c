#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,n,k1=0,k2=0,tmp,flag=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&tmp);
        if(tmp==100)
        k1++;
        else
        k2++;
    }
    
    if(k1%2!=0)
    flag=1;
    else
    {
        if(k1%2==0&&k2%2!=0&&k1==0)
        flag=1;
    }
    if(flag==0)
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
} 