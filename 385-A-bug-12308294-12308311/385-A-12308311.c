#include<stdio.h>
#include<string.h>
#define Max(a,b) (((a)>=(b))?(a):(b))
#define Min(a,b) (((a)<=(b))?(a):(b))
#define Abs(x) (((x)<0)?(-(x)):(x))
typedef long long ll;
typedef unsigned long long ull;


void sort(int a[] , int begin , int mid , int end)
{
    int i=begin,j=mid+1,k=0,temp[end-begin+1];
    
    while(i<=mid && j<=end)
    {
        if(a[i] <= a[j])
            temp[k++] =a[i++];
        else
            temp[k++]=a[j++];
    
    }
    
    
    for(;i<=mid;++i)
        temp[k++]=a[i];
    
    for(;j<=end;++j)
        temp[k++]=a[j];
    
    for(i=0;i<k;++i)
        a[begin+i]= temp[i];
    
    
}

void partition(int a[] , int begin ,int end)
{
    if(begin==end)
        return ;
    
    int mid= (begin+end)/2;
    
    partition(a,begin,mid);
    partition(a,mid+1,end);
    
    
    sort(a,begin,mid,end);


}

int Gcd(int a ,int b)
{
    if(a==0)
        return b;
    
    return Gcd(b%a ,a);
    
}


int main(int argc, char *argv[])
{

   int n,c;
   
   scanf("%d%d",&n,&c);
   
   int i,a[n],ans=0;
   
   for(i=0;i<n;++i)
       scanf("%d",&a[i]);
   
   for(i=1;i<n;++i)
       ans= Max(ans ,a[i-1]-a[i]-c);
   
   printf("%d\n",ans);
   
   return 0;
    
}