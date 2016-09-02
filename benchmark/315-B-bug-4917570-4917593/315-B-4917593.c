#include "stdio.h"
    
int main(int argc, char *argv[])
{
    long com;
    long n,m,i,t1,t2;
    long array[100001];
    long p=0;
    scanf("%ld%ld",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%ld",&array[i]);
    }
    while(m){
        scanf("%ld %ld",&com,&t1);
        switch(com){
        case 1:
            scanf("%ld",&t2);
            array[t1]=t2-p;
            break;
        case 2:
            p += t1;
            break;
        case 3:
            printf("%ld\n",array[t1]+p);
        }
        m--;
    }
    return 0;
}