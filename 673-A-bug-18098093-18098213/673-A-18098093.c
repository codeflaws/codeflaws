#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[90], i, check, n, flag=-100;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            check = a[i];
            if(n==1)
                flag = a[i];
            if(check>15)
            {
                flag = 0;
                break;
            }
        }
        else
        {
            check = a[i]-a[i-1];
            if(check>15)
            {
                flag = a[i-1];
                break;
            }
        }
    }
    if(flag<0||flag>=75)
        printf("90\n");
    else
        printf("%d\n", flag+15);
return 0;
}
