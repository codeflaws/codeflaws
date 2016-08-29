#include<stdio.h>

int main(int argc, char *argv[]){

    int n;
    int i,time;
    scanf("%d",&n);
    int a[n+1];
    for(i = 1; i < (n+1); i++){
        scanf("%d",&a[i]);
    }
    a[0] = 0;
    for(i = 1; i < (n+1); i++){
        if((a[i]-a[i-1])>15){
            time = a[i-1]+15;
            break;
        }
        else{
            if(i == 1 && a[i] <= 75){
                time = a[i]+15;
            }
            else{
                time = 90;
            }
        }

    }

    printf("%d",time);
    return 0;
}


