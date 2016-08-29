#include<stdio.h>
int main(int argc, char *argv[])
{

    int n,m,i,x,flag=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0; i<32; i++)
    {
        x=powl(n,i);
        if(m==x)
        {
            printf("YES\n");
            printf("%d",i-1);
            flag=0;
            break;
        }
        else flag=1;

    }
    if(flag==1)
    {
        printf("NO");
    }
    return 0;
}
