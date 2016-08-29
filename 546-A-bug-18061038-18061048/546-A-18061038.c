#include <stdio.h>
int main(int argc, char *argv[])
{
        int k,w;
        long long int n,tot,chg;
      
        scanf("%d%lld%d",&k,&n,&w);

        tot = (w*(w+1)/2)*k; //total money
        chg = tot-n;
        printf("%d\n",chg);
        return 0;
} 