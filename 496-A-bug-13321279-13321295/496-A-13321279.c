/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

int main(int argc, char *argv[])
{
    int n,array[MAX],max=0,dist,i,j,min=MAX;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&array[i]);

    for(i=1;i<(n-1);i++)
    {
        for(j=1;j<n;j++)
        {
            if(j==i)
                continue;
            if(j==i+1)
                dist=array[j]-array[j-2];
            else
                dist=array[j]-array[j-1];

            if(dist>max)
                max=dist;
        }

        if(min>max)
            min=max;
    }

    printf("%d\n",min);


    return 0;
}

