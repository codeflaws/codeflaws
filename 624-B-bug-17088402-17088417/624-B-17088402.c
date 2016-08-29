#include<stdio.h>

int main(int argc, char *argv[])
{
    long long int flag=0,n,i,j,temp,sum=0;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    do
    {
    flag=1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    long long int k;
    for(i=0;i<n;i++)
    {
        k=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]-=k;
                k++;
            }
            else
                break;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                {
                flag=0;
                break;
                }
        }
    }
    if(flag==1)
        break;
    }while(flag!=1);



    for(i=0;i<n;i++)
        sum+=a[i];

    printf("%lld\n",sum);
    return 0;
}
