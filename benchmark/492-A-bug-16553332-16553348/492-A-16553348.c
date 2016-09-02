#include<stdio.h>
int main(int argc, char *argv[])
{
    int x,y,z,i;
    scanf("%d",&x);
    int sum=0,count=1,sum1=0;
    int count1=0;
    for(i=1;i<=100;i++){
        sum=sum+i;
         sum1=sum1+sum;
         if(sum1>x){
            break;
         }
        count1++;

       // count=count1;
       // printf("%d ",sum1);
    }
   // if(x<sum1){
       // count1=count1-1;
   // }
    printf("%d\n",count1);
    return 0;
}
