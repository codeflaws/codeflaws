#include<stdio.h>

void selectionSort(int a[], int n);
int main(int argc, char *argv[])
{
    int i, n, x[110], mx, mn;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
   selectionSort(x, n);
    for(i=0; i<n-1; i++){
        if(x[i]!=x[i+1]){
            printf("%d\t", x[i+1]);
            break;
        }
    }
        return 0;
}
void selectionSort(int a[], int n){
    int min, idx, i, t, j;
    for(j=0; j<n-1; j++){
        idx = j;
        min = a[j];
        for(i=j+1; i<n; i++){
            if(min>a[i]){
                min = a[i];
                idx= i;
            }
        }
        t = a[j];
        a[j] = a[idx];
        a[idx] = t;

    }
}
