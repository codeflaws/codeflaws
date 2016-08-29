#include<stdio.h>
int main(int argc, char *argv[])
{
    int m,i,n,sum,j=0,k;
    int ara[100];
    scanf("%d",&m);
    for(i=5; ;i++)
    {
        sum=0;
        n=i;
        while(n!=0)
        {
        n=n/5;
        sum=sum+n;
        }


    if(sum==m)
    {

            ara[j]=i;
            j++;


    }
    else if(sum>5)
    {
        break;
    }

    }
    printf("%d\n",j);
    for(k=0;k<j;k++)

        printf("%d ",ara[k]);

    return 0;


}
