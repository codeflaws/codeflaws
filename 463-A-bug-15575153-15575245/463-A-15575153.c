
#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,s,x,y,i,d=100,e,max=0,temp=1;
    scanf("%d %d",&n,&s);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if(s>x)
        {
            temp=0;
            e=d-y;
            if(max<e && y!=0)
                max=e;
        }
    }
    if(temp==0)
        printf("%d",max);
    else
        printf("-1");
return 0;
}
