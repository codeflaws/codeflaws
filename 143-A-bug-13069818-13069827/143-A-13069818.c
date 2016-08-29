#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
  int r1,r2,c1,c2,d1,d2,i,j,k,l;
  scanf("%d %d %d %d %d %d",&r1,&r2,&c1,&c2,&d1,&d2);
  if(r1<1||r1>20||r2<1||r2>20||c1<1||c1>20||c2<1||c2>20||d1<1||d1>20||d2<1||d2>20)
  {
    printf("-1");
    exit(0);
  }
  for(i=1;i<=9;i++)
  {
    for(j=1;j<=9;j++)
    {
      for(k=1;k<=9;k++)
      {
        for(l=1;l<=9;l++)
        {
         if((i+j==r1)&&(k+l==r2)&&(i+k==c1)&&(j+l==c2)&&(i+l==d1)&&(j+k==d2)&&(i!=j)&&(i!=k)&&(i!=l)&&(j!=k)&&(j!=l)&&(k!=l))
         {
           printf("%d %d\n%d %d\n",i,j,k,l);
          //exit(0);
         }
        }
      }
    }
    }
printf("-1");
    
  return 0;
}