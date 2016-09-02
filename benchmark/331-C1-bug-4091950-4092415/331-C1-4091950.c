#include<stdio.h>
int main(int argc, char *argv[]){
    int a,i,b,k,temp;
    while(~scanf("%d",&a)&&a>0){
        temp=0;

        while(a){
          b=a;
        k=0;
        while(b>0){
            if(k<b%10)
                k=b%10;
            b=b/10;
        }

        a-=k;
        temp++;
        }
        printf("%d\n",temp);
    }
    return 0;
    }
