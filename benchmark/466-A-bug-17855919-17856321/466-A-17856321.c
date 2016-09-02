#include <stdio.h>

int fp(int a,int b)
{
    if(a<b)
        return a;
    return b;
}

int main(int argc, char *argv[])
{
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);

    if(b >= a*m)    //to compare special price/ride with normal one..this is better than b/m >= a (int and float)
        printf("%d", n*a);
    else
    {
        printf("%d",(n/m)*b + fp((n%m)*a , b)); //to see wether buying a final special ticket with more what you need or keep buying single tickets
    }   // (n/m)*b good boy (n*b)/m bad boy

    return 0;
}
