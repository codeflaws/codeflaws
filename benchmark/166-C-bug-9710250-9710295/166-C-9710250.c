#include <stdio.h>
#include <stdlib.h>
#define EPS pow(10,2)
#define SIZE 100000
#define true 1
#define false 0
int main(int argc, char *argv[]){
    int n,x;
    int Arr[SIZE];
    int i,j;
    int counter = 0;
    int temp;
    int toggle = false;
    for (i=0 ; i<SIZE ; i++){
        Arr[i] = 1000;
    }
    scanf("%d %d",&n,&x);
    for (i=0 ; i<n ; i++){
        scanf("%d",&Arr[i]);
    }

    for (i=0 ; i<n ; i++){
        if (Arr[i] == x ){
            break;
            toggle = true;
        }
    }
    if (toggle == false ){
        Arr[n] = x;
        n++;
        counter++;
    }
    for(i=0 ; i<n ; i++){
        for(j=i+1 ; j<n ; j++){
            if(Arr[i] > Arr[j]){
              temp = Arr[i];
              Arr[i] = Arr[j];
              Arr[j] = temp;
            }
        }
    }
    int Median = (n+1)/2;
    while (x != Arr[Median-1]){
        if(x < Arr[Median-1]){
            Arr[n] = x-1;
            n++;
        }
        else if (x > Arr[Median-1]){
            Arr[n] = x+1;
            n++;
        }
         for(i=0 ; i<n ; i++){
            for(j=i+1 ; j<n ; j++){
                if(Arr[i] > Arr[j]){
                  temp = Arr[i];
                  Arr[i] = Arr[j];
                  Arr[j] = temp;
                }
            }
        }
        counter++;
        Median = (n+1)/2;
    }
    printf("%d",counter);
    return 0;
}
