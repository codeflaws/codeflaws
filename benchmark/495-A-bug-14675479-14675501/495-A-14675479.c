#include <stdio.h>
int main(int argc, char *argv[])
{
        int arr[10]={2,7,2,3,3,3,2,5,1,2},n;
        scanf("%d",&n);
        int a,b;
        a=arr[n%10];
        b=arr[n/10];
        printf("%d\n",a*b);
        return 0;
}