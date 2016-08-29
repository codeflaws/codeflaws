#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,k,l,c,d,p,x,y,a,b,z;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&x,&y);
    a=(k*l)/x;
    b=c*d;
    z=p/y;
    if(a<b && a<z){
        printf("%d",a/n);
    }
    else if(b<a && b<z){
        printf("%d",b/n);
    }
    else if(z<a && z<b){
        printf("%d",z/n);
    }
    else if(a==b && z<a){
        printf("%d",z/n);
    }
    else if(b==z && a<b){
        printf("%d",a/n);
    }
    else if(a==z && b<a){
        printf("%d",b/n);
    }
    else if(a==b && z>a){
        printf("%d",a/n);
    }
    else if(b==z && a>b){
        printf("%d",b/n);
    }
    else if(a==z && b>a){
        printf("%d",a/n);
    }
    return 0;
}