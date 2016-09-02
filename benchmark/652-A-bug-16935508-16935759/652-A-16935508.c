#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,d,i,j,k=0,x,y,m,n;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x=b-a;
    m=8*c;
    n=12*d;
    y=m-n;
    j=y;
    //if(c<d) printf("%d",-1);
    if((c*8)>=x) printf("%d",0);
    else if(y>=x) printf("%d",0);
    else {
        while(y<x){
            m=m+(c*12);
            if(y+(c*12)>=x) {
                k++;
                printf("%d",k);
                break;
            }
            //else if(y<0) {printf("%d",-1);break;}
            else {
                n=n+(12*d);
                y=m-n;
                k++;
            }
            if(y<0&&y<j){printf("%d",-1);break;}
        }
    }
    return 0;
}
