#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,rem,sum=1,count=1,num,total=0;
    scanf("%d",&num);
    rem=num-1;
    for(i=2; ;i++){
        sum=sum+i;
      if(rem>sum){
        count++;
        rem=rem-sum;
        total=total+sum;
      }
      else break;


    }
    printf("%d\n",count);



    return 0;
}
