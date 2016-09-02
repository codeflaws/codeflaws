#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a,b,i,j;
  scanf("%d %d",&a,&b);
  int vet [a-1];
  for(i=0;i<a-1;i++){
    scanf("%d",&vet[i]);
  }
  for(i=0;i<a-1;i){
   if(i+vet[i]>a-2){printf("NO");break;}else{i=i+vet[i];
   if(i==b-1){printf("YES");break;}
   if(i>b){printf("NO");break;}
  }}
return 0;
}
