#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j,x,c=0;
    scanf("%d %d",&n,&x);
    for(j=1;j<=n;j++){
        if(x!=1&&j==1) continue;
        if(x%j==0) c++;
    }printf("%d\n",c);
    return 0;
}
