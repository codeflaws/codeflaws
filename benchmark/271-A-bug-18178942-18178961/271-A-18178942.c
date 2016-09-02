#include<stdio.h>
int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    for (int i=n;i<9000;i++)
    {
        n=n+1;
        int a=n/1000;
        int b=n/100%10;
        int c=n/10%10;
        int d=n%10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    printf("%d ",n);
return 0;
}
