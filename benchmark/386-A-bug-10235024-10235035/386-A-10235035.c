#include<stdio.h>
int main(int argc, char *argv[])
{
    int ar[2000],i,j,n,k,l,a,max;
    scanf("%d",&n);
    max=-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(max<ar[i]){
        a=i;
        max=ar[i];}

    }
    l=-1;
    for(i=0;i<n;i++)
    {
        if(a!=i&&l<ar[i])
        {
            l=ar[i];
        }
    }
    printf("%d %d\n",a+1,l);
    return 0;
}
