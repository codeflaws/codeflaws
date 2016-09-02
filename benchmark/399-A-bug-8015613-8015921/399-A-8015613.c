#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,p,k,i,m;
    scanf("%d %d %d",&n,&p,&k);
    if((p!=1 && p!=n) && (p-k>1 && p+k<n)){
        printf("<< ");
        for(i=1;i<=k;i++){
            printf("%d ",p-k+i-1);
        }
        printf("(%d) ",p);
        for(i=1;i<=k;i++){
            printf("%d ",p+i);
        }
        printf(">>");
    }
    else if(p==1 && p+k<n){
        printf("(1) ");
        for(i=1;i<=k;i++){
            printf("%d ",p+i);
        }
        printf(">>");
    }
    else if(p==1 && p+k==n){
        printf("(1) ");
        for(i=1;i<=k;i++){
            printf("%d ",p+i);
        }
    }
    else if(p==1 && p+k>n){
        printf("(1) ");
        for(i=1;i<=n-p;i++){
            printf("%d ",p+i);
        }
    }
    else if(p==n && p-k>1){
        printf("<< ");
        for(i=1;i<=k;i++){
            printf("%d ",p-k+i-1);
        }
        printf("(%d)",p);
    }
    else if(p==n && p-k==1){
        for(i=1;i<=k;i++){
            printf("%d ",p-k+i-1);
        }
        printf("(%d)",p);
    }
    else if(p==n && p-k<1){
        for(i=1;i<p;i++){
            printf("%d ",m);
        }
        printf("(%d)",p);
    }
    else if((p!=1 && p!=n) && (p-k==1 && p+k==n)){
        for(i=1;i<=k;i++){
            printf("%d ",p-k+i-1);
        }
        printf("(%d) ",p);
        for(i=1;i<=k;i++){
            printf("%d ",p+i);
        }
    }
    else if((p!=1 && p!=n) && (p-k==1 && p+k<n)){
        for(i=1;i<=k;i++){
            printf("%d ",p-k+i-1);
        }
        printf("(%d) ",p);
        for(i=1;i<=k;i++){
            printf("%d ",p+i);
        }
        printf(">>");
    }
    else if((p!=1 && p!=n) && (p-k>1 && p+k==n)){
        printf("<< ");
        for(i=1;i<=k;i++){
            printf("%d ",p-k+i-1);
        }
        printf("(%d) ",p);
        for(i=1;i<=k;i++){
            m=p+i;
            if(m>n){
                m=n;
            }
            printf("%d ",m);
        }
    }
    else if((p!=1 && p!=n) && (p-k<1 && p+k<n)){
        for(i=1;i<p;i++){
            printf("%d ",i);
        }
        printf("(%d) ",p);
        for(i=1;i<=k;i++){
            m=p+i;
            printf("%d ",m);
        }
        printf(">>");
    }
    else if((p!=1 && p!=n) && (p-k>1 && p+k>n)){
        printf("<< ");
        for(i=1;i<=k;i++){
            printf("%d ",p-k+i-1);
        }
        printf("(%d) ",p);
        for(i=1;m!=n;i++){
            m=p+i;
            if(m>n){
                m=n;
            }
            printf("%d ",m);
        }
    }
    else if((p!=1 && p!=n) && (p-k==1 && p+k>n)){
        for(i=1;i<=k;i++){
            printf("%d ",p-k+i-1);
        }
        printf("(%d) ",p);
        for(i=1;m!=n;i++){
            m=p+i;
            if(m>n){
                m=n;
            }
            printf("%d ",m);
        }
    }
    else if((p!=1 && p!=n) && (p-k>1 && p+k<n)){
        printf("<< ");
        for(i=1;i<=k;i++){
            printf("%d ",p-k+i-1);
        }
        printf("(%d) ",p);
        for(i=1;i<=k;i++){
            m=p+i;
            printf("%d ",m);
        }
        printf(">>");
    }
    else if((p!=1 && p!=n) && (p-k<1 && p+k>n)){
        for(i=1;i<p;i++){
            printf("%d ",i);
        }
        printf("(%d) ",p);
        for(i=1;m!=n;i++){
            m=p+i;
            if(m>n){
                m=n;
            }
            printf("%d ",m);
        }
    }
    else if((p!=1 && p!=n) && (p-k<1 && p+k==n)){
        for(i=1;i<p;i++){
            printf("%d ",i);
        }
        printf("(%d) ",p);
        for(i=1;i<=k;i++){
            m=p+i;
            if(m>n){
                m=n;
            }
            printf("%d ",m);
        }
    }
    return 0;
}
