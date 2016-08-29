#include<stdio.h>
int main(int argc, char *argv[])
{
    int i, n, c = 0, flag = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] == i)
            c++;
    }
    if(c == n)
        printf("%d", &c);
    else
    {
        int x;
        for( i = 0;i<n;i++)
        {

            if(arr[i] != i && arr[arr[i]] == i)
            {
                c+=2; flag = 1;
                break;
            }
        }
        if(flag == 0)
            c+=1;
        printf("%d", c);
    }
return 0;
}
