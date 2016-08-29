#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int n,i,j;
    scanf("%d",&n);
    long long int w[n],h[n],totW=0,max[]={-1,-1},max_index[2],temp,tempW;
    for(i=0;i<n;i++){
    scanf("%lld %lld",&w[i],&h[i]);
    totW+=w[i];
    if(h[i]>max[0]){max[0]=h[i];max_index[0]=i;}
    else if(h[i]>max[1]){max[1]=h[i];max_index[1]=i;}
    }

    for(i=0;i<n;i++){
        temp=1;
        temp*=(totW-w[i]);
        if(i!=max_index[0])temp*=max[0];
        else temp*=max[1];
        printf("%lld\n",temp);
    }
    return 0;
}
