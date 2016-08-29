#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,m,i,j=0,k,p;
    scanf("%d %d",&n,&m);
    p=(n<m)?n+1:m+1;
    printf("%d\n",p);
    k=m;
    for(i=0;i<p;i++){
        printf("%d %d\n",j,k);
        j++;k--;
    }
    return 0;
}
