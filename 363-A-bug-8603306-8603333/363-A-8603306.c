#include<stdio.h>
int f0()
{
    printf("O-|-OOOO");
}
int f1()
{
    printf("O-|O-OOO");
}
int f2()
{
    printf("O-|OO-OO");
}
int f3()
{
    printf("O-|OOO-O");
}
int f4()
{
    printf("O-|OOOO-");
}
int f5()
{
    printf("-O|-OOOO");
}
int f6()
{
    printf("-O|O-OOO");
}
int f7()
{
    printf("-O|OO-OO");
}
int f8()
{
    printf("-O|OOO-O");
}
int f9()
{
    printf("-O|OOOO-");
}
int main(int argc, char *argv[])
{
    long long int n,i,mod;
    scanf("%l64d",&n);
    if(n==0){
        f0();
    }
    while(n>0){
        mod=n%10;
        if(mod==0){
            f0();
        }
        else if(mod==1){
            f1();
        }
        else if(mod==2){
            f2();
        }
        else if(mod==3){
            f3();
        }
        else if(mod==4){
            f4();
        }
        else if(mod==5){
            f5();
        }
        else if(mod==6){
            f6();
        }
        else if(mod==7){
            f7();
        }
        else if(mod==8){
            f8();
        }
        else if(mod==9){
            f9();
        }
        printf("\n");
        n=n/10;
    }
    return 0;
}
