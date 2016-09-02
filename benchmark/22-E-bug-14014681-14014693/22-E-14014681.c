#include<stdio.h>
#define M 100000

int c1[M], vec[M], vec1[M], vec2[M];
int matriz[M][2], res;
int f(int );
int f(int j){
    vec[j] = 1;
    int r;
    if(vec[c1[j]] == 1){
        r = vec1[j] = c1[j];
    }
    else if(vec[c1[j]] == 0){
        r = vec1[j] = f(c1[j]);
    }
    else{
        r = vec1[j] = vec1[c1[j]];
    }
    vec[j] = 2;
    return r;
}
int main(int argc, char *argv[]){
    int memb, i, a, b;
    a = 0;
    b = 0;
    scanf("%d", &memb);
    for(i = 0; i < memb; ++i){
        scanf("%d", &c1[i]);
        --c1[i];
        vec2[c1[i]] = 1;
    }
    for(i = 0; i < memb; ++i){
        if(!vec2[i]){
            matriz[res][0] = i + 1;
            matriz[res][1] = f(i) + 1;
            ++res;
            ++a;
        }
    }
    for(i = 0; i < memb; ++i){
        if(!vec[i]){
            matriz[res][0] = i + 1;
            matriz[res][1] = i + 1;
            ++res;
            ++b;
            f(i);
        }
    }
    if(b == 1 && a == 0){
        printf("0");
    }
    printf("%d\n", res);
    if(res > 0){
        for(i = 1; i < res; ++i){
            printf("%d %d\n", matriz[i - 1][1], matriz[i][0]);
        }
        printf("%d %d", matriz[res - 1][1], matriz[0][0]);
    }
    return 0;
}


