#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//#include <conio.h>

int a, b;

int f(int t, int c){
    return t*10+c; 
}
int pow(int i){
    int t=1;
    for (;i>0;--i){
        t*=10;
    }
    return t;
}

int raz(int t){
    int k;
    for (k=0;k<10;++k){
        if(t/(pow(k))<1) return k;
    }
}

int f2(int c){
    int i, t=0, z;
    for(i=raz(c)-1;i>=0;--i){
        z=c/pow(i);
        if (z==4 || z==7){
            t=f(t, z);
        }
        c-=pow(i)*z;
    }
    return t;
}

int main(int argc, char *argv[]){
    int i, j, c;
    scanf ("%d%d", &a, &b);
    if(a == b){ printf("%d", a); return 0;}
    i=a;
    while(1){
       if(f2(i)==b){printf("%d", i); return 0;}
       ++i;
    }
    return 0;
}
