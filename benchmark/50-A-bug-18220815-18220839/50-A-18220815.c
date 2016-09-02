#include <stdio.h>
#include <stdlib.h>
int m,n,area;
int main(int argc, char *argv[])
{
   scanf("%d %d",&m,&n);
   if (1<m&&m<=n&&n<16){
    area =m*n;
    printf("%d",area/2);
   }
    return 0;
}
