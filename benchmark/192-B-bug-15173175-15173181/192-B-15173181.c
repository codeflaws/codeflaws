#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j,num[2000],a[2000],min=2000,x,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]<min)
            {
                min=num[i];
                z=i;
            }
    }
    if(z==1 || z==n)
    {
        printf("%d\n",min);
        return 0;
    }
    //printf("%d\n",min);
    min=num[1],i=1;
    while(i<n)
    {
        if(num[i+1]>num[i+2])
        {
            if(min>num[i+1])
            {
                min=num[i+1];
            }
            i=i+1;
        }
        else{

            if(min>num[i+2])
            {
                min=num[i+2];
            }
            i=i+2;
        }
    }

    printf("%d\n",min);
    return 0;
}
