#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char f[5]=".alal";
    char r[5]="miao.";
    char a[101],s[5],l[5],c,flus;
    int t;
    scanf("%d",&t);
    scanf("%c",&flus);
    while(t--)
    {
    int n,i,f1=0,r1=0;
    gets (a);
    n=strlen(a);
    for(i=0;i<5;i++)
    {
        s[i]=a[i];
        l[i]=a[n-1-i];
    }
    for(i=0;i<5;i++)
    {
        if(s[i]==r[i])
        continue;
        else
        break;
    }
    if(i==5)
    {
        r1=1;
        c=a[0];
    }
    for(i=0;i<5;i++)
    {
        if(l[i]==f[i])
        continue;
        else
        break;
    }
    if(i==5)
    {
        f1=1;
    }
    printf("%d %d %d\n",f1,r1,n);
    if(f1==1 && r1==0)
    printf("Freda's\n");
    else if(f1==0 && r1==1)
    printf("Rainbow's\n");
    else if(f1==1 && r1==1 && n==5)
    {
        if(c=='l')
        printf("Freda's\n");
        else
        printf("Rainbow's\n");
    }
    else
    printf("OMG>.< I don't know!\n");
    }
    return 0;
}
