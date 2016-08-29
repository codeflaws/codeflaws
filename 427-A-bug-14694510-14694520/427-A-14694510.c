#include<stdio.h>
int main(int argc, char *argv[])
{
    int a[100010],i,c=0,d=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>1)
        {
            c=c+a[i];
        }
        else if(a[i]==-1)
        {
            if(c>0)
            {
                c--;
            }
            else if(c==0)
            {
                d++;
            }
        }
    }
    printf("%d",d);
    return 0;
}
