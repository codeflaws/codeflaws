#include<stdio.h>

int main(int argc, char *argv[]){

    int n,m,s,flag=0;

    scanf("%d %d",&n,&m);

    s=n/2+n%2;

    while(s<n){
        if(s%m==0){
            flag=1;
            break;}
        else
            s++;
    }
if(flag==1)
    printf("%d",s);
else
    printf("-1");
return 0;
}
