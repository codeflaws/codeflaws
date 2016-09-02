#include<stdio.h>
int main(int argc, char *argv[])
{
      long int a,num;
           int i,f=0; 
              scanf("%ld",&a);
              for(i=1;i<=10;i++) {
                   num=a+i;     
                                
                     while(num) {
                           if(num%10==8||num%10==-8) {
                                  f=1;
                                  break;
                           }
                           num/=10;
                     }
                     if(f)
                           break;   
             }
              printf("%d",i);          
      return 0;      
}
