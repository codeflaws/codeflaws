    #include <stdio.h>
//#include <conio.h>

void sort(int a[], int b[], int L, int R)
{
    int i = L, j = R, tmp;
    int mid = b[(L + R) / 2];
    while (i <= j)
    {
        while (b[i] < mid)
            i++;
        while (b[j]>mid)
            j--;
        if (i <= j)
        {
            tmp = b[i]; b[i] = b[j]; b[j] = tmp;
            tmp = a[i]; a[i] = a[j]; a[j] = tmp;
            i++; j--;
        }
    }
    if (i < R)
        sort(a,b, i, R);
    if (j>L)
        sort(a, b, L, j);

}

void luot(int a[], int b[], int *S, int *turn, int *n)
{
    int i = *n;
    while (i >= 1)
    {
        if (b[i] >= 1)
        {
            *turn = *turn - 1 + b[i];
            *S = *S + a[i];
            i--;
            n--;
        }
        else
            break;
    }
}


int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    int a[1001], b[1001];
    int i;
    for (i = 1; i <= n; i++)
        scanf("%d %d", &a[i], &b[i]);
    sort(a,b,1,n);
    int turn = 1, S = 0;
    luot(a, b, &S, &turn, &n);
    sort(b, a, 1, n);
    i = n;
    while (turn > 0 && i>=1)
    {
        S = S + a[i];
        i--;
        turn--;
    }
    printf("%d", S);

    return 0;

}
