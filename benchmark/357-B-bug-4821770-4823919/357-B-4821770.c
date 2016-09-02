#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n+1],i,x,y,z;
    for(i=0;i<n+1;i++)
        arr[i]=0;
        int ex[6]={0,2,3,1,1,2};
    for(i=0;i<m;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
    if(arr[x]!=0)
    {
        arr[y]=ex[arr[x]];
        arr[z]=ex[arr[x]+1];
    }
    else if(arr[y]!=0)
    {
        arr[z]=ex[arr[y]];
        arr[x]=ex[arr[y]+1];
    }
    else if(arr[z]!=0)
    {
        arr[x]=ex[arr[z]];
        arr[y]=ex[arr[z]+1];
    }
    else
    {
        arr[x]=1;
        arr[y]=2;
        arr[z]=3;
    }


    }
    for(i=1;i<n+1;i++)
        printf("%d ",arr[i]);
    return 0;
}
