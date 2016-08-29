#include<stdio.h>
#include<math.h>
#define MAX 1000000000
int sum_dig(unsigned long long  n)
{   int cnt=0;
    while(n>0)
    {
        cnt+=n%10;
        n/=10;
    }
    
    //printf("%d ",cnt);
    return cnt;
}

int main(int argc, char *argv[])
{
 int a,b,c,t,j,cnt=0;
scanf("%d %d %d",&a,&b,&c);
int i;
unsigned long long  s,c1,d,sum=0;unsigned long long arr[10005];
for(i=1;i<72;i++)
{   s=1;
    for(j=1;j<=a;j++)
    s*=i;   
    //if(i==10)printf(" %lld ",s);
    sum=b*s+c;
    if(sum>MAX)
    continue;
    c1=sum_dig(sum);
    if(i==c1)
    {
    arr[cnt++]=sum;
    }
}
if(cnt>0){
printf("%d\n",cnt);
for(i=0;i<cnt;i++)
printf("%llu ",arr[i]);
printf("\n");}
else printf("0\n");

return 0;
}