#include <stdio.h>
int main(int argc, char *argv[])
{
    int tux;
    scanf("%d",&tux);
    int foo = 0;
    int bar = 0;
    int baz = 0;
    int quz = 1;
    while( tux-- ) {
        int pur;
        scanf("%d",&pur);
        foo += pur;
        bar++;
        if ( (foo * quz >= bar * baz) ) {
            baz = foo;
            quz = bar;
        }
    }
    printf("%.5f\n",(double)baz/quz);
return 0;
}
