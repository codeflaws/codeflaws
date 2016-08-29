#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,p,q,max_diff=0,diff,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
        diff=q-p;
        if(diff>0)
        {
            k++;
        }
    }
    printf("%d",k);
    return 0;
}
