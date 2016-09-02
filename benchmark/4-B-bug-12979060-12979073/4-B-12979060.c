#include<stdio.h>
int main(int argc, char *argv[])
{
    int d,n,i,j,sum1=0,sum2=0;
    scanf("%d%d",&d,&n);
    int a[d],b[d];
    for(i=0;i<d;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        sum1+=a[i];
        sum2+=b[i];
    }
    if(n>sum2 && n<sum1)
    {   printf("NO"); return 0; }
    if(n==sum2)
    {
        printf("YES\n");
        for(i=0;i<d;i++)
            printf("%d\t",b[i]); return 0;
    }
    if(n==sum1)
    {
        printf("YES\n");
        for(i=0;i<d;i++)
            printf("%d\t",a[i]); return 0;
    }
    if(n>sum1 && n<sum2)
    {
        for(i=0;i<d;i++)
        {
            while(a[i]<b[i])
            {   a[i]++;
                sum1++;
                if(sum1==n)
                {   printf("YES\n");
                    for(j=0;j<d;j++)
                        printf("%d\t",a[j]); break;
                }
            }
        }
    }
    return 0;
}
