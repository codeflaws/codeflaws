#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct A{
    int w;
    int v;
}a[101];

int n,k,i,j,m,x;

int compfunc(const void * a, const void *b){
    const struct A x = *(const struct A*)a;
    const struct A y = *(const struct A*)b;

    return y.v - x.v;
}

int main(int argc, char *argv[]){
    scanf("%d", &n);
    scanf("%d", &k);

    struct A xk[k][2];

    for(i=0; i<n; i++){
        a[i].w = i+1;
        scanf("%d", &a[i].v);
    }

    m=0;
    qsort(a,n, sizeof(a[0]), compfunc);
    x = a[0].v - a[n-1].v;

    for(i=0;i<k; i++){
        if(abs((a[0].v-1) - (a[n-1].v+1)) < x){
            x = a[0].v - a[n-1].v;
            xk[m][0] = a[0];
            xk[m][1] = a[1];
            a[0].v -= 1;
            a[n-1].v += 1;
            m+=1;
            qsort(a,n, sizeof(a[0]), compfunc);
            x = a[0].v - a[n-1].v;
        }
    }

    printf("%d %d\n", x, m);
    for(i=0; i<m; i++){
        printf("%d %d\n", xk[i][0].w, xk[i][1].w);
    }

}
