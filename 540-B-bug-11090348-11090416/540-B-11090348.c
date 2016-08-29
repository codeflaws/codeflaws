#include <stdio.h>
#include <stdlib.h>
#include<stdlib.h>
#include<math.h>
void merge(int a[],int l,int m,int r)
{
    int b[r+1];
    int h=l,i=l,j=m+1;
    while((h<=m) && (j<=r))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    int k=0;
    if(h>m)
    {
        for(k=j;k<=r;k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=h;k<=m;k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=l;k<=r;k++)
    {
        a[k]=b[k];
    }
}
void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int m=floor(l+(r-l)/2);
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int median(int *a,int key,int h)
{
    int i=0,flag=0;
    for(i=0;i<=h;i++)
    {
        if(a[i]>=key)
        {
            flag=1;
             break;
        }
    }
    if(flag==1)
        return(i);
    else
        return(-1);

}
int main(int argc, char *argv[])
{
    int n=0,k=0,p=0,x=0,y=0,flag=0;
    scanf("%d %d %d %d %d",&n,&k,&p,&x,&y);
    int a[k];
    int b=0;
    int i=0,sum=0;
    /*if(k==0)
    {
        if(y<=x)
            printf("%d",y);
        else
            printf("-1");
    }
    else
    {*/
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    if(k==0)
        sum=0;
    int diff=x-sum;

    mergesort(a,0,k-1);
    //printf("\n");
    /*for(i=0;i<k;i++)
    printf("%d ",a[i]);*/
    int index=median(a,y,k-1);

    int nos=(n/2);
    int lt=index;
    int gt=k-index-1;
    if(index==-1)
    {
        //printf("\nINDEX IS %d",index);
        b=1;
        a[k]=y;
        //printf("%d ",y);
         lt=k;
         diff=diff-y;
         gt=0;
        index=k;
        k++;

    }

    //printf("LT:%d GT:%d NOS:%d DIFF:%d",lt,gt,nos,diff);

    if(lt>nos)
       flag=0;
    else
    {
        //printf("\nSUMEET");
        if(gt>nos)
    {
        while(gt>nos)
        {
            index++;
            gt=k-index-1;
        }
    }
    int x1=nos-lt+y*(nos-gt);
    if(x1==0)
        x1=y;
    if(n==1)
        diff=x;
    //printf("\nX IS %d",x1);
    if(x1<=diff)
        flag=1;
    }
     if(flag==0)
     printf("-1");
    else
    {
        int t=0;
        if(b==1)
            printf("%d ",y);
       //printf("\nYES");
       //printf("\nLT:%d GT:%d NOS:%d DIFF:%d MED:%d\n",lt,gt,nos,diff,a[index]);
       for(t=1;t<=(nos-lt);t++)
        printf("%d ",1);
        //printf("\n");
       for(t=1;t<=(nos-gt);t++)
        printf("%d ",y);
    }
    return 0;
}
