#include <stdio.h>

int main(int argc, char *argv[])
{
             int a,b,c,d,e,i,j,k,sum=0,sum1=1;
             scanf("%d %d",&a,&b);
             if(b==1)
             {
                          printf("-1");
                          return 0;
             }
             c=a/b;
             if(c<=2)
             {
                          printf("-1");
                          return 0;
             }
             for(i=1;i<=((c-1)*b);i++)
             {
                printf("%d ",sum1);
                if(i%(b-1)==0)
                    sum1++;


             }
             for(i=((c-1)*b)+1;i<=a;i++)
             {
                          printf("%d ",(sum%b)+1);
                          sum++;
             }

             return 0;
}