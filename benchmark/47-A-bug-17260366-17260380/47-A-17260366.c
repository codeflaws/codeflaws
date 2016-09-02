#include<stdio.h>
int main(int argc, char *argv[])
{
        int a,i,k,flag=0;
        scanf("%d",&a);
        for(i=1;i<=32;i++)
        {
                k=(i*(i+1))/2;
                if(k==a)
                {
                        printf("YES");
                        flag=1;
                        break;
                }

        }
        if(flag==0)
        {
                printf("N0");
        }
return 0;
}
