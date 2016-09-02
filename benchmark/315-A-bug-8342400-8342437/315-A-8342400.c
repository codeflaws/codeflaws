#include<stdio.h>
int main(int argc, char *argv[])
{
    int a[1005],b[1005],n,i,j,count=0;
    int v[1005]={0};
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }


    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if((a[i]==b[j]) && (i!=j))
            {
                v[j]=1;
            }
        }
    }

    for(i=0;i<n;i++) if(!v[i]) count++;

    printf("%d\n",count);

    return 0;
}
