#include<stdio.h>
int main(int argc, char *argv[])
{

    int a1[1000],a2[1000],a3[10000];
    int i,j,k,l,n,c1=0,c2=0,c3=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
        {
            a1[c1++]=arr[i];
        }
        else if(arr[i]>0)
            a2[c2++]=arr[i];
        else
            a3[c3++]=arr[i];
    }
    if(c2==0)
    {
        a2[c2++]=a1[--c1];
        a2[c2++]=a1[--c1];
    }
    printf("%d ",c1);
    for(i=0;i<c1;i++)
        printf("%d ",a1[i]);
    printf("\n");
    printf("%d ",c2);
    for(i=0;i<c2;i++)
        printf("%d ",a2[i]);
    printf("\n");
    printf("%d ",c3);
    for(i=0;i<c3;i++)
        printf("%d ",a3[i]);
    return 0;
}
