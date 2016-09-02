#include<stdio.h>

int main(int argc, char *argv[]){
    int n, i, j, aux, ans;

    int numbers[300000], position[300000];

    scanf("%d",&n);

    for(i=1; i<=n; i++)
     scanf("%d",&numbers[i]);

    for(i=1; i<=n; i++){
     scanf("%d",&aux);
     position[aux]=i;
     }

    for(i=2;i<=n;i++){
       if(position[numbers[i]]<position[numbers[i-1]])
         break;
     }

     ans = n-i+1;

     printf("%d\n",n);

  return 0;
}
