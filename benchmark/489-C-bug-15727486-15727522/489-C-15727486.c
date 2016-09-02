#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int flag ;
int steps = 1000000;
int main(int argc, char *argv[]){
    // C. Given Length and Sum of Digits...
   int n , sum ,i;
    flag = 0;
    scanf("%d%d",&n,&sum);
    if(sum == 0) {
        printf("0 0\n");
        return 0;
    }
    if(sum == 1){

          printf("1");
          for(i=0 ; i < n-1 ; i++) printf("0");
          printf(" ");
          printf("1");
          for(i=0 ; i < n-1 ; i++) printf("0");
          printf("\n");
          return 0;

    }
    int min[n] , max[n];
    get_min(n,n,sum,min);
    if(flag == 1){
        get_max(n,n,sum,max);
    }
    else{
        printf("-1 -1\n");
        return 0;
    }
    for(i=n-1;i>=0;i--){
         printf("%d",min[i]);
    }
    printf(" ");
    for(i=n-1;i>=0;i--){
         printf("%d",max[i]);
    }
    printf("\n");




return 0;
}

int get_min(int n, int index , int sum , int *min){
    if(index == 0){
         flag = 1;
         return 0;
    }
    if(sum == 0 || sum > 9*index) return 0;
    int i = (index == n)? 1:0;
    for(i;i<=9;i++){
          if(sum - i <= 9*(index-1)){
            min[index-1] = i;
            get_min(n,index-1,sum-i,min);
            break;
          }
    }
    return 0;
}
int get_max(int n, int index , int sum , int *max){
    if(index == 0){
         flag = 1;
         return 0;
    }
    int i = 9;
    for(i;i>=0;i--){
          if(sum >= i && sum - i <= 9*(index-1)){
            max[index-1] = i;
            get_max(n,index-1,sum-i,max);
            break;
          }
    }
    return 0;
}
