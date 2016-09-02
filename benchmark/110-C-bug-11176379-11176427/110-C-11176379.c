//Lucky sum of digits

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
int num,rem =1,quo1 = 0,quo2=0,i,n;
scanf("%d",&num);
if(num == 4 || num == 7)
printf("%d",num);
else{
   rem = num % 7 ;
   quo1 = num/7;
   for(i=0;i<= quo1;i++){
          if((rem+i*7) % 4 == 0){
            break;
          }
        }
        if(i == quo1){
         printf("-1");
         return 0;
        }
        quo2 = (rem+i*7)/4;
        n =i;
       for(i=0;i<quo2;i++){
                 printf("4");
        }

        for(i=0;i<(quo1-n);i++){
                   printf("7");
         }


 }

return 0;
}
