#include<stdio.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int a[105];
    int ba[105];
    int b=0,c=0;
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

int max=0;

    for(i=1;i<n-1;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                b=a[j+1]-a[j-1];
                if(b>max) max=b;
                j++;
            }
            else{
                b=a[j]-a[j-1];
                if(b>max) max=b;
            }

        }
        ba[i]=max;



        }

        max=10005;
i--;
    for(i;i>=1;i--)
    {
        if(ba[i]<max) max=ba[i];
    }

    printf("%d",max);

    return 0;
}
