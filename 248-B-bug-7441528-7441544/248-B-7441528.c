#include<stdio.h>
int a[100005];
int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d",&n);
    if(n==1 || n==2){
        printf("-1");
    return 0;}
    else if(n==3){
        printf("210");
        return 0;}
    a[0]=1;
    for(i=1;i<n-1;i++)
        a[i]=0;
    int sum=0;
    for(i=0;i<n-1;i++)
    {
        sum=sum+a[i];
        if((sum)>=21)
        {
            sum=sum%21;
        }
        sum*=10;
    }
    //printf("%d\n",sum);
    sum/=10;
    sum= 21 - sum;
    a[n-2]=sum%10;
    sum/=10;
    a[n-3]=sum;
    for(i=0;i<n-1;i++)
        printf("%d",a[i]);
    printf("0");
}
