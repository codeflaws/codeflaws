#include <stdio.h>
int main(int argc, char *argv[])
{
    long long int w,m,numdigits=1,temp1,temp2;
    int c[20],d[20],i,j,flag=0,q=0,r=0;
    scanf("%lld",&w);
    scanf("%lld",&m);
    temp1=w;
    temp2=m;
    while(m/w!=0)
    {
        numdigits++;
        w=w*temp1;
    }
    w=temp1;
    c[0]=0;
    for(i=numdigits;i>=1;i--)
    {
        c[i]=m%w;
        m=m/w;
    }
    m=temp2;
    /*for(i=0;i<=numdigits;i++)
        printf("%d ",c[i]);
    printf("\n");*/
    for(i=0;i<=numdigits;i++)
        d[i]=0;
    for(i=numdigits;i>=0;i--)
    {
        //printf("i:%d\n",i);
        flag=0;
        for(j=numdigits;j>=0;j--)
        {
            //printf("cj:%d\n",c[j]);
            if(c[j]==1 || c[j]==0)
            {
                flag=0;
            }
            else if(c[j]==w-1)
            {
                flag=1;
                d[j]=1;
                break;
            }
            else if(c[j]<w-1)
            {
                flag=2;
                //printf("flag is 2\n");
                break;
            }
        }
        //printf("flag is %d\n",flag);
        if(flag==2) 
        {
            printf("NO\n");
            break;
        }
        else if(flag==0)
        {
            printf("YES\n");
            break;
        }
        else 
        {
            for(j=numdigits;j>=0;j--)
            {
                q=(c[j]+d[j])/w;
                r=(c[j]+d[j])%w;
                c[j]=r;
                c[j-1]=c[j-1]+q;
            }
        }
        /*for(j=0;j<=numdigits;j++)
        printf("%d ",c[j]);
    printf("\n");
    for(j=0;j<=numdigits;j++)
        printf("%d ",d[j]);
    printf("\n");*/
    for(i=0;i<=numdigits;i++)
        d[i]=0;
    }
    return 0;
}
