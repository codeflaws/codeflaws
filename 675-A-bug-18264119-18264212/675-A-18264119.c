#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[])
{
int a,b,c,f=0;
   scanf("%d %d %d",&a,&b,&c);
   int d=b-a;
   if((c!=0&&d*c>=0&&d%c==0)||(c==0&&a==b))
    printf("YES");
   else
    printf("NO");
    return 0;
}
