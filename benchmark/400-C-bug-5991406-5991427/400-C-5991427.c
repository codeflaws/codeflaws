#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){
int i,u,v,c,r;
int t,n,m,x,y,z,p;
scanf("%i",&n);
scanf("%i",&m);
scanf("%i",&x);
scanf("%i",&y);
scanf("%i",&z);
scanf("%i",&p);
x=x%4;
y=y%2;
z=z%4;

while(p--){
    c=m;
    r=n;
    scanf("%i",&u);
    scanf("%i",&v);
    for(i=0;i<x;i++){
        t=u;
        u=v;
        v=r+1-t;

        t=r;
        r=c;
        c=t;

    }
if (y!=0){
        v=c+1-v;
    }

for(i=0;i<z;i++){
        t=v;
        v=u;
        u=c+1-t;
        
        t=r;
        r=c;
        c=t;
    }

printf("%i %i\n",u,v);
}
return 0;
}
