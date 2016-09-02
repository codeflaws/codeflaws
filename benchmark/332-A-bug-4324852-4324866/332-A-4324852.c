#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int n,m,i,j,t=0;
    char a[2000],q;
    scanf("%d",&n);
    scanf("%c",&q);
    gets(a);
    m=strlen(a);
    for(i=0;i<m;i=i+n)
    {
        if(a[i-1]==a[i-2] && a[i-1]==a[i-3])
        t++;
    }
    printf("%d",t);
    return 0;
}
