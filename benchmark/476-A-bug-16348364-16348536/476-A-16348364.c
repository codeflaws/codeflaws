#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int n,m,c1;
    scanf("%d %d",&n,&m);
    if(m>n)
        {
            printf("-1");
            return 0;
        }
    if(n%2==0&&(n/2)%m==0)
    {
       printf("%d",n/2);
       return 0;
    }
    c1=(n+2*m-1)/2;
    printf("%d",c1);
    return 0;
}
