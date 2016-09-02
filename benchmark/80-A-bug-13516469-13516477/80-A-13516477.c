#include <stdio.h>

int main(int argc, char *argv[])
{
    int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int m,n,i;
    scanf("%d %d",&m,&n);
    for(i=0; i<14; i++)
    {
      if(prime[i]==m && prime[i+1]==n)
      {
          printf("YES");
          return 0;
      }
    }
    printf("NO");
    return 0;
}
