#include<stdio.h>
int main(int argc, char *argv[]){
int a,b,c;
double res;
int res_final;
scanf("%d%d%d",&a,&b,&c);
res=(a*c)/100.0;
if(res>(int)res)
    res++;
res_final=res;
printf("%d",abs(b-res_final));
return 0;
}
