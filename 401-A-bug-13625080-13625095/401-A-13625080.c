#include <stdio.h>


int main(int argc, char *argv[])
{
  int n,x,i,sum=0,f;
  scanf("%d %d",&n,&x);
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum+=a[i];
  }
  if(sum==0){
    printf("1");
  }
  if(sum<0){
    sum=sum*-1;
  }
  if(sum>0){
        if(sum<=x){
            printf("1");
        }
        else{
            f=sum/x;
            if(sum%x==0){
                printf("%d",f);
            }
            else{
                printf("%d",f+1);
            }
        }
  }
    return 0;
}
