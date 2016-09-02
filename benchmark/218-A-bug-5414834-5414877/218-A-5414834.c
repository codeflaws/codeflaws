#include<stdio.h>
int main(int argc, char *argv[])
{
int n,k,i;
scanf("%d   %d",&n,&k);
int p=2*n+1;
int arr[p];
for(i=0;i<(2*n+1);i++)
scanf("%d",&arr[i]);
while(k!=0)
{
    for(i=1;i<2*n+1;i+=2)
    {
        if(arr[i]!=0&k!=0)
        {
            arr[i]--;
            k--;
        }
        if(k==0)
            break;
    }
}
for(i=0;i<2*n+1;i++)
    printf("%d ",arr[i]);
return 0;
}

