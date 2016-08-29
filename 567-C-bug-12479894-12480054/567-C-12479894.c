#include <stdio.h>
#include <stdlib.h>

#define MAXN    200000
typedef struct {
    int val;
    int idx;
} Node_t;
Node_t A[MAXN];

int cmp(const void *a, const void *b)
{
    if((*(Node_t *)a).val == (*(Node_t *)b).val) {
        return (*(Node_t *)a).idx - (*(Node_t *)b).idx;
    }
    return (*(Node_t *)a).val - (*(Node_t *)b).val;
}

int BinarySearchFirst(Node_t *Array, int N, int val)
{
    int Left = 0;
    int Right = N - 1;
    while(Left < Right) {
        int Mid = (Left + Right) >> 1;
        if(Array[Mid].val < val) {
            Left = Mid + 1;
        } else {
            Right = Mid;
        }
    }
    if(Array[Left].val == val) {
        return Left;
    }
    return -1;
}

int BinarySearchLast(Node_t *Array, int N, int val)
{
    int Left = 0;
    int Right = N - 1;
    while(Left < Right - 1) {
        int Mid = (Left + Right) >> 1;
        if(Array[Mid].val <= val) {
            Left = Mid;
        } else {
            Right = Mid;
        }
    }
    if(Array[Right].val == val) {
        return Right;
    }
    if(Array[Left].val == val) {
        return Left;
    }
    return -1;
}

int BinarySearchLT(Node_t *Array, int N, int val, int idx)
{
    int Left = 0;
    int Right = N - 1;
    while(Left < Right - 1) {
        int Mid = (Left + Right) >> 1;
        if(Array[Mid].val < val) {
            Left = Mid;
        } else if(Array[Mid].val > val) {
            Right = Mid;
        } else {
            if(Array[Mid].idx < idx) {
                Left = Mid;
            } else {
                Right = Mid;
            }
        }
    }
    if(Array[Right].val == val && Array[Right].idx < idx) {
        return Right;
    }
    if(Array[Left].val == val && Array[Left].idx < idx) {
        return Left;
    }
    return -1;
}

int BinarySearchGT(Node_t *Array, int N, int val, int idx)
{
    int Left = 0;
    int Right = N - 1;
    while(Left < Right) {
        int Mid = (Left + Right) >> 1;
        if(Array[Mid].val < val) {
            Left = Mid + 1;
        } else if(Array[Mid].val > val) {
            Right = Mid;
        } else {
            if(Array[Mid].idx <= idx) {
                Left = Mid + 1;
            } else {
                Right = Mid;
            }
        }
    }
    if(Array[Left].val == val && Array[Left].idx > idx) {
        return Left;
    }
    return -1;
}

int main(int argc, char *argv[])
{
    int N, K, i;
    long long Ans = 0;
    scanf("%d %d", &N, &K);
    for(i = 0; i < N; ++i) {
        A[i].idx = i;
        scanf("%d", &A[i].val);
    }
    qsort(A, N, sizeof(Node_t), cmp);
    for(i = 0; i < N; ++i) {
        if(A[i].val % K != 0 || A[i].val >= 100000000 / K + 1) {
            continue;
        }
        int min, max;
        min = A[i].val / K;
        max = A[i].val * K;
        int a, b, c, d;
        a = BinarySearchFirst(A, N, min);
        b = BinarySearchLT(A, N, min, A[i].idx);
        c = BinarySearchGT(A, N, max, A[i].idx);
        d = BinarySearchLast(A, N, max);
        if(~a && ~b && ~c && ~d) {
            Ans += (long long)(b - a + 1) * (d - c + 1);
        }
    }
    printf("%I64d\n", Ans);
    return 0;
}
