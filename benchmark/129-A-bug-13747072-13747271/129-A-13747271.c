#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n,i,a,k=0,j=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    if(a%2==0){
        j++;
    }
    else{
        k++;
    }
  }
  if(k%2==1){
    printf("%d",k);
  }
  else{
    printf("%d",j);
  }
    return 0;
}
