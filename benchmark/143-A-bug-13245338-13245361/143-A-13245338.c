#include<stdio.h>
int main(int argc, char *argv[])
{
    int r1,r2,c1,c2,d1,d2,a,b,c,d,x,y,z;
    scanf("%d %d",&r1,&r2);
    scanf("%d %d",&c1,&c2);
    scanf("%d %d",&d1,&d2);
    for(a=1;a<10;a++){
        b=r1-a;
        if(b<1||b>9||b==a)continue;
        c=c1-a;
        x=d2-b;
        if(c<1||c>9||c==a||c==b||x!=b)continue;
        d=d1-a;
        y=c2-b;
        z=r2-c;
        if(d<1||d>9||d==a||d==b||d==c||y!=d||z!=d)continue;
        else { printf("%d %d\n%d %d",a,b,c,d);
             return 0;}
    }
    printf("-1");
    return 0;
}