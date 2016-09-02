#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,count,sum,j=0,a[5];
    scanf("%d",&n);
    for(i=5; ;i++)
    {
        count=0;
        sum=i;
        while(sum!=0)
        {
            sum/=5;
            count+=sum;
        }
        if(count==n)
        {
            a[j]=i;
            j++;
        }
        if(count>n)
            break;

    }
    printf("%d\n",j);
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
return 0;
}
