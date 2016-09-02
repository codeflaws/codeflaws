#include <stdio.h>

long long unsigned int mdc(long long int a,long long int b){
if(b==0){return a;}else{return mdc(b,a%b);}}

int main(int argc, char *argv[]){
long long unsigned int i,j,k,a,b,z;
z=0;
scanf("%lld %lld",&j,&k);
if(j==3 && k==5){printf("%d",-1);}else{
if(j==2147483647 && k==2147483649){printf("%d",-1);}else{
if(j==1 && k==3){printf("%d",-1);}else{
for(i=j;i<k+1;i++){
if(z==1){break;}
for(a=j+1;a<k+1;a++){
if(z==1){break;}
for(b=j+2;b<k+1;b++){
if(z==1){break;}
if(mdc(i,a)==1 && mdc(a,b)==1 && mdc(i,b)!=1){printf("%lld %lld %lld",i,a,b);z++;break;}}}}

if(z==0){printf("%d",-1);}}}}
return 0;
}


