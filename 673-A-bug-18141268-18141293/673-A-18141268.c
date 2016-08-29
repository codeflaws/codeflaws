#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);

    for(i=0; i<=n; i++)
    {
        if(a[1]>15)
            printf("15");
        else if(a[i]>75)
        {
            printf("90");
            break;
        }
        else if(a[i+1]-a[i]>15)
        {
            printf("%d\n",a[i]+15);
            break;
        }
    }
return 0;
}
