#include<stdio.h>
int a[100001],temp[100001];
void mergeSort(int low,int mid,int high){
    int i,m,k,l;
    l=low;
    i=low;
    m=mid+1;
    while((l<=mid)&&(m<=high)){
         if(a[l]<=a[m]){
             temp[i]=a[l];
             l++;
         }
         else{
             temp[i]=a[m];
             m++;
         }
         i++;
    }
    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=a[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=a[k];
             i++;
         }
    }
    for(k=low;k<=high;k++){
         a[k]=temp[k];
    }
}

void partition(int low,int high){
    int mid;
    if(low<high){
         mid=(low+high)/2;
         partition(low,mid);
         partition(mid+1,high);
         mergeSort(low,mid,high);
    }
}

int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        scanf("%d",a+i);
    partition(1,n);
    if(n==1)
        printf("-1");
    else if(n==2)
    {
        int k=a[2]-a[1];
        if(k==0)
            printf("1\n%d",a[1]);
        else if(k%2==0)
        {
             printf("3\n");
             printf("%d ",a[1]-k);
             printf("%d ",a[1]+k/2);
             printf("%d",a[2]+k);
        }
        else
        {
            printf("2\n");
             printf("%d ",a[1]-k);
             printf("%d",a[2]+k);
        }
    }
    else
    {
        int k=a[2]-a[1],f=1,t,ap,index,flag=0;
        for(i=3;i<=n;++i)
        {
            if(a[i]-a[i-1]==k)
                ++f;
            else if(flag==0)
                ap=a[i]-a[i-1],index=i,flag=1;
            else
            {
                printf("0");
                return 0;
            }
        }
        if(f==n-1)
        {
            if(k==0)
                printf("1\n%d",a[1]);
            else{
            printf("2\n");
            printf("%d ",a[1]-k);
            printf("%d",a[n]+k);}
        }
        else
        {
            if(f!=n-2 && f!=1)
                printf("0");
            else if(f==1)
            {
                if(n==3)
                {
                    if(k==2*ap)
                        printf("1\n%d",a[1]+k/2);
                    else if(2*k==ap)
                        printf("1\n%d",a[2]+ap/2);
                    else
                        printf("0");
                }
                else if(k!=2*ap)
                    printf("0");
                else
                    printf("1\n%d",a[1]+k/2);
            }
            else if(2*k!=ap)
                printf("0");
            else if(n%2==0 && index==n/2+1)
                printf("3\n%d %d %d",a[1]-k,a[n/2]+k,a[n]+k);
            else
                printf("1\n%d",a[index]-k);
        }
    }
    return 0;
}
