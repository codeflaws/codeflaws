#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n ,i;
    int arr[100] ={0};
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int  s, t;
    scanf("%d %d", &s, &t);
    if(s>t)
    {
        int temp = s;
        s = t;
        t = temp;
    }
    int d1=0, d2=0;
    if(t == s)
    {
        printf("0");
    }
    else
    {
        for(i=s-1; i<t-1; i++)
        {
            d1 += arr[i];
        }
        for(i=t; i!=s; i++)
        {
            if(i == n)
            {
                i--;
            }
            d2 += arr[i];
            if(i == n-1)
            {
                i= -1;
                if(s == 1)
                    break;
            }
        }
        if(d1 > d2)
            printf("%d",d2);
        else
            printf("%d",d1);
    }

    return 0;
}
