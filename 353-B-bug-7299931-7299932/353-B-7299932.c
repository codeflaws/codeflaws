#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,yo=0;
    scanf("%d",&n);
    int i,count1=0,d1=0,d2=0;
    int * a = (int *)malloc(2*n*sizeof(int));
    int * b = (int *)malloc(2*n*sizeof(int));
    int *hash = (int *)malloc(90*sizeof(int));
    int *hash2= (int *)malloc(90*sizeof(int));
    for(i=0;i<2*n;++i)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<90;++i)
    {
        hash[i] = 0;
        hash2[i] = 0;
    }

    for(i=0;i<2*n;++i)
    {
        hash[a[i]-10]++;
    }

    for(i=0;i<90;++i)
    {
        if(hash[i] > 1)
        {
            if(hash[i]%2 == 1)
            {
                if(yo==0)
                {
                    hash2[i] = hash[i]/2;
                    count1 += hash[i]/2;
                    yo=1;
                    d1++;
                    if(hash[i] - hash[i]/2 != 0)
                        d2++;
                }
                else
                {
                    hash2[i] = hash[i]/2 + 1;
                    count1 += hash[i]/2 + 1;
                    yo=0;
                    d1++;
                    if(hash[i] - hash[i]/2 -1 != 0)
                        d2++;
                }
            }
            else
            {
                hash2[i] = hash[i]/2;
                count1 += hash[i]/2;
                d1++;
                if(hash[i] - hash[i]/2 != 0)
                        d2++;
            }

        }
    }

    for(i=0;i<90;++i)
    {
        if(hash[i] == 1)
        {
            if(count1 < n)
            {
                hash2[i] = 1;
                count1++;
                d1++;
            }
            else
            {
                d2++;
            }
        }
    }


    for(i=0;i<2*n;++i)
    {
        if(hash2[a[i]-10]!=0)
        {
            b[i] = 1;
            hash2[a[i]-10]--;
        }
        else
        {
            b[i] = 2;
        }
    }

    printf("%d \n",d1*d2);

    for(i=0;i<2*n;++i)
    {
        printf("%d ",b[i]);
    }

    return 0;

}
