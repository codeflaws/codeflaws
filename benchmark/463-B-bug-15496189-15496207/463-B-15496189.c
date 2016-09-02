#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d",&n);

    int en=0,mn=0,c,d;

    int a[100005];

    a[0]=0;

    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=a[i]-a[i+1];
        d=en+c;

        if(d<0)
        {

           mn=mn-d;
           en=0;

        }
        else{
            en=en+c;
        }

    }
    printf("%d",mn);

    return 0;

}
