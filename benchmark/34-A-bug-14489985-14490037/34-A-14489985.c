#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[]){
    int n, min, i, j, a;

    scanf("%d",&n);

    int ara[n];

    for(i=0;i<n;i++){

        scanf("%d",&ara[i]);

    }

    min = abs(ara[0]-ara[1]);
    a=0;

    for(i=1;i<n;i++){

        if(min>abs(ara[i]-ara[(i+1)%n])){

            min = abs(ara[i]-ara[(i+1)%n]);
            a=i;

        }
    }

    printf("%d %d",a+1,a+2);

    return 0;
}
