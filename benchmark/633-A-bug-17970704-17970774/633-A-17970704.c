#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,d,i,j ;
    scanf("%d %d %d",&a,&b,&c);
    for(i=0;i<=100;i++)
    {
        for(j=0;j<=100;j++)
        {
            d=i*a+j*b;
            if(d==c)
            {
                printf("Yes\n");
                return 0;
            }
            else
            {

            }
        }
    }
    printf("No\n");
    return 0;
}
