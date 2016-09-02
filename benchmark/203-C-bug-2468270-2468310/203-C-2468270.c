#include <stdio.h>
#include <stdlib.h>


typedef struct my{
    int val;
    int id;
} person;
int cmp(const void* a, const void* b)
{
    person pa = *((person*) a);
    person pb = *((person*) b);
    return pa.val - pb.val;
}

person c[100005];
int q[100005];


int main(int argc, char *argv[])
{
    int n,d;
    scanf("%d %d", &n, &d);
    int a,b;
    scanf("%d %d", &a, &b);

    int i;
    int j = 0;

    int x, y;
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        c[i].val = a*x + b*y;
        c[i].id = i+1;
    }

    qsort(c,n,sizeof(c[0]),cmp);

    int sum = 0;
    i = 0;

    while ((i < n) &&(sum+c[i].val <= d))
    {
        sum += c[i].val;
        q[j++] = c[i++].id;

    }

    printf("%d\n", j);

    for (i = 0; i < j; i++)
        printf("%d ", q[i]);

    printf("\n");
    return 0;
}
