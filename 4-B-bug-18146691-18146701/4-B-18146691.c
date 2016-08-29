#include <stdio.h>
int main(int argc, char *argv[])
{
    int d, sumtime, maxtime[31], mintime[31], i, min=0, max=0;
    scanf("%d %d", &d, &sumtime);
    for(i=0; i<d; i++)
    {
        scanf("%d %d", &mintime[i], &maxtime[i]);
        min+=mintime[i];
        max+=maxtime[i];
    }
    if(sumtime>max)
        printf("NO\n");
    else if (sumtime==max)
    {
        printf("YES\n");
        for(i=0; i<d; i++)
            printf("%d ", maxtime[i]);
    }
    else if (sumtime==min)
    {
        printf("YES\n");
        for(i=0; i<d; i++)
            printf("%d ", mintime[i]);
    }
    else
    {
        printf("YES\n");
        int diff=sumtime-min;
        for(i=0; i<d; i++)
        {
            if(diff>=maxtime[i]-mintime[i])
            {
                printf("%d ", maxtime[i]);
                diff-=(maxtime[i]-mintime[i]);
            }
            else if(diff==0)
                printf("%d ", mintime[i]);
            else 
            {
                printf("%d ", mintime[i]+diff);
                diff-=diff;
            }
        }
    }
    return 0;
}