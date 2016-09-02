#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 0 , n  ;
    long long t  , sum=0 , num  , max = 0 ;
    scanf("%d",&n);
    for (i=0 ; i<n ; i++){
        scanf("%lld",&t);
          sum+=t ;
          if (t>max)
            max=t ;
    }

    num = sum /(n-1);
      if (sum % (n-1) != 0)
        num+=1 ;
        if (max>num)
              num = max ;

    printf("%lld \n" , num);
    return 0;
}
