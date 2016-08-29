#include<stdio.h>
int A[11111],Q[11111],n,j,k,s;
int main(int argc, char *argv[]){
   scanf("%d %d",&n,&s);
   while(s--){
      scanf("%d %d",&j,&k);
      A[j]++; A[k]++;
   }
   for(j=1;j<=n;j++) Q[A[j]]++;

   if(Q[2] == n-2 && Q[1] == 2)        printf("bus ");
   else if(Q[n-1] == 1 && Q[1] == n-1) printf("star ");
   else if(Q[2] == n)                  printf("ring ");
   else                                printf("unknown ");

   printf("topology");
   return 0;
}
