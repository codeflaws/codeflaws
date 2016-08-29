
#include<stdio.h>
int n,k,a[105],b[105],c[105],i,temp,j,sum=0,l=0,count=0;
int main(int argc, char *argv[])
{
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]<b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(sum+b[i]>k)
        {
            break;
        }
        else if(sum+b[i]<=k)
        {
            sum=sum+b[i];
            c[l]=b[i];
            l++;
            count++;
        }
    }
    l--;
    printf("%d\n",count);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=l;j++)
        {
                if(c[j]==a[i])
                {
                    printf("%d ",i+1);
                    break;
                }
        }
    }
return 0;
}
