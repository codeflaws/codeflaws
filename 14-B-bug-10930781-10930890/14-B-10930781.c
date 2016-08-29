#include<stdio.h>

int main(int argc, char *argv[]){
    int i,j,k,f=1,m,n,a,b,c,d;

    scanf("%d %d",&n,&m);

    scanf("%d %d",&a,&b);

    if(a>b){
            k=b;
            b=a;
            a=k;
        }

    for(i=1;i<n;i++){
        scanf("%d %d",&c,&d);
        if(c>d){
            k=d;
            d=c;
            c=k;
        }

        if(c>b){
            f=0;
        }
        else if(f==1){
            if(c>a)
                a=c;
            if(d<b)
                b=d;
        }
    }

    if(f==0){
        printf("-1");
        return 0;
    }

    if(m<a)
        printf("%d",a-m);
    else if(m>b)
        printf("%d",m-b);
    else printf("0");

    return 0;
}
