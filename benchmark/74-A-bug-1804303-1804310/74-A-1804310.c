#include<string.h>
#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,p,m,a,b,c,d,e;
    char s[21],s1[21];
    int l,t=-2501;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s%d%d%d%d%d%d%d",s,&p,&m,&a,&b,&c,&d,&e);
        l=p*100-m*50+a+b+c+d+e;
        if(l>t)
        {
            t=l;
            strcpy(s1,s);
        }
    }
    printf("%s\n",s1);
    return 0;
}        