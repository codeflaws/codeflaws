#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  int fib[45]={0},stock[45]={0};
  int s,k,i,n,sum=0,num=0;
  scanf("%d %d",&s,&k);
  for(i=0;i==0||fib[i-1]<=s;i++){
    if(i<=1) fib[i]=1;
    else if(i<=k) fib[i]=sum;
    else{
      sum-=fib[i-k-1];
      fib[i]=sum;
    }
    //printf("%d %d\n",i,fib[i]);
    sum+=fib[i];
    //printf("sum:%d\n",sum);
  }
  //printf("i:%d\n",i);
  n=i-2;
  if(fib[i-2]==s) n--;
  //printf("n:%d %d\n",n,fib[n]);
  for(i=n;i>=0;i--){
    if(fib[i]<=s){
      stock[num++]=fib[i];
      s-=fib[i];
      if(s==0) break;
    }
  }
  printf("%d\n",num);
  for(i=num-1;i>=0;i--){
    printf("%d",stock[i]);
    putchar((i>0)?' ':'\n');
  }
  return 0;
}
