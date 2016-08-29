#include <stdio.h>
int main(int argc, char *argv[]){
    int n,m,i,j,a,b,fa[2][2],fb[2][2],r,v=-1,s;
    scanf("%d%d%d%d%d%d",&n,&m,&i,&j,&a,&b);
    s=n;
    r=(i-1)%(2*a);
    fa[0][1]=(i-1)/a;
    if(r==a)fa[0][0]=1;
    else if(r==0)fa[0][0]=2;
    else fa[0][0]=0;
    r=(n-i)%(2*a);
    fa[1][1]=(n-i)/a;
    if(r==a)fa[1][0]=1;
    else if(r==0)fa[1][0]=2;
    else fa[1][0]=0;
    r=(j-1)%(2*b);
    fb[0][1]=(j-1)/b;
    if(r==b)fb[0][0]=1;
    else if(r==0)fb[0][0]=2;
    else fb[0][0]=0;
    r=(m-j)%(2*b);
    fb[1][1]=(m-j)/b;
    if(r==b)fb[1][0]=1;
    else if(r==0)fb[1][0]=2;
    else fb[1][0]=0;
    r=-1;
    if(fa[0][0]==1)r=fa[0][1];
    if(fa[1][0]==1&&(fa[1][1]<r||!(r+1)))r=fa[1][1];
    n=-1;
    if(fb[0][0]==1)n=fb[0][1];
    if(fb[1][0]==1&&(fb[1][1]<n||!(n+1)))n=fb[1][1];
    if((r+1)&&(n+1))v=n>r?n:r;
    
    r=-1;
    if(fa[0][0]==2)r=fa[0][1];
    if(fa[1][0]==2&&(fa[1][1]<r||!(r+1)))r=fa[1][1];
    n=-1;
    if(fb[0][0]==2)n=fb[0][1];
    if(fb[1][0]==2&&(fb[1][1]<n||!(n+1)))n=fb[1][1];
    if((r+1)&&(n+1))if(!(v+1)||v>n&&v>r)v=n>r?n:r;
    
    
    
    
    if(!v||(v+1&&s>1&&m>1))printf("%d",v);
    else printf("Poor Inna and pony!");
    return 0;
}
    
