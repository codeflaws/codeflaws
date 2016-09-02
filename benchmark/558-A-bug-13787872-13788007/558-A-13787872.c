#include <stdio.h>
#include <stdlib.h>
struct TREE {
    int position;
    int apple;
};

int cmp(const void*a,const void*b){
    return (*(int*)a)-(*(int*)b);
}

int main(int argc, char *argv[])
{
    int n,i,posside=0,negside=0;
    struct TREE tree[100000];

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d %d",&tree[i].position,&tree[i].apple);
        if(tree[i].position>0){
            posside++;
        }
        else{
            negside++;
        }
    }
    //printf("posside= %d\nnegside= %d\n",posside,negside);
    qsort(tree,n,sizeof(tree[0]),cmp);
    /*
    printf("------------------------\n");
    for(i=0;i<n;i++)
        printf("pos: %d   apple: %d\n",tree[i].position,tree[i].apple);
    printf("------------------------\n");
    */
    if(negside==0){
        printf("%d",tree[0].apple);
        return 0;
    }
    else if(posside==0){
        printf("%d",tree[n-1].apple);
        return 0;
    }


    int sum=0;

    if(posside>=negside){
        for(i=0;i<=2*negside;i++)
            sum = sum + tree[i].apple;
        printf("%d",sum);
    }
    else{
        for(i=0;i<=2*posside;i++)
            sum = sum + tree[i].apple;
        printf("%d",sum);
    }
    return 0;
}
