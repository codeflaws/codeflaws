#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[]){

long long int i,j,k,l,m,n;
scanf("%lld",&i);

j=i*(i-1)*(i-2)*(i-3)*(i-4)/(1*2*3*4*5);
k=j*(i-5)/6;
l=k*(k-6)/7;

printf("%lld",j+k+l);

return 0;
}
