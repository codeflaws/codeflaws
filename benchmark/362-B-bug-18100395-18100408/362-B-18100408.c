#include <stdio.h>

int cmpfunc (const void * a, const void * b)
{
    if( *(long long int*)a - *(long long int*)b < 0 )
        return -1;
    if( *(long long int*)a - *(long long int*)b > 0 )
        return 1;
    if( *(long long int*)a - *(long long int*)b == 0 )
        return 0;
}

int main(int argc, char *argv[])
{
    long long int n, m, a[3001], i, j;
    scanf("%lld %lld", &n, &m);
    for(i=0; i<m; i++)
        scanf("%lld", &a[i]);
    /*for(i=0; i<m; i++)
        printf("%lld ", a[i]);
    printf("\n");*/
    //qsort(a, m, sizeof(long long int), cmpfunc);
    for(i=0; i<m; i++)
    {
        int cou=0;
        for(j=0; j<m; j++)
        {
            //printf("a[i]=%lld a[j]=%lld\n", a[i], a[j]);
            if(a[j]==a[i]+1 || a[j]==a[i]+2 )
            {
                cou++;
                //printf("Entering if cou=%d\n", cou);
            }
        }
        //printf("here, cou=%d\n", cou);
        if(cou==2 || a[i]==1 || a[i]==n)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}