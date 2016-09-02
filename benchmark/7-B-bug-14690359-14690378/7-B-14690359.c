#include<stdio.h>
#include<string.h>
typedef unsigned char byte;
byte mem[101];
byte m,a;
void alloc();
void erase();
void defrag();
int main(int argc, char *argv[]){
    int t,k,c;
    char op[15];
    scanf("%d",&t);
    scanf("%d",&m);
    for(k=0;k<t;k++){
        scanf("%s",op);
        if(op[0]=='d'){
            defrag();
        }else if(op[0]=='a'){
            alloc();
        }else{
            erase();
        }
    }
    return 0;
}
void defrag(){
    byte l,k,b;
    l=k=0;
    while(k<m){
        if(mem[k]){
            if(l!=k){
                mem[l]=mem[k];
            }
            l++;
        }
        k++;
    }
    memset(&mem[l],0,(m-l)*sizeof(byte));
}
void alloc(){
    byte c,l=0,k;
    scanf("%d",&c);
    for(k=0;l<c && k<m;k++){
        l++;
        if(mem[k]){
            l=0;
        }
    }
    if(l==c){
        a++;
        k-=c;
        memset(&mem[k],a,c*sizeof(byte));
        printf("%d\n",a);
    }else{
        printf("NULL\n");
    }
}
void erase(){
    int c;
    byte l,k,b=0;
    scanf("%d",&c);
    if(c<0 || c>100){
        goto filippi;
    }
    l=(byte)c;
    for(k=0;k<m;k++){
        if(mem[k]==l){
            b=1;
            mem[k]=0;
        }
    }
    filippi:
    if(!b){
        printf("ILLEGAL_ERASE_ARGUMENT\n");
    }
}