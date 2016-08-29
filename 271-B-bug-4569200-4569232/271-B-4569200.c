#include<math.h>
#include<stdio.h>
int p[100000],pr[100000],count=0,a[510][510];
void prime()
{
    int i,j,k,n=1000000;
    for(i=2;i<n;i++)
    {
        if(p[i]==0)
        {
            count++;


         pr[count]=i;
        for(j=2*i;j<n;j=j+i)
        {
            p[j]=1;

        }
        }
    }


}
int bsearch(int key,int left,int right)
{
    if(key==1||key==2)
    return 2;
    if(key==3)
    return 3;
    int mid;
    while(left<right)
    {
        mid=(left+right-1)/2;
        if(pr[mid]==key)
        {
            return pr[mid];
        }
        if(pr[mid]>key)
        {
            right=mid;

        }
        if(pr[mid]<key)
        {
            left=mid+1;

        }
    }
    if(pr[mid]>=key)
    return pr[mid];
    else
    return pr[mid+1];
}


int main(int argc, char *argv[])
{
    int i,j,k,n,m,min,sum;
    scanf("%d %d",&n,&m);
    prime();
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);


        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {

           //if(a[i][j]!=2&&a[i][j]!=1)
            k=bsearch(a[i][j],1,count-1);
            //else
            //k=2;
            sum=sum+k-a[i][j];
        }
        if(i==0)
        min=sum;
        if(i!=0)
        {



            if(sum<min)
            min=sum;
        }
         //printf("%d\n",sum);

        }



    //printf("1\n");
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            //if(a[j][i]!=2&&a[j][i]!=1)
            k=bsearch(a[j][i],1,count-1);
            //else
            //k=2;
            sum=sum+k-a[j][i];
        }

            if(sum<min)
            min=sum;



    }
    printf("%d\n",min);

    return 0;
}
