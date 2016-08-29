#include<stdio.h>
int main(int argc, char *argv[])
{
    int a[5],i,sum=0;

    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    if(sum%5==0) printf("%d",sum/5);

    else printf("-1");

    return 0;
}
