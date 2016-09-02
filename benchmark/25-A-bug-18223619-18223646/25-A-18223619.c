#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,i,a[99],temp1,temp2,x,y;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            {
                x++;
                temp1=i+1;

            }
        if (a[i]%2!=0)
            {   y++;
                temp2=i+1;
            }

    }
        if(x>y)
            printf("%d",temp2);
        else
            printf("%d",temp1);
    return 0;
}