#include<stdio.h>
int n, k, w, m, n, ans, a, b, c, i, j, max;
int ara[200];
int main(int argc, char *argv[])
{
    scanf("%d", &n);

    for(i = 0 ; i< n; i++){
        scanf("%d", &ara[i]);
    }
    ans = ara[0];
    max = 0;
    for(i = 0; i < n; i++){
        ans = ara[i];
        if(ans > max) max = ans;
        for(j = i + 1; j < n; j++){
            ans = ans ^ ara[j];
            if(ans > max) max = ans;
           // printf("%d ", ans);
        }

        if(ans > max) max = ans;
    }

    printf("%d", max);



    return 0;
}
