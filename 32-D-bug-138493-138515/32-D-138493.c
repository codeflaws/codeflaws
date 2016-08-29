#include <stdio.h>

#define min(a,b) ((a)<(b)?(a):(b))

char map[305][305]={'\0'};

int main(int argc, char *argv[])
{
 long n,m,k;
 long r;
 long i,j;
 
 scanf("%ld%ld%ld",&n,&m,&k);
 
 if(k>n*m*(min(n,m)+2)/2)
  {
   printf("-1\n");
   return 0;
  }
 
 for(r=1;r<=min(n,m)/2+1;r++)
   {
    for(i=1;i<=n;i++)
      for(j=1;j<=m;j++)
        if(i-r>=1&&i+r<=n&&j-r>=1&&j+r<=m&&map[i][j]=='*')
         {
          if(map[i-r][j]=='*'&&map[i+r][j]=='*'&&map[i][j+r]=='*'&&map[i][j-r]=='*')
           {
            k--;
            if(k==0)
             {
              printf("%ld %ld\n",i,j);
              printf("%ld %ld\n",i-r,j);
              printf("%ld %ld\n",i+r,j);
              printf("%ld %ld\n",i,j-r);
              printf("%ld %ld\n",i,j+r);
              return 0;
             }
           }
         }
   }
 
 printf("-1\n");
 
 return 0;
}
