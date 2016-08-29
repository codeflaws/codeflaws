#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < n-1; i++){
        int min = i;
        for (j = i+1; j < n; j++){
            if (arr[min] > arr[j]) min = i;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[n-1]);
    return 0;
}
