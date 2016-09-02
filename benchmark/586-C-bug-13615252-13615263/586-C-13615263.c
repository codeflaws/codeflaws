#include<stdio.h>
long long int tag[4001],vec[4001];
int main(int argc, char *argv[])
{
    long long int n,cout=0;
    scanf("%lld",&n);
    long long int i,arr[n],v[n],d[n],j;
    for(i=0;i<n;i++)
    {
        scanf("%lld%lld%lld",&v[i],&d[i],&arr[i]);
    }
    i=0;
    while(i!=n){
                while(i!=n && tag[i])
                i++;
                if(i==n)
                    break;
                vec[i]=1;
                cout++;
                long long int ind=0;
                for(j=i+1;j<n;j++){
                    if(arr[j]<0)
                        continue;
                    long int val=v[i]-ind;
                    if(val<0)
                    val=0;
                    arr[j]-=val;
                    ind++;
                }
                long long int count=0;
                for(j=i+1;j<n;j++){
                    arr[j]-=count;
                    if(arr[j]<0 && !tag[j]){
                        tag[j]=1;
                        count+=d[j];
                    }
                }
                i++;
            }
    printf("%lld\n",cout);
    for(i=0;i<n;i++)
    {
        if(vec[i]==1)
            printf("%lld ",i+1);
    }
    return 0;
}
