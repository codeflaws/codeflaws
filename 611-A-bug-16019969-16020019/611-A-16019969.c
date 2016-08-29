#include<stdio.h>

int main(int argc, char *argv[]){
    int a;
    char c1,c2,c3,c4,c5,c6,c7,c8;
    scanf("%d%c%c%c%c%c%c%c%c",&a,&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8);
    if(c5=='w'){
        if(a==1 || a==2)printf("%d",53);
            else printf("52");}
    else {
        if(a==30)printf("11");
        else if(a==31)printf("7");
        else printf("12");
        }
    return 0;
    }