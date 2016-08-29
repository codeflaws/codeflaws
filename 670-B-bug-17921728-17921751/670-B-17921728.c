#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int n, k, sum = 0, i = 0;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &arr[j]);
    }
    
    while(sum < k)
    {
        sum = sum + i;
        i++;
    }
    if (sum == k)
    {
        printf("%d\n", arr[i]);
    }
    else
    {
        sum = sum - (i-1);
        printf("%d\n", arr[k - sum -1]);
    }
    
return 0;
}