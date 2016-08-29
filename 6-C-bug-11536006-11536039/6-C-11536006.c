#include<stdio.h>
int main(int argc, char *argv[])
{
    int n, i,j, p=0,q=0,sum1=0,sum2=0,sum=0;
    scanf("%d", &n);
    int a[100005];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    for (i = 0, j = 0; (sum1 + sum2)<sum; )
    {
        if (sum1 <= sum2 && (sum1+sum2+a[i])<=sum)
        {
            sum1 += a[i];
            p++;
            i++;
            //printf("sum1= %d\n", sum1);
        }
        if (sum2 <= sum1 && (sum1 + sum2+a[n-1-j])<=sum && i!=n-1-j)
        {
            sum2 += a[n - 1 - j];
            q++;
            j++;
            //printf("sum2= %d\n", sum2);
        }
        
    }
    printf("%d %d", p, q);
    return 0;
}
