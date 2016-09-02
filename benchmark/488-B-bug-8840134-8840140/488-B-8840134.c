#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double median(int *T)
{
    return ((double)T[1]+(double)T[2])/2;
}

double arithmetic(int *T)
{
    return ((double)T[0]+(double)T[1]+(double)T[2]+(double)T[3])/4;
}

double range(int *T)
{
    return ((double)T[3]-(double)T[0]);
}

int cmp(const void *a, const void *b)
{
    if (*(int*)a > *(int*)b)
        return 1;
    else if (*(int*)a == *(int*)b)
        return 0;
    else
        return -1;
}

int sort(int *T, int k)
{
    int echanger = 1,i;
    while (echanger == 1)
    {
        echanger = 0;
        for (i=0;i<3;++i)
        {
            if (T[i] > T[i+1])
            {
                if (k == i)
                    k = i+1;
                else if (k==(i+1))
                    k = i;
                int aux = T[i];
                T[i] = T[i+1];
                T[i+1] = aux;
                echanger = 1;
            }
        }
    }

    return k;
}

int main(int argc, char *argv[])
{
    int n;
    int T[6];
    memset(T,0,sizeof(T));
    scanf("%d", &n);

    //sscanf("3 132 44 126", "%d %d %d %d", &n, &T[0], &T[1], &T[2], &T[3]);

    int i,j,k,l;

    for (i=0;i<n;++i)
        scanf("%d", &T[i]);

    if (n == 1)
    {
        for (i = T[0];i <= 1000000;++i)
        {
            T[1] = i;
            for (j = T[1];j <= 1000000;++j)
            {
                T[2] = j;
                T[3] = T[1]+T[2]-T[0];
                double m = median(T);
                double a = arithmetic(T);
                double r = range(T);
                if ((m == a) && (m == r))
                {
                    printf("YES\n");
                    printf("%d\n%d\n%d\n",T[1],T[2],T[3]);
                    return 0;
                }
            }
        }
        printf("NO\n");
        return 0;
    }
    else if (n == 2)
    {
        qsort(T,2,sizeof(int),cmp);
        for (j = T[2];j <= 1000000;++j)
        {
            T[2] = j;
            T[3] = T[1]+T[2]-T[0];

            double m = median(T);
            double a = arithmetic(T);
            double r = range(T);
            if ((m == a) && (m == r))
            {
                printf("YES\n");
                printf("%d\n%d\n",T[2],T[3]);
                return 0;
            }
        }
        printf("NO\n");
        return 0;
    }
    else if (n == 3)
    {
        qsort(T,3,sizeof(int),cmp);
        int k = 3;

        for (i = 1;i <= 1000000;++i)
        {
            T[k] = i;
            k = sort(T,k);
            double m = median(T);
            double a = arithmetic(T);
            double r = range(T);
            if ((m == a) && (m == r))
            {
                printf("YES\n");
                printf("%d\n", T[k]);
                return 0;
            }
        }

        printf("NO\n");

        return 0;
    }
    else if (n == 4)
    {
        double m = median(T);
        double a = arithmetic(T);
        double r = range(T);

        if ((m == a) && (m == r))
            printf("YES\n");
        else
            printf("NO\n");

        return 0;
    }
    else
    {
        T[0] = 1;
        for (i = 1;i <= 1000;++i)
        {
            T[1] = i;
            for (j = T[1];j <= 1000;++j)
            {
                T[2] = j;
                T[3] = T[2]+T[2]-T[0];
                double m = median(T);
                double a = arithmetic(T);
                double r = range(T);
                if ((m == a) && (m == r))
                {
                    printf("YES\n");
                    printf("%d\n%d\n%d\n%d\n",T[0],T[1],T[2],T[3]);
                    return 0;
                }
            }
        }
        printf("NO\n");
        return 0;
    }
}
