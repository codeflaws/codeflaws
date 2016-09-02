#include<stdio.h>
int main(int argc, char *argv[])
{
    int a[100],t=0,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if((a[i]-t)>15)
        {
            break;
        }
        else
        {
            t=a[i];
        }
    }
    if(t<90)
    printf("%d\n",t+15);
    else
        printf("90\n");
    return 0;
}
