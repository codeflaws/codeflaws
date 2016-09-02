#include<stdio.h>
#include<stdlib.h>
#define fr(i,n) for(i=0;i<n;i++)
#define frw(i,a,b) for(i=a;i<b;i++)
int power(int a,int b)
{
if(b==0)
return 1;
int k=power(a,b/2);
k=k*k;
if(b&1) k*=a;
return k;
}
int arr[100]={0};
int main(int argc, char *argv[])
{
int n,l,r,x,i,j,k,min,max;long long int sum;
scanf("%d %d %d %d",&n,&l,&r,&x);
fr(i,n)
scanf("%d",&arr[i]);
int g=power(2,n);
//printf("%d",g);
int count=0;
    fr(i,g)
    {
    min=-1;
    max=-1;
    sum=0;
    
        k=1;
        fr(j,n)
        {
        if(i & k)
            {
            sum+=arr[j];
            if(min==-1 || arr[min]>arr[j])
                min=j;
            if(max==-1 || arr[max]<=arr[j])
                max=j;
            }
        k<<=1;          
        }
        if(min!=-1 && max!=-1 && min!=max && arr[max]-arr[min]>=x && sum>=l && sum<=r){count++;}            
    }
printf("%d\n",count);
return 0;
}
