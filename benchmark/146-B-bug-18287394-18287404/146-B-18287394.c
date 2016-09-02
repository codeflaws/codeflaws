#include<stdio.h>
int powe(int a,int b)
{
    if(b==0)
        return 1;
    else
        return a*powe(a,b-1);
}
int f(int x){
    int sum=0;
    int i=0;
    while(x!=0){
        if(x%10==4||x%10==7){
            sum=sum+powe(10,i)*(x%10);
            i++;
        }
        x=x/10;
    }
    return sum;
}
int main(int argc, char *argv[])
{
    int a,b,c,i,n,l,k;
    scanf("%d%d",&a,&b);
   int x=a+1;
   printf("%d ",f(72174994));
   while(f(x)!=b&&x<=177777)
    x++;
   printf("%d",x);
    return 0;
}