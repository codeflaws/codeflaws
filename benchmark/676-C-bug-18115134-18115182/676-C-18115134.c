#include<stdio.h>

int main(int argc, char *argv[])
{
char t='x',c;
int a[100010];
int b[100010];
a[0]=0;
b[0]=0;
int i,j=1,k=1;
int n,m;
scanf("%d %d\n",&n,&m);

for(i=1;i<=n;i++)
{
    scanf("%c",&c);
    if(c=='a'){a[j++]=i;}
    if(c=='b'){b[k++]=i;}
    t=c;
}
a[j]=n+1;
b[k]=n+1;

int max=0;
int x;


for(i=0;i+m+1<=j;i++)
{
    x=a[i+m+1]-a[i]-1;
    if(x>max){max=x;}
}
//printf("\n");

for(i=0;i+m+1<=k;i++)
{
    x=b[i+m+1]-b[i]-1;
    if(x>max){max=x;}
}
//printf("\n");

printf("%d",max);
return 0;
}
