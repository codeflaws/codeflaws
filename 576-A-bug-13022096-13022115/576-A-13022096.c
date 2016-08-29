#include<stdio.h>

int gcd(int a,int b)
{
    int tmp;
    while(a%b)
    {
        tmp=b;
        b=a%b;
        a=tmp;
    }
    return b;
}

int main(int argc, char *argv[])
{

    int n;
    int l,l1,l2,tmp;
    int num[1001],ans;

    for(l=2,num[1]=0;l<=1000;num[l]=1,l++);

    for(l=2;l<=1000;l++)
    {
        for(l1=2;l1<l;l1++)
        {
            if(l%l1==0 && gcd(l1,l/l1)==1){
                num[l]=0;
                break;
            }
        }
    }

    while(1==scanf("%d",&n))
    {
        for(l=2,ans=0;l<=n;l++)
        {
            if(num[l]) ans++;
        }
        printf("%d\n",ans);
        for(l=2;l<=n;l++)
        {
            if(num[l]) printf("%d ",l);
        }
        putchar('\n');
    }
}
