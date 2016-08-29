#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,j,k,n,a[1000],max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        k=0;
        j=i;
        while(j>0 && a[j]>=a[j-1])
        {
            k++;
            j--;
        }
        j=i;
        while(j<n-1 && a[j]>=a[j+1])
        {
            k++;
            j++;
        }
        
        if(k+1>max)
        max=k+1;
    }
    printf("%d",max);
    return 0;
}