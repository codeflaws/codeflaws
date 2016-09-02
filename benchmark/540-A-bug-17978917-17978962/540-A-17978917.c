#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int i,j,k,l,n,d=0,dif=0;
    char s[1010],st[1010];
    scanf("%d",&n);
    scanf("%s",&s);
    scanf("%s",&st);
    for(i=0;i<n;i++)
    {
        if(s[i]>st[i]) d=s[i]-st[i];
        else d=st[i]-s[i];
        if(d>5) d=10-d;
        dif+=d;
    }
     printf("dif=%d\n",dif);
    return 0;

}
