
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int Max(int a , int b){
   return (a>b)? a:b;
}

long long Abs(long long a){
    if(a <= 0) return 0;
    return a;
}

int main(int argc, char *argv[]){

    int b_num = 0 , s_num = 0 , c_num = 0 ;
    int b_valid , s_valid , c_valid ;
    int b_price , s_price , c_price ;
    long long r ;
    char c = getchar();
    while(c != '\n'){
         if(c == 'B') b_num ++;
         else if(c == 'S') s_num ++;
         else c_num ++;
         c = getchar();
    }
 //   printf("%d %d %d\n",b_num , s_num , c_num);
    scanf("%d%d%d",&b_valid,&s_valid,&c_valid);
    scanf("%d%d%d",&b_price,&s_price,&c_price);
    scanf("%lld",&r);
    int sand_price = (b_num*b_price)+(s_num*s_price)+(c_num*c_price);
   // printf("%d\n",sand_price);
    int can_form = 0;
    int a = 0 , b= 0 , d = 0;
   // int b_must_buy = 0 , s_must_buy = 0 , c_must_buy = 0;
    if(b_num != 0)  a = (int)ceil( 1.0*b_valid/b_num );
    if(s_num != 0)  b = (int)ceil( 1.0*s_valid/s_num );
    if(c_num != 0)  d = (int)ceil( 1.0*c_valid/c_num );

  //  printf("%d  %d  %d\n",a,b,d);
    can_form = Max(a,Max(b,d));
   // printf("%d\n",can_form);
    long long must_buy , max_num = 0;
    while(can_form >= 0){
            must_buy = 0;
         if(b_num != 0){
            must_buy += b_price*Abs(((can_form*b_num) - b_valid));
         }
         if(s_num != 0){
            must_buy += s_price*Abs(((can_form*s_num) - s_valid));

         }
         if(c_num != 0){
            must_buy += c_price*Abs(((can_form*c_num) - c_valid));
         }

         if(r >= must_buy){
            max_num = can_form ;
            r -= must_buy ;
            max_num += r/sand_price ;
            printf("%lld\n",max_num);
            return 0;
         }

       can_form --;
    }

    printf("0\n");
    return 0;
}
