#include<stdio.h>
int main(int argc, char *argv[])
{int n,x,a,b,i,c=0;
  scanf("%d%d",&n,&x);
  for(i=0;i<n;i++)
 { scanf("%d%d",&a,&b);
       if((a==x||a==7-x)||(b==x||b==7-x))
         {c=1;
         break;}
         }
         if(c==1)
         printf("NO)");
       else
         printf("YES");

        return 0;
        }

