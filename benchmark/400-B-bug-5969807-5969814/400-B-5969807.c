#include<stdio.h>
int main(int argc, char *argv[])
{
    int m,n,i,j,ng,ns,k,x[1000];
    char ch;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        k=0;
        for(j=0;j<m;j++){
            scanf("%c",&ch);
            while((ch!='*')&&(ch!='G')&&(ch!='S'))
                scanf("%c",&ch);
            k++;
            if(ch=='G')
                ng=k;
            if(ch=='S')
                ns=k;
        }
        if(ns-ng<0){
            printf("-1");
            ng=-1;ns=-1;
            break;
        }
        else
            x[i]=ns-ng;
    }
    if((ng!=-1)&&(ns!=-1)){
        for(i=n-1;i>0;i--)
            for(j=0;j<i;j++)
                if(x[j]>x[j+1]){
                    k=x[j];
                    x[j]=x[j+1];
                    x[j+1]=k;
                }
        k=0;
        for(j=1;j<n;j++)
            if(x[j]>x[j-1])
                k++;
        printf("%d",k+1);
    }
    for(i=0;i<n;i++)
        printf(">%d<",x[i]);
    return 0;
}