#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,j,k,n,temp,count=2;
    scanf("%d", &n);
    for(i=2;i<=n;i++)
    {
        if(count>10)
        {
            count=count-n;
        }
        printf("%d ", count);
        temp=i;
        count=count+temp;
    }

return 0;
}
