#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,x,i,temp;
    scanf("%d %d",&n,&x);
    int a[n][2];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i][0],&a[i][1]);
        if(a[i][0]>a[i][1])
        {
            temp=a[i][0];
            a[i][0]=a[i][1];
            a[i][1]=temp;
        }
    }
    int sum=0,max=a[0][0],min=a[0][1];
    for(i=0;i<n;i++)
    {
        if(a[i][0]>max)
            max=a[i][0];
        if(a[i][1]<min)
            min=a[i][1];
    }
    if(max>min)
    {
        printf("-1");
        return 0;
    }
    else
    {
        if(x<min && x<max)
        {
            printf("%d",max-x);
            return 0;
        }
        if(x>min && x>max)
        {
            printf("%d",x-min);
            return 0;
        }
    }
    return 0;
}
