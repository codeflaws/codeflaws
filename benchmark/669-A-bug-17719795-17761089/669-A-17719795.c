#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,p;
    scanf("%d",&n);
    if(n%3==0) {
        p=(n/3)*2;
    }
    if(n%3==1) {
        p=((n-1)/3)*2+1;
    }
    else if(n%3==2) {
        p=((n-2)/3)*2+1;
    }
    printf("The number of presents is:%d",p);
    return 0;
}
