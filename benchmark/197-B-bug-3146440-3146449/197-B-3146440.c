#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
    if(a==0)return b;
    while(b!=0)
    {
        if(a>b)a-=b;
        else b-=a;
    }
    return a;
}
int main(int argc, char *argv[])
{
int n,m,i,c[200],d[200],e;
scanf("%d %d",&n,&m);
for(i=0;i<n+1;i++)scanf("%d",&c[i]);
for(i=0;i<m+1;i++)scanf("%d",&d[i]);
if(n>m)
{
if((c[0]>0&&d[0]>0)||(c[0]<0&&d[0]<0))printf("Infinity\n");
else printf("-Infinity\n");
}
else if(m>n) printf("0/1\n");
else
{   /*for(i=2;i<=c[0]&&i<=d[0];i++)
    {
        if(c[0]%i==0&&d[0]%i==0)
        {
            c[0]/=i;
            d[0]/=i;
            i--;
        }
    }*/
    e=gcd(abs(c[0]),abs(d[0]));
    printf("%d\n",e);
    c[0]/=e;
    d[0]/=e;
    if(d[0]>0)printf("%d/%d\n",c[0],d[0]);
    else if(c[0]<0&&d[0]<0)printf("%d/%d\n",-1*c[0],-1*d[0]);
else printf("%d/%d\n",-1*c[0],-1*d[0]);

}
return 0;
}