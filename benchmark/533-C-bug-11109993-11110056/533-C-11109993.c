#include<stdio.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
int main(int argc, char *argv[])
{
    long long int a,b,c,d,move,move_p,move_v;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(a<c&&b<d)printf("Polycarp");
    else if((a<c&&b>d)||(a>c&&b<d)||(a>c&&b>d)){
        move_p=a+b;
        move_v=MAX(c,d);
        if(move_p<=move_v)printf("Polycarp");
        else printf("Vasiliy");
    }
    else if(a==c&&b<d){
        move=d-b;
        a-=move;
        c-=move;
        d-=move;
        if(a<=c&&b<=d)printf("Polycarp");
        else printf("Vasiliy");
    }
     else if(a<c&&b==d){
        move=c-a;
        b-=move;
        c-=move;
        d-=move;
        if(a<=c&&b<=d)printf("Polycarp");
        else printf("Vasiliy");
    }
    return 0;
}
