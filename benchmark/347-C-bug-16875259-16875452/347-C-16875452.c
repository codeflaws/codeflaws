#include<stdio.h>
int a[200];
int gcd(int x,int y){
 return y==0?x:gcd(y,x%y);
 }
int main(int argc, char *argv[]){

    int n, i;

    while(scanf("%d",&n)!=EOF){

          int max=0;

          for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]>max)
                max=a[i];
            }

          int m=a[0];

          for(i=1;i<n;i++){
            m=gcd(m,a[i]);
          }

          (max/m-n)&1?printf("Alice\n"):printf("Bob\n");
   }
    return 0;
}

