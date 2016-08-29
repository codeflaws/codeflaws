#include <stdio.h>

int main(int argc, char *argv[]) {
    int a[100005],b[100005],c[100005],n,p,m,i,j,k,d,x,y,z;
    scanf("%d %d %d",&n,&k,&p);
    x=0;y=0;
    for(i=0;i<n;++i){
        scanf("%d",&d);
        a[i]=d;
        if(d%2==0){
            b[x++]=d;
        }else c[y++]=d;
    }
    m=k-p;
    if(y<m||(y-m)%2!=0) {printf("NO\n"); return 0;}
    z=x + (y-m)/2;
    if(p>z){printf("NO\n");return 0;}
    printf("YES\n");
    if(p>=1){
    for(i=0;i<m;++i){
        printf("1 %d\n",c[i]);
    }
    if(p<=x){
        for(j=0;j<p-1;++j){
        printf("1 %d\n",b[j]);
        }
        printf("%d ",y-m+x-p+1);
        for(i=m;i<y;++i){
            printf("%d ",c[i]);
        }
        for(j=p-1;j<x;++j){
            printf("%d",b[j]);
        }
        printf("\n");
        return 0;
    
    }else{
        for(j=0;j<x;++j){
            printf("1 %d\n",b[j]);
    }
        for(j=x;j<p-1;++j){
            printf("2 %d %d\n",c[i],c[i+1]);
            i+=2;
        }
        printf("%d ",y-i);
        for(j=i;j<y;++j)    printf("%d ",c[j]);
        printf("\n");
        return 0;
    }
    }else{
        for(j=0;j<m-1;++j){
            printf("1 %d\n",c[j]);
        }
        printf("%d ",y-m+1+x);
        for(j=m-1;j<y;++j){
            printf("%d ",c[j]);
        }
        for(i=0;i<x;++i){
            printf("%d ",b[i]);
        }
        printf("\n");
        return 0;
    }
        return 0;
}
