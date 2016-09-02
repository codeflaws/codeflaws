#include<stdio.h>

int main(int argc, char *argv[])
{
    char a[]={'q','w','e','r','t','y','u','i','o','p'},b[]={'a','s','d','f','g','h','j','k','l',';'},c[]={'z','x','c','v','b','n','m',',','.'},ch,ara[1000];
    int i,j,x,flag=0;
    scanf("%c",&ch);
    getchar();
    for(i=0;;i++){
        scanf("%c",&ara[i]);
        if(ara[i]=='\n')break;
    }
    x=i;
    for(i=0;i<x;i++){
        if(ch=='R'){
            for(j=0;j<10;j++){
                if(ara[i]==a[j]){
                    printf("%c",a[j-1]);break;}
                if(ara[i]==b[j]){
                    printf("%c",b[j-1]);break;}
                if(ara[i]==c[j]){
                    printf("%c",c[j-1]);break;}
            }
        }
        else if(ch=='L'){
            for(j=0;j<10;j++){
                if(ara[i]==a[j]){
                    printf("%c",a[j+1]);break;}
                if(ara[i]==b[j]){
                    printf("%c",b[j+1]);break;}
                if(ara[i]==c[j]){
                    printf("%c",c[j+1]);break;}
            }
        }
    }
    return 0;
}
