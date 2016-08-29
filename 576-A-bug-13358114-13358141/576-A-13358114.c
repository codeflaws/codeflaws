#include <stdio.h>
#include <stdlib.h>
int power(int a,int b);
int main(int argc, char *argv[])
{
    int a[200] = {0},i,j,flag=0,size = 0;
    int n = 1,k=0,b[200]={0};
    a[0] = 2;
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {   flag=0;
        for(j=0;a[j]!=0;j++)
        {
            if(i%a[j] == 0)
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            a[j] = i;
            size++;
        }
    }

    for(i=0;i<=size;i++)
    {
        j=1;
        while(power(a[i],j)<=n)
        {
            b[k] = power(a[i],j);
            k++;
            j++;
        }
    }
    printf("%d\n",k);
    for(i=0;i<k;i++)
    {
        printf("%3d",b[i]);
    }


    return 0;
}
int power(int a,int b)
{
    int i = 0;
    int temp = a;
    for(i=1;i<b;i++)
    {
        a = a*temp;
    }
    return a;
}
