#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,d,e,f,s,p,n,count=0;
    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&n);
    s=a+b+c;
    p=d+e+f;
    if(s>0)
    {
        count++;
        count+=s/5;
        if(s%5!=0)
            count++;
    }
    if(p>0)
    {
        count++;
        count+=p/10;
        if(p%10!=0)
            count++;
    }
    if(n>=count)
        printf("YES");
    else
        printf("NO");

    return 0;
}
