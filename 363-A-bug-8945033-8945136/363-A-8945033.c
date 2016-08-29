#include<stdio.h>
#include<math.h>
#define D 1000
void print(int x);
int main(int argc, char *argv[])
{
    long long int n,m;
    scanf("%lld",&n);
    while(n>0){
        m=n%10;
        n/=10;
        print(m);
    }
    return 0;
}
void print(int x){
    switch(x){
        case 0:
            printf("O-|-OOOO\n");
            break;
        case 1:
            printf("O-|O-OOO\n");
            break;
        case 2:
            printf("O-|OO-OO\n");
            break;
        case 3:
            printf("O-|OOO-O\n");
            break;
        case 4:
            printf("O-|OOOO-\n");
            break;
        case 5:
            printf("-O|-OOOO\n");
            break;
        case 6:
            printf("-O|O-OOO\n");
            break;
        case 7:
            printf("-O|OO-OO\n");
            break;
        case 8:
            printf("-O|OOO-O\n");
            break;
        case 9:
            printf("-O|OOOO-\n");
            break;
    }
}
