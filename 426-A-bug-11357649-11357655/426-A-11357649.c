#include<stdio.h>
int main(int argc, char *argv[])
{
    int N, S, i, a, max=0, sum=0;

    scanf("%d%d",&N,&S);
    for (i = 0; i < N; i++)
    {
        scanf("%d",&a);

        sum += a;
    }

    if((sum - max) > S)
        printf("NO");
    else printf("YES");
    return 0;
}
