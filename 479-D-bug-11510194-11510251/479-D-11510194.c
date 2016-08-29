#include <stdio.h>

int binary(int l, int r, int target, int arr[])
{
    if ( l > r )
        return -1;
    int middle = (l+r)>>1;
    if ( arr[middle] == target )
        return middle;
    else if ( arr[middle] > target )
        return binary(l, middle-1, target, arr);
    else
        return binary(middle+1, r, target, arr);
}

int main(int argc, char *argv[])
{
    int i;
    int n, l, x, y;
    int a[200005] = {0};
    scanf("%d%d%d%d", &n, &l, &x, &y);
    for ( i = 1; i <= n; i++ )
        scanf("%d", &a[i]);
    int flagx = 1, flagy = 1;
    for ( i = 0; i <= n; i++ )
    {
        if ( flagx )
        {
            if ( binary(i, n, a[i]+x, a) >= 0 )
                flagx = 0;
        }
        if ( flagy )
        {
            if ( binary(i, n, a[i]+y, a) >= 0 )
                flagy = 0;
        }
    }
    if ( flagx && flagy )
    {
        for ( i = 0; i <= n; i++ )
        {
            if ( binary(i, n, a[i]+x+y, a) >= 0 )
            {
                printf("1\n%d\n", a[i]+x);
                return 0;
            }
            if ( i < n && a[i+1]-a[i] == y-x )
            {
                if ( a[i]+y <= l )
                {
                    printf("1\n%d\n", a[i]+y);
                    return 0;
                }
                if ( a[i]-x >= 0 )
                {
                    printf("1\n%d\n", a[i]-x);
                    return 0;
                }
            }
        }
        printf("2\n%d %d\n", x, y);
    }
    else if ( flagx )
        printf("1\n%d\n", x);
    else if ( flagy )
        printf("1\n%d\n", y);
    else
        printf("0\n");
    return 0;
}
