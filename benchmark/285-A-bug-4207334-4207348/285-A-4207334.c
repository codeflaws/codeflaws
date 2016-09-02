#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,k,i,c;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        c=n;
        for(i=1;i<n;i++)
        {
            if(k==0)
            {
                printf("%d ",i);
            }
            else
            {
                if((n-i+1)<=k)
                {
                   printf("%d ",c);c--;
                }
                else
                printf("%d ",i);
            }
        }
        if(k==0)
        printf("%d\n",i);
        else
        printf("%d\n",c);
    }
    return 0;
}
