#include<stdio.h>
#include<stdlib.h>
int n,a[111],S=0,P=0,T=10;
int min(const void* a,const void* b) {return *(int*)a-*(int*)b;}
int main(int argc, char *argv[]){
  for(scanf("%d",&n),S=0;S<n;S++) scanf("%d",a+S);
  for(qsort(a,n,sizeof(int),min),S=0;S<n && T+a[S]<=720;S++,P+=T-360>0?T-360:0) T+=a[S];
  printf("%d %d\n",S,P);
}
