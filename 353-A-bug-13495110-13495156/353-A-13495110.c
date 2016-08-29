/*interface*/
#include<stdio.h>
/*interface implementation*/
/*client*/

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int odd_even=0;
    int even_odd=0;
    int odd_odd=0;
    int i;
    for(i=0; i<n; i++) {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x%2==1 && y%2==1) odd_odd++;
        if(x%2==0 && y%2==1) even_odd++;
        if(x%2==1 && y%2==0) odd_even++;
    }
    int change=0;
    //printf("upper_odd=%d,lower_odd=%d\n",upper_odd,lower_odd);

    if(odd_even%2==0 && even_odd%2==0) {
        if(odd_odd%2==0) {
            change=0;
        } else {
            if(n==1) {
                change=-1;
            } else {
                change=1;
            }
        }
    } else if(odd_even%2==1 && even_odd%2==1) {
        if(odd_odd%2==1) {
            change=0;
        } else {
            change=1;
        }
    } else if(odd_even%2==0 && even_odd%2==1) {
        change=-1;
    } else if(odd_even%2==1 && even_odd%2==0) {
        change=-1;
    }
    printf("%d\n",change);

    return 0;
}
