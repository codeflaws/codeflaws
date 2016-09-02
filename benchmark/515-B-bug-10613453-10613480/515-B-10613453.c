#include<stdio.h>
int main(int argc, char *argv[]){
    int n,m,a,p,q,i,j,k,fb=0,fg=0;
    int b[100]={0},g[100]={0};
    scanf("%d%d",&n,&m);
    scanf("%d",&p);
    for(i=0;i<p;i++){
        scanf("%d",&a);
        b[a]=1;
    }
    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%d",&a);
        b[a]=1;
    }
    for(i=0;i<n*m+n+m;i++){
        j=i%n;
        k=i%m;
        if((b[j]==1)&&(g[k]==0)) g[k]=1;
        else if((g[k]==1)&&(b[j]==0)) b[j]=1;
    }
    for(i=0;i<n;i++){
        if(b[i]==0){
            fb=1;
            break;
        }
    }
    for(i=0;i<m;i++){
        if(g[i]==0){
            fg=1;
            break;
        }
    }
    if((fb==1)||(fg==1)) printf("No");
    else printf("Yes");
    return 0;
}
