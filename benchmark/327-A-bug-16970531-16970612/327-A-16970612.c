#include<stdio.h>
int main(int argc, char *argv[]){
    int ara[101],n,i,j,k,z=0,o=0,mx=-100000000,p,q,sm=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&ara[i]);

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            z=0,o=0;
            for(k=i;k<=j;k++){
                if(ara[k]==0) z=z+1;
                if(ara[k]==1) o=o+1;
            }
            if((z-o)>mx){
                mx=z-o;
                p=i,q=j;
            }
        }
    }
    for(i=p;i<=q;i++){
        if(ara[i]==0) ara[i]=1;
        else ara[i]=0;
    }
    for(i=0;i<n;i++){
        sm=sm+ara[i];
    }
    printf("%d",sm);
return 0;
}
