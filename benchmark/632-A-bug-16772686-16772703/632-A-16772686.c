#include<stdio.h>
int main(int argc, char *argv[]){
    int a,b,k;
    char arr[50];
    char store[50];
    scanf("%d%d",&a,&b);
    getchar();
    double s=0;
    double res=0; double x=0;
    int i;
    for(i=0;i<a;i++){
    gets(arr);
    if(strlen(arr)==8){
    store[i]='2';
    }
    else{
    store[i]='1';
    }
    }
    for(k=2;k>=0;k--){
    if(store[k]=='2'){
    s=(2*res)+0.5;
    res=s;
    x=x+(res*b);
    }
    else{
    s=(2*res);
    res=s;
    x=x+(res*b);
    }}
    printf("%lld",(long long int)x);
return 0;
}
