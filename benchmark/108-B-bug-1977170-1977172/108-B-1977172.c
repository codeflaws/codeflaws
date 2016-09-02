#include<stdlib.h>
#include<stdio.h>
typedef int L;
L a[100000];
int cmp(const void *a,const void *b)
{
    if(*(L*)a > *(L*)b)return 1;
    else return -1;
}
int main(int argc, char *argv[])
{
    L i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    qsort(a,n,sizeof(L),cmp);
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1]&&(a[i]<<1)>a[i+1])//square has atmost 2*a[i] bits
        {printf("YES");return 0;}
    }
    printf("NO");
    return 0;
}