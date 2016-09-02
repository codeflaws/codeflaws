#include<stdio.h>
int main(int argc, char *argv[])
{
     int r1,r2,c1,c2,d1,d2,i,j,k,l,c=0;
      scanf("%d %d %d %d %d %d",&r1,&r2,&c1,&c2,&d1,&d2);
    for(i=1;i<=9;i++)
    {
      for(j=1;j<=9;j++)
      {
        for(k=1;k<=9;k++)
        {
          for(l=1;l<=9;l++)
          {
               if(i+j==r1&&i+k==c1&&k+l==r2&&j+l==c2&&i+l==d1&&j+k==d2&&i!=k&&j!=l&&i!=l&&j!=k)
               {
                  printf("%d %d\n%d %d",i,j,k,l);
                 c=1;
                 break;
               }
          }
          if(c==1)
            break;
       }
       if(c==1)
         break;
    }
  if(c==1)
    break;
  }
     if(c==0)
       printf("-1");
     return 0;
}