#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,a[100],s,t,b,c,s1,i,s2,case1,case2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%d",&a[i]);
    }
    scanf("%d%d",&s,&t);
    if(s==t)
    {
        printf("0");
    }
    else if(s!=t)
    {
        if(s<t)
        {
            s1=s;
            s2=t;
        }
        else if(t<s)
        {
            s1=t;
            s2=s;
        }
        case1=0;
        for(i=s1;i<s2;i++)
        {
            case1=case1+a[i];
        }
        b=0;
        for(i=s2;i<=n;i++)
        {
            b=b+a[i];
        }
        c=0;
        for(i=1;i<s1;i++)
        {
            c=c+1;
        }
        case2=b+c;
        if(case1<=case2)
        {
            printf("%d",case1);
        }
        else if(case2<case1)
        {
            printf("%d",case2);
        }
    }
    return 0;

}
