#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int n = 0,i = 0;
    int a=1,b=0,k,j=0;
    scanf("%d %d",&n,&k);
    if(n<k*2+1)printf("-1");
    else{
        for(i=1;i<=n;i++){
            for(j=1;j<=k;j++){
            if(i+j>n)  printf("%d %d\n",i,(i+j)%n);

            else  printf("%d %d\n",i,i+j);
            }

        }
    }
return 0;
}
