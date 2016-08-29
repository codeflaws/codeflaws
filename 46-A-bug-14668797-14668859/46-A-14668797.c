#include<stdio.h>
int main(int argc, char *argv[]){
    int a,b=1,k,i=1;;
    scanf("%d",&a);
    k=a;
    while(--a){
            b=b+i;
            if(b>k)b=b%k;
        printf("%d ",b);
        i=i++;
    }
return 0;
}
