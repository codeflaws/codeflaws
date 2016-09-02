#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    long int n;
    int n1=1,n2=0;
    int i=0,j=0;
    long int m,r;
    char mark[200];
    char c[2];
    do{
        scanf("%s",c);
        switch(c[0]){
            case '?':break;
            case '+':mark[i]='+';i++;n1++;break;
            case '-':mark[i]='-';i++;n2++;break;
            case '=':mark[i]='=';break;
            default: break;
        }
    }while(c[0]!='=');
    scanf("%ld",&n);
    if(n1*n-n2<n||n1-n2*n>n){
        printf("Impossible\n");
        return 0;
    }
    printf("Possible\n");
    if(n==1){
        m=0;
        r=0;
    }
    else{
        m=((n1-1)*n-n2)/(n-1);
        r=((n1-1)*n-n2)%(n-1);
    }
    if(m<n1+n2){
        printf("%ld ",n-r);
        i=0;
    }
    else{
        printf("1 ");
        i=1;
    }
    while(mark[j]!='='){
        printf("%c ",mark[j]);
        if(mark[j]=='+'){
            if(i<m){
                printf("1 ");
            }
            else{
                printf("%ld ",n);
            }
        }
        else{
            if(i<m){
                printf("%ld ",n);
            }
            else{
                printf("1 ");
            }
        }
        j++;
        i++;
    }
    printf("= %ld",n);
    return 0;
}
