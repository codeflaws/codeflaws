#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int a[3][2],i,j,mx=0,ans=0,sum,s,k=0,ct1=0,ct2=0,sq;
    float area=0;
    for(i=0;i<3;i++)
    {
        scanf("%d%d",&a[i][0],&a[i][1]);
        area+=a[i][0]*a[i][1];
        if(a[i][0]>a[mx][k])
        {
            mx=i;k=0;
        }
        if(a[i][1]>a[mx][k])
        {
            mx=i;k=1;
        }

    }sq=sqrt(area);
    if(sq*sq==area)
    {
        s=sqrt(area);
        if(s==a[mx][k])
        {
            ans=1;
        }
    }
    if(ans==1)
    {
        for(i=0;i<3;i++)
        {
            if(a[mx][k]==a[i][0]||a[mx][k]==a[i][1])
                ct1++;
        }
        if(ct1==1)
        {
            sum=s-a[mx][(k+1)%2];
            if(sum==a[(mx+1)%3][0]||sum==a[(mx+1)%3][1])
                ct2++;
            if(sum==a[(mx+2)%3][0]||sum==a[(mx+2)%3][1])
                ct2++;
            if(ct2!=2)
                ans=0;
            else 
            {printf("%d\n",s);
            for(j=0;j<s;j++)
            {
                for(i=0;i<s;i++)
                {
                if(i<a[mx][(k+1)%2])
                printf("%c",65+mx);
                else 
                {
                    if(j<a[(mx+1)%3][0]+a[(mx+1)%3][1]-sum)
                    printf("%c",65+((mx+1)%3));
                    else 
                    printf("%c",65+((mx+2)%3));
                }
                }
                printf("\n");
            }
            }
        }
        else if(ct1==3)
        {
            sum=a[(mx)%3][0]+a[(mx)%3][1]+a[(mx+1)%3][0]+a[(mx+1)%3][1]+a[(mx+2)%3][0]+a[(mx+2)%3][1];
            if (sum!=4*s)
                ans=0;
            else
            {printf("%d\n",s);
                for(i=0;i<s;i++)
                {
                    for(j=0;j<s;j++)
                    {
                        if(i<a[mx][(k+1)%2])
                            printf("%c",65+mx);
                        else if(i<a[mx][(k+1)%2]+a[(mx+1)%3][0]+a[(mx+1)%3][1]-s)
                            printf("%c",65+((mx+1)%3));
                        else printf("%c",65+((mx+2)%3));
                    }
                    printf("\n");
                }
            }
        }
    }
    if(ans==0)
        printf("-1");
    return 0;
}