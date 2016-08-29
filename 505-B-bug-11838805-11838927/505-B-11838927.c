#include<stdio.h>
int A[111][111][111],n,i,j,k,s,w; char H[111],Q[111];
void f(int x){

    if(x == j) { Q[k] = 1; return; }
    int w, s = 1;
    H[x] = 1;
    for(;s<=n;s++)
       for(w=0; A[x][s][w] ; w++)
          if(!H[s] && (!k || A[x][s][w] == k)){
             k = A[x][s][w];
             f(s);
             if(x == i) k=0;
          }
    H[x] = 0;
}
int main(int argc, char *argv[]){
   scanf("%d %d",&n,&s);
   while(s--){
      scanf("%d %d %d",&i,&j,&k);
      for(w=0; A[i][j][w] ; w++);
      A[i][j][w] = A[j][i][w] = k;
   }
   scanf("%d",&s);
   while(s--){
      scanf("%d %d",&i,&j); k=0;
      f(i);                 k=0;
      for(i=1;i<=111;i++) k += Q[i];
      printf("%d\n",k);
      memset(Q, 0, 111);
   }
   return 0;
}
