#include<stdio.h>
int main(int argc, char *argv[]){
    int a,b,c;
    scanf("%d%d",&a,&b);
    int i;
    int cnt=0;
    for(i=1;i<=sqrt(b);i++){
      if((b/i)==(b/(b/i)) && (b/i)<=a){
           cnt++;}
     else if(b%i==0 && (b/i)<=a && (b/(b/i))<=a){
           cnt+=2;}
    }
    printf("%d",cnt);
return 0;
}
