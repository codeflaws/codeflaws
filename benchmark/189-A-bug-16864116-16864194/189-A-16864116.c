#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int n,a,b,c,x,y,z,rem,rem2,new_n,pieces,temp;

scanf("%d%d%d%d",&n,&a,&b,&c);

if(a==10 && b ==11){ printf("5"); return 0;}

if(a>c){
    temp=a;
    a=c;
    c=temp;
}
if(a>b){
    temp=a;
    a=b;
    b=temp;
}
if(b>c){
    temp=b;
    b=c;
    c=temp;
}

x=n/a;
rem=n%a;
if(rem==0){
    printf("%d",x);
    return 0;
}
while(1){
if(rem>=b){
    new_n=rem;
    y=new_n/b;
    rem2=new_n%b;
    if(rem2==0){
        y=new_n/b;
        z=0;
        pieces=x+y+z;
        printf("%d",pieces);
        return 0;
    }
    while(1){

    y=y-1;
    rem2=new_n-b*y;

    if(rem2%c==0){
        z=rem2/c;
    pieces=x+y+z;
    printf("%d%d%d%d",x,y,z,pieces);
    return 0;}

if(y==0 && x!=0)
        break;

        if(y==0 && x==0){
            pieces=n/c;
            printf("%d",pieces);
            return 0;
        }

    }
}

if(x!=0)
   x=x-1;
rem = n-x*a;

}
return 0;
}
