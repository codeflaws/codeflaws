#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,n,i,j;
    scanf("%d%d%d",&a,&b,&n);
    if((a*10+9)%b>9)
        printf("-1\n");
    else
    {
        printf("%d%d",a,9-(a*10+9)%b);
        while(--n)
            printf("0");
        printf("\n");
    }
    return 0;
}
