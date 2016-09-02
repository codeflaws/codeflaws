#include <stdio.h>

int main(int argc, char *argv[]){
    int n,k;
    int x,mod,count,count2;
    scanf("%d %d", &n, &k);
    for (int i=0; i<n; i++){
        scanf("%d", &x);
        count =0;
        while (x){
          mod=x%10;
          if(mod==4 || mod==7)  {
            count++;
          }
          x/=10;
        }
        if (count<=k){
            count2++;
        }
    }
    printf("%d", count2);



    return 0;
}
