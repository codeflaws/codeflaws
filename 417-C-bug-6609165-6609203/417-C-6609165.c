#include <stdio.h>
int main(int argc, char *argv[]){
  int x,i,n,j,k;
  scanf("%d %d",&n,&x);
  if((n-1) % x !=0 || n==1){
    printf("-1");
  }
  else {
    printf("%d\n",n*x);
    for(i=1;i<n+1;i++){
    for(j=1;j<=x;j++){
        if(i+j<=n)
        printf("%d %d\n",i,i+j);
        else
            printf("%d %d\n",i,i+j-n);

                    }
                }
        }

    return 0;
}
