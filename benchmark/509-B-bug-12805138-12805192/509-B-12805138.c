#include<stdio.h>

int main(int argc, char *argv[])
{
    int n, k, i, a[100], max, min, j, c=1; 
    scanf("%d %d", &n, &k); 
    for(i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
        max = min = a[0];
        if(a[i]>=max) max = a[i];
        else if(a[i]<=min) min = a[i];
    }
    if(max - min > k) 
        printf("NO\n");
    else
    {
        printf("YES\n");
       for(i = 0; i<n; i++)
       {    c=1;
            for(j=0; j<a[i]; j++)
            {   if(c>k) c = 1;
                printf("%d ", c);
                c++;
            }
            printf("\n");
       }
    }
    return 0;
        
}