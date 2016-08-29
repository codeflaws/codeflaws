#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,a[105],i,big=0,small=101,j,k,temp1,temp2,sec;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>big)
        {
            big=a[i];
            temp1=i;
        }
    }
    for(j=n-1;j>0;j--)
    {
        if(a[j]<small)
        {
            small=a[j];
            k=j;
            temp2=n-j-1;
        }
    }
    sec=temp1+temp2;
    if(temp1<k)
        printf("%d",sec);
    else
        printf("%d",sec-1);
    return 0;
}
