#include<stdio.h>
int main(int argc, char *argv[]){
int n,i;
long int k,sum=0;
scanf("%d%ld",&n,&k);
sum=(n-1)*n/2;
if(sum<k)
    printf("no solution");
else{
      for(i=1;i<=n;i++)
        printf("%d %d\n",1,i);
    }


return 0;
}
