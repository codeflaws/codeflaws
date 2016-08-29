#include <stdio.h>

int main(int argc, char *argv[]){
       int n,i,t=0,a,p=1,k;
       long long mv=0;
       scanf("%d",&n);
       int mas[n+1];
       for(a=0;a<n;a++){
                        scanf("%d",&mas[a]);
                        }
       while(t<n){
                  t=pow(2,p);
                  p++;
                  }
       t=t/2;
       for(a=0;a<(n-1);a++){
                        mv=mv+mas[a];
                        k=mas[a];
                        while((n-a-t)<=0) t=t/2;
                        mas[a+t]=mas[a+t]+k;
                        printf("%d",mv);
                        }
       return 0;
       }
