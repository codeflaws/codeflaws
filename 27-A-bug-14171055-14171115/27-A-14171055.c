#include<stdio.h>

void selectionSort(int a[], int n);
int main(int argc, char *argv[])
{
    int n, win[3001], i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &win[i]);
    }
    selectionSort(win, n);
    /*for(i=0; i<n; i++){
        printf("%d", win[i]);
    }*/
    for(i=0; i<n; i++){
        if(win[i]!=i+1){
            printf("%d", i+1);
            return 0;
        }
    }

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
