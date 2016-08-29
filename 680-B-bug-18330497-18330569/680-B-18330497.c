#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, a, i, j, k, crim_count=0;
    scanf("%d %d", &n, &a);
    int crim[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", & crim[i]);
    }
    if(crim[a-1])
    {
        crim_count++;
    }
    for(j=a-2,k=a; (crim[j] || crim[k]); j--,k++)
    {
        if( j>=0 && k<n && (crim[j]+crim[k])!=1)
        {
            crim_count+=(crim[j]+crim[k]);

        }
        else if( j>=0 && k>=n)
        {
            crim_count+=crim[j];

        }
        else if(j<0 && k<n)
        {
            crim_count+=crim[k];

        }
    }
    printf("%d", crim_count);

return 0;
}
