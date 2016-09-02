#include <stdio.h>
/*Siempre gana el primero XD 
a menos que no pueda hacer un primer movimiento :v*/
int main(int argc, char *argv[]) {
    int a,b,r;
    scanf("%d%d%d",&a,&b,&r);
    r*=2;
    if(b<a)a=b;
    if(a<r){
        printf("Second");
    }else{
        printf("First");
    }
    return 0;
}