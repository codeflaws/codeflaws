#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,a,b,c,d,i[1000][2];
    scanf("%d",&n);
     for (a=0;a<n;a++)
     {
         for(b=0;b<2;b++)
            scanf("%d",&i[a][b]);
     }
     c=b=i[0][1];
     for (a=1;a<n;a++)
     {
         d=(c-i[a][0])+i[a][1];
         if (d>b)
         {
             b=d;
         }
         c=d;
     }
     printf("%d",b);
     return 0;
}
