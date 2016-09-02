#include<stdio.h>

void sortelements(int n,int a[])
{
    int min,idx,i,j,t;
    for(i=0; i<n-1; i++)
    {
        min=a[i];
        idx=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                idx=j;
            }
        }
        t=a[i];
        a[i]=a[idx];
        a[idx]=t;

    }
}


int main(int argc, char *argv[])
{
    int n,m,i;
    scanf("%d%d",&m,&n);
    int a[m];
    for(i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }
    sortelements(m,a);

    int sum=a[m-1],k=1;
     for(i=m-2;i>=0;i++)
     {
         if(sum>=n)break;
         k++;
         sum=sum+a[i];
     }


     printf("%d",k);


    return 0;
}