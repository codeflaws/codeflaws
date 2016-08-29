#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,i,k,j,flag=0;
    scanf("%d %d",&a,&b);
    for(i=a+1;i<=50;i++)
    {
        flag=0;
       k=sqrt(i);
       for(j=2;j<=k;j++)
       {
           if(i%j==0)
           {
            flag=1;
            break;
           }
       }
       if(flag==0)
       {
          if(b==i)
          {
            printf("YES");
            break;
          }
          else
          {
            printf("NO");
            break;
          }
       }
    }
return 0;
}
