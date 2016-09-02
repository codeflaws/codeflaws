#include<stdio.h>
#include<string.h>
int partition(int number[],int i,int j)
{
    int key;
    key=number[i];
    while(i<j)
    {
        while(i<j&&number[j]>key) j--;
        if(i<j) {
            number[i]=number[j]; i++;
        }
        while(i<j&&number[i]<key) i++;
        if(i<j){
            number[j]=number[i]; j--;
        }
    }
    number[i]=key;
    return i;
}
void q_sort(int number[],int i,int j)
{
    int temp;
    if(i<j)
    {
        temp=partition(number,i,j);
        q_sort(number,i,temp-1);
        q_sort(number,temp+1,j);
    }
}
int main(int argc, char *argv[])
{
    int m,n,i,j,a[110],b[110],b2[30],v;
    long long res;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        v=res=0;
        memset(b,0,sizeof(b));
        for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<m;i++)
        {
            scanf("%d",&j);
            b[j]=1;
            b2[v++]=a[j];
        }
        for(i=1;i<=n;i++)
        {
            if(b[i]==0)
            res+=a[i];
        }
        q_sort(b2,0,m-1);
        for(i=0;i<m;i++)
        {
            if(res>b2[i])
            res+=res;
            else
            {res+=b2[m-1];m--;i--;}
        }
        printf("%lld\n",res);
    }
    return 0;
}