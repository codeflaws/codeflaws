#include<stdio.h>

int main(int argc, char *argv[]){

    long long int i, n, t, c, m, pm, flag = 0, f = 0, r = 0;

    scanf("%d %d %d", &n, &t, &c);

    for(i=0; i<n; i++){
        scanf("%d", &m);
        if(m <= t) flag = 1;
        else flag = 0;

        if(flag == 1) f++;

        if(pm <= t && flag == 0){
            if(f >= c) r = r + (f-c+1);
            f = 0;
        }
        //printf("%d %d %d\n", i, flag, f);
        pm = m;
    }

    if(flag == 1 && f >= c) r = r + (f-c+1);

    printf("%d\n", r);

    return 0;
}
