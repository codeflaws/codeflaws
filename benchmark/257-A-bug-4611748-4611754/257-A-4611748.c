/*Sockets*/
#include<stdio.h>
int qsort(int *a,int low,int high)
{
    if(low>=high)
    return 0;
    int pivot=a[low],i=low+1,j=high,temp,x=1;
    while(x)
    {   while(i<=high&&a[i]<pivot)
        {   i++;
        }
        while(j>low&&a[j]>pivot)
        {   --j;
        }
        if(i>=j)
        {   x=0;
        }
        else
        {   temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            ++i;
            --j;
        }
   }
   if(low<j)
   {    temp=a[low];
        a[low]=a[j];
        a[j]=temp;
   }
   qsort(a,low,j-1);
   qsort(a,j+1,high);
}
int main(int argc, char *argv[])
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,0,n-1);
    if(m<k)
    {   printf("0");
        return 0;
    }
    int count=0,last=n-1;
    count++;
    k--;
    while(last>=0)
    {   if(m-a[last]>k)
        {   m=m-a[last]+1;
            count++;
            last--;
        }
        else
            break;
    }
    if(last<0)
    {   printf("-1");
        return 0;
    }
    printf("%d",count);
    return 0;
}
