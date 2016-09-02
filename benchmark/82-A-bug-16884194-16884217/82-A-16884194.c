#include<stdio.h>
int main(int argc, char *argv[])
{
    long long i,p,a,n,q,r,j,b,s,f;
    scanf("%i64d",&n);
    p=0;
    for(i=0;i>=0;i++)
    {
        a=5*pow(2,i);
        p=p+a;
        if(p>=n) break;
    }
    q=0;
    for(j=1;j<=i;j++)
    {
        b=5*pow(2,j-1);
        q=q+b;
    }
    r=n-q;
    s=a/5;
    if(r%s==0)
    {
        f=r/s;
    }
    if(r%s!=0)
    {
        f=(r/s)+1;
    }
    switch(f)
    {
    case 1:
        printf("Sheldon");
        break;
    case 2:
        printf("Leonard");
        break;
    case 3:
        printf("Penny");
        break;
    case 4:
        printf("Rajesh");
        break;
    case 5:
        printf("Howard");
        break;
    }
return 0;
}
