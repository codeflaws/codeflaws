#include<stdio.h>
#include<string.h>
int numbers[1000010],lucky[1000010],countlucky[1000010];
int n;
int bit(int x)
{
    return x&(-x);
}
void sum(int l)
{
    int i=l;
    while(i<=n)
    {
        lucky[i]+=countlucky[numbers[l]];
        i+=bit(i);
    }
}
int islucky(int number)
{
    int flag=0;
    while(number!=0)
    {
        if(number%10==7||number%10==4)
        number=number/10;
        else return 0;
        flag=1;
    }
    if(flag) return 1;
}
void update(int l,int d)
{
    int i=l;
    while(i<=n)
    {
        lucky[i]+=d;
        i+=bit(i);
    }
}
void add(int l,int r,int d)
{
    for(;l<=r;l++)
    {if(countlucky[numbers[l]+d]!=countlucky[numbers[l]])
    update(l,countlucky[numbers[l]+d]-countlucky[numbers[l]]);
    numbers[l]+=d;}
}
int count(int i)
{
    int Count=0;
    while(i>0)
    {
        Count+=lucky[i];
        i-=bit(i);
    }
    return Count;
}
int main(int argc, char *argv[])
{
    int m;
    int i;
    int l,r,d;
    char a[10];
    char coun[10]="count";
    char ad[10]="add";
    scanf("%d%d",&n,&m);
    for(i=0;i<10001;i++)
    {
        countlucky[i]=islucky(i);
    }
    memset(lucky,0,sizeof(lucky));
    for(i=1;i<=n;i++)
    {
        scanf("%d",&numbers[i]);
        sum(i);
    }
    for(i=0;i<m;i++)
    {
        scanf("%s",a);
        if(strcmp(a,coun)==0)
        {
            scanf("%d%d",&l,&r);
            printf("%d\n",count(r)-count(l-1));
        }
        else if(strcmp(a,ad)==0)
        {
            scanf("%d%d%d",&l,&r,&d);
            add(l,r,d);
        }
    }
    return 0;
}






