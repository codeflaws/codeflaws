#include "stdio.h"
#define YEAR 500

int year[YEAR] = {0};
int firstDay[13] = {0,100,131,159,190,220,251,281,312,343,373,404,434};

int main(int argc, char *argv[]){
    int n,m,d,p,t,i,max;
    scanf("%d",&n);
    while(n --){
        scanf("%d %d %d %d",&m,&d,&p,&t);
        for(i = firstDay[m] + d - 1; t -- ; i --){
            year[i] += p ;
        }
    }
    for(max = i = 0; i < YEAR ; i ++){
        if(year[i] > max){
            max = year[i] ;
        }
    }
    printf("%d\n",max);
    return 0;
}