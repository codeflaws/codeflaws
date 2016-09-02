#include<stdio.h>

int main(int argc, char *argv[]){
  int check,i,l,d,v,g,r,sum=0,roop;
  double t1,t2,t;
  scanf("%d %d %d %d %d",&l,&d,&v,&g,&r);
  roop=g+r;
  t1=(double)d/v;
  //printf("t1:%f\n",t1);
  i=1;
  while(sum<t1){
    if(i%2){
      sum+=g;
      if(sum>t1) check=2;
      else if(sum==t1) check=1;
    }else{
      sum+=r;
      if(sum>t1) check=1;
      else if(sum==t1) check=2;
    }
    i++;
  }
  if(check==1) t1=sum;
  //printf("t1:%f\n",t1);
  t2=((double)l-(double)d)/v;
  //printf("t2:%f\n",t2);
  t=t1+t2;
  printf("%f\n",t);
  return 0;
}
