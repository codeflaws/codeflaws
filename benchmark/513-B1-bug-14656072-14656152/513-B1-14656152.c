#include<stdio.h>
#include<math.h>
int n , m ,sum = 0 , times = 0, a[8] = {0},b[8] = {0},c[9] = {0};
void check2(){
    int i , j , min , sum2 = 0;
    for(i = 0 ;i<n;i++){
            min = a[i];
        for( j = i ; j < n ; j++){
            if(a[j] < min) min = a[j];
            sum2 += min;
        }
    }

    if(sum2 > sum){
        sum = sum2;
        times = 1;
        for(i=0;i<n;i++){
            b[i] = a[i];
        }
    }
    else if(sum2 == sum){
         if(times < m){
            for(i=0;i<n;i++){
            b[i] = a[i];
        }
         }
         times ++;
    }
}
void check1(int i){
    if(i > n){
            check2();
            return;
    }
    int j;
   for(j=1;j<=n;j++){
       if(c[j] == 0){
         a[i-1] = j;
        c[j] = 1;
        check1(i+1);
        c[j] = 0;
       }
   }
}
int main(int argc, char *argv[]){
    int i ;
  scanf("%d %d",&n,&m);
  check1(1);
  for(i=0;i<n;i++){
    printf("%d%s",b[i],(i==n-1)?"\n":" ");
  }
 return 0;
}
