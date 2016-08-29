#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value, extra;
} card;

int card_cmp(const card *lhs, const card *rhs)
{
    if(lhs -> extra != rhs -> extra)
        return rhs -> extra - lhs -> extra;
    return rhs -> value - rhs -> value;
}

card cards[1000];

int main(int argc, char *argv[])
{
    int n, i, a, b, counter, pts;

    scanf("%d", &n);

    for(i = 0; i < n; i ++)
        scanf("%d %d", &cards[i].value, &cards[i].extra);
    
    qsort(cards, n, sizeof(card), card_cmp);

    counter = 1;
    pts = 0;
    for(i = 0; i < n && counter; i ++)
    {
        pts += cards[i].value;
        counter += cards[i].extra - 1;
    }

    printf("%d\n", pts);

    return 0;
}
