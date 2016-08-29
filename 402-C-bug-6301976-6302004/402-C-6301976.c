#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int t,n,i,p,j,flg=0;
    scanf("%d",&t);
    while(t--)
    {
         scanf("%d %d",&n,&p);int a=2*n+p;
         int cnt=0;
         for(i=1;i<=n;i++)
         {
             for(j=i+1;j<=n;j++)
             {
                 cnt++;
                 printf("%d %d\n",i,j);
                 if(cnt==a)
                 {
                     flg=1;
                     break;
                 }
             }
             if(flg==1)
                break;
         }
    }
    return 0;
}
