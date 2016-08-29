#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    int n, p, k;
    int page[100];
    int index = 0, i;
    scanf("%d%d%d", &n, &p, &k);
    for(i = p - k; i <= p + k ; i++)
    {
        if(i > 0 && i <= n)
            page[index++] = i;
    }
    short flag = 0;
    if(page[0] != 1)
    {
        printf("<<");
        flag = 1;
    }

    for(i = 0; i < index; i++)
    {
        if(flag)
            printf(" ");
        if(page[i] == p)
            printf("(%d)", page[i]);
        else
            printf("%d", page[i]);
    }

    if(page[index - 1] != n)
        printf(" >>");
    printf("\n");
    return 0;
}
