#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,pos1=0,pos2=0;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=0;
    for (i=0;i<n;i=i+1)
    {
        if (max<a[i])
        {
            max=a[i];
            pos1=i+1;
        }
    }
    int x=pos1-1;
    int min=1000;
    for (i=1;i<n;i++)
    {
        if (min>=a[i])
        {
            min=a[i];
            pos2=i+1;
        }
    }
    if (pos2<pos1)
        pos2=pos2+1;
    int y=n-pos2;
    int secs = x+y;
    printf("%d",secs);
    return 0;
}
