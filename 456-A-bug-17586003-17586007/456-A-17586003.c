#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]){
    int n ,c=0;

    int a,b;
    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%d %d", &a,&b);
        if (b>a){
            c=1;
        }
    }
    if (c==0){
        printf("Sad Alex");
    }else{
        printf("Happy Alex");
    }

    return 0;
}
