#include <stdio.h>

int main(int argc, char *argv[]) {

    int a[5], i, j, temp, x, y, sum=0;

    for( i=0; i<5; i++) scanf("%d", &a[i]);

    for( i=0; i<5; i++) sum = sum + a[i];
    for( i=0; i<5; i++)
        for( j=0; j<5-(i+1); j++)
            if(a[j]<a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }

    if(a[0]==a[1] && a[0]==a[2] && a[0]==a[3] && a[0]==a[4]) sum = sum - (3*a[0]);
    else if(a[0]==a[1] && a[0]==a[2] && a[0]==a[3]) sum = sum -(3*a[0]);
    else if(a[1]==a[2] && a[1]==a[3] && a[0]==a[4]) sum = sum -(3*a[1]);
    else if(a[0]==a[1] && a[0]==a[2]) sum = sum -(3*a[0]);
    else if(a[2]==a[1] && a[3]==a[2]) sum = sum -(3*a[1]);
    else if(a[2]==a[3] && a[3]==a[4]) {
        if(a[0]==a[2]) {
            x=2*a[0];
            y=3*a[4];
            if(x>=y) sum = sum - x;
            else sum = sum - y;
        }
        else sum = sum - 3*a[4];
    }
    else if(a[0]==a[1]) sum = sum - 2*a[0];
    else if(a[1]==a[2]) sum = sum - 2*a[1];
    else if(a[2]==a[3]) sum = sum - 2*a[2];
    else if(a[3]==a[4]) sum = sum - 2*a[3];

    printf("%d\n", sum);

    return 0;
}
