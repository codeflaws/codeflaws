#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j,x,c=0;
    scanf("%d %d",&n,&x);
    for(j=1;j<=n;j++){
        if(x%j==0&&x/j<=n) c++;
    }printf("%d\n",c);
    return 0;
}
