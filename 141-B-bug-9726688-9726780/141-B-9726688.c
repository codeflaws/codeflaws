#include<stdio.h>

int main(int argc, char *argv[]){
    long long s,x,y,d;
    double n,c;
    scanf("%lld%lld%lld",&s,&x,&y);
    c=s;
    n=c/2;
    d=((y-s)/(s))+((y-s)/(2*s));
    if(((y>0)&&(y<s))&&((x<n)&&(x>(-(n)))))
             printf("1\n");
    else if(y%s==0)
        printf("-1\n");
    else if((((y/s)%2!=0))&&((x<n)&&(x>(-(n)))))
        printf("%lld\n",d+2);
    else if((((y/s)%2==0))&&((x>0)&&(x<s)))
             printf("%lld\n",d+3);
    else if((((y/s)%2==0))&&((x<0)&&(x>-(s))))
             printf("%lld\n",d+2);
    else
         printf("-1\n");
    return 0;
}