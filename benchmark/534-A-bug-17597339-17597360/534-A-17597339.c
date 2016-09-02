#include<stdio.h>
int main(int argc, char *argv[])
{
    int a[5000];
    int n,i;
    scanf("%d",&n);
    if(n>4){
    if(n%2==0)
    {
        printf("%d\n",n);
        int j=1;
        for(i=0;i<(n/2);i++)
        {
            a[i]=j;
            j+=2;
        }
        j=2;
        for(i=(n/2);i<n;i++)
        {
            a[i]=j;
            j+=2;
        }
            for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    }
    else{
            printf("%d\n",n);
            int j=1;
        for(i=0;i<(n/2)+1;i++)
        {
            a[i]=j;
            j+=2;
        }
        j=2;
    for(i=(n/2)+1;i<n;i++)
    {
        a[i]=j;
        j+=2;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    }}
    else if(n==3)
        printf("%d\n%d %d",n-1,n-2,n);
    else if(n==4)
        printf("%d\n%d %d %d %d",n,n-2,n,n-3,n-1);
    else if(n==1)
        printf("%d\n%d",n,n);
    else if(n==2)
        printf("%d",n=0);
    return 0;
}
