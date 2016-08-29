#include<stdio.h>
int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int arr[n],sum=0,a,i;
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    a=sum%(n+1);
    if(n>3){
        if(a==0||a>n-4)printf("4");
        else printf("5");
    }
    else if(n>1){
        if(a==0)printf("3");
        else if(a==1)printf("4");
        else if(n==2&&a==2)printf("3");
        else if(n==3&&a==2)printf("4");
        else printf("4");
    }
    else {
        if(a==1)printf("3");
        else printf("2");
    }
    return 0;
}
