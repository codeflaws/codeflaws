#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,i,j=1,flag=0,t;
    scanf("%d",&n);
    t=(n*(n+1))/2;
    int a[505];
    for(i=0;i<502;i++)
    {
        a[i]=(j*(j+1))/2;
    }
    for(i=0;i<502;i++)
    {
        if(a[i]==t)
        {
            flag=1;
            break;
        }
    }
    if(flag==1) printf("YES");
    else printf("NO");
return 0;
}
