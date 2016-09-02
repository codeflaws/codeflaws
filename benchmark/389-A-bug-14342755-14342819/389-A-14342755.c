#include <stdio.h>
int gcd(int a,int b)
{
    int temp,gcd;
    while (1){
        if(a==0){
            gcd = b;
            break;
        }
        else {
            temp = a;
            a=b%a;
            b=temp;
        }
    }
    //printf("%d\n",gcd);
    return gcd;

}

int main(int argc, char *argv[])
{
    int n,i,x,res;
    int s[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    x=0;
    for(i=0;i<(n-1);i++){
        x= gcd(x,s[i]);
    }

    res = x*n;
    printf("%d",res);
    return 0;
}
