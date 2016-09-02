#include <stdio.h>
#include <stdlib.h>
int check(n)
{
    while(n)
    {
        if((n%10 != 4)&&(n%10 != 7))
            return 0;
        n/=10;
    }
    return 1;
}
int main(int argc, char *argv[])
{
    /*
    int arr[130] = {0};
    int flag[130] = {0};
    int i;
    char str[100001];
    scanf("%s", str);
    for(i=0; str[i]!=0; i++)
    {
        if(arr[(int)(str[i])] != 0)
        {
            arr[(int)(str[i])] = i-arr[(int)(str[i])];
            flag[(int)(str[i])] = 1;
        }
        else
            arr[(int)(str[i])] = i-arr[(int)(str[i])];
    }
    int flag2 = 0;
    for(i=80; i<130; i++)
    {
        if(flag[i]==1)
        {
            if(check(arr[i]))
                flag2 = 1;
            else
            {
                flag2 = 0;
                break;
            }
        }
    }
    for(i=80; i<130; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(i=80; i<130; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    if(flag2)
        printf("YES\n");
    else
        printf("NO\n");
    */
    int n, i;
    scanf("%d", &n);
    int m = n/4;
    for(i=0; i<m; i++)
    {
        printf("abcd");
    }
    if(n%4 == 1)
        printf("a\n");
    else if(n%4 == 2)
        printf("ab\n");
    else
        printf("abc\n");
    return 0;
}
