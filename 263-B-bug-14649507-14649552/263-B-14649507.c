#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b) {
    return *(int *)b-*(int *)a;
}
int main(int argc, char *argv[]) {
    int n,k;
    scanf("%d%d",&n,&k);
    if(k>n) {
        printf("-1\n");
        return 0;
    }
    //n个方块
    //包含k个方块
    int i;
    int *a=malloc(sizeof(a[0]));
    if(a==NULL) printf("a don't get memory\n");
    //得到每一个方块的坐标
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    //这里我从大到小排列，在第k个正方形上找一个
//点就可以满足该点包含k个正方形的要求。
//我选的点是ak，0
    qsort(a,n,sizeof(a[0]),cmp);

    printf("%d 0\n",a[k-1]);
    return 0;
}
