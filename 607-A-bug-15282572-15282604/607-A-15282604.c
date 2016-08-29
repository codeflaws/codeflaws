#include<stdio.h>
int ai[1000027],bi[1000027];
int table[1000027];
int main(int argc, char *argv[])
{
    int n,i,j,a,b,k,kk;
    scanf("%d",&n);
    for (i=0,j=0;i<n;++i){
        scanf("%d%d",&a,&b);
        ai[a]=b;
        bi[a]=1;
       
    }

    for (i=0;i<=1000000;++i){
          if (i-ai[i]-1>=0)
            k=i-ai[i]-1;
          else
            k=1000001;
          if (bi[i])
            table[i]+=table[k]+1;
          else
            table[i]+=table[k];
            //printf("%d\n",table[i]);
    }
    for (i=0,k=0,kk=0;i<=1000000;++i){
        if (k<table[i]){
            k=table[i];
            kk=i;
        }


    }
    printf("%d\n",n-table[kk]);
    return 0;
}