#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,d,l,min,max,i,k,p;
    int aa[105],ii[105];
    scanf("%d%d%d",&n,&d,&l);
    for (i=0;i<n;i++)
        if (i%2==0)
            ii[i]=1;
        else
            ii[i]=l;
    for (i=0;i<n;i++)
        if (i%2==0)
            aa[i]=l;
        else
            aa[i]=1;
    if (n%2==0)
    {
        min=n/2-l*(n/2);
        max=l*n/2-n/2;
    }
    else
    {
        min=n/2+1-l*(n/2);
        max=l*(n/2+1)-n/2;
    }
    if (d<min||d>max)
        printf("-1\n");
    else if (d==min)
    {
        printf("%d",ii[0]);
        for (i=1;i<n;i++)
            printf(" %d",ii[i]);
        printf("\n");
    }
    else if (d==max)
    {
        printf("%d",aa[0]);
        for (i=1;i<n;i++)
            printf(" %d",aa[i]);
        printf("\n");
    }
    else
    {
        if (d-min>max-d)
        {
            k=max;p=0;
            for (i=0;i<n;i++)
            {
                if (i%2!=0)
                {
                    while (aa[i]>0&&aa[i]<l)
                    {
                        aa[i]++;k--;
                        if (k==d)
                        {
                            p=1;break;
                        }
                    }
                }
                if (p==1)
                    break;
            }
            printf("%d",aa[0]);
            for (i=1;i<n;i++)
                printf(" %d",aa[i]);
            printf("\n");
        }
        else
        {
            k=min;p=0;
            for (i=0;i<n;i++)
            {
                if (i%2==0)
                {
                    while (ii[i]<l)
                    {
                        ii[i]++;k++;
                        if (k==d)
                        {
                            p=1;break;
                        }
                    }
                }
                if (p==1)
                    break;
            }
            printf("%d",ii[0]);
            for (i=1;i<n;i++)
                printf(" %d",ii[i]);
            printf("\n");
        }
    }
    return 0;
}