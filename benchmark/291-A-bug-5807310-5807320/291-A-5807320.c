#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int n,i,j,counter=0,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        f=0;
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j]&&a[i]!=0)
            {
                f++;
                counter++;
            }
        }
        if(f>1)
        {
            printf("-1");
            return 0;
        }
    }
    printf("%d",counter);

    return 0;
}