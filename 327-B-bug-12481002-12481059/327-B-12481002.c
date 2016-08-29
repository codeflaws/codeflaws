#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
    int n, c = 0, i, j, flag = 0;

    scanf("%d", &n);

    for(i=n; c<n; i++){
        for(j=2; j<(int)sqrt(i)+1; j++){
            if(i%j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            c++;
            printf("%d ", i);
        }
        flag = 0;
    }
    printf("\n");

    return 0;
}
