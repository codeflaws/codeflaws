#include<stdio.h>
#define MAX(a,b) (a>b?(a):(b))
int func(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}
int main(int argc, char *argv[])
{
    int tux,temp;
    int foo=0,bar=0,baz=0,quz=1,pur;
    scanf("%d",&tux);
    while(tux--)
    {
        scanf("%d",&pur);
        foo=foo+pur;
        bar=bar+1;
        temp=MAX(foo*quz,bar*baz);
        if(temp==foo*quz)
        {
            baz=foo;
            quz=bar;
            
        }
    }
    printf("%.7f",baz/(quz*1.0));
    return 0;
}