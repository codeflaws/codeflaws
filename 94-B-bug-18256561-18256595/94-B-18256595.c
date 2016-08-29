#include <stdio.h>
int main(int argc, char *argv[])
{
    int n, i, a[6]={0}, x, y;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);
        a[x]++;
        a[y]++;
        if(a[x]==3 || a[y]==3)
        {
            printf("WIN\n");
            return 0;
        }
    }
    for(i=1; i<=5; i++)
        if(a[i]<=1)
        {
            printf("WIN\n");
            return 0;
        }
    printf("FAIL\n");
    return 0;
}