#include<stdio.h>
int main(int argc, char *argv[])
{
    int a[101],i,j,n,prev = -1,count = 0;
    long long int ans = 1;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        {
            count++;
            if(prev == -1)
                prev = i;
            else
            {
                //printf("%d %d\n",prev,i);
                ans *= (i-prev);
                prev = i;
            }
        }
    }
    if(count == 1)
        printf("1");
    else if(count == 0)
        printf("0");
    else
        printf("%l64d",ans);
return 0;
}
