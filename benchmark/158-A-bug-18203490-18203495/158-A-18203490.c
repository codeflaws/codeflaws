#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,n,c=0,k;
    int ara[30];

        scanf("%d%d",&n,&k);

            for(i=0;i<n;i++)
            {
                scanf("%d",&ara[i]);
            }

            for(i=0;i<n;i++)
            {
                    if(ara[i]>=ara[k-1] && ara[i]!=0)
                    {
                        c++;
                    }
            }

            printf("%d",c);

            return 0;
}
