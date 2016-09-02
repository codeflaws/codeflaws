#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(int argc, char *argv[])
{
    double l=0.0;
    int h=0,i=0,n=0,s=0;

scanf("%f",&n);
   for(i=1;i<= n;i++){

    for(h=i;h<=n;h++)
        {
    l=sqrt(pow(h,2)+pow(i,2));
    if (l==(int)l && l<=n)
    {
        s++;
    }
   
    }
   }
printf("%d",s);
return 0;
}
