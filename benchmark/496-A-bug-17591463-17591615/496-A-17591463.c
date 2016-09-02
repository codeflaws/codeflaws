#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]){
    int  n;

    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i] );
    }
    int min=999999999, max=0;
    for (int i=1; i<n-1; i++){
        for (int j=0; j<n-1; j++){
            if (j+1==i){
                if (max< arr[j+2]-arr[j]){
                    max=arr[j+2]-arr[j];
                    j++;
                }
            }else {
                if (max< arr[j+1]-arr[j]){
                    max= arr[j+1]-arr[j];
                }


            }

        }

        if (max<min){
            min=max;
        }
    }
    printf("%d",min);
    return 0;
}
