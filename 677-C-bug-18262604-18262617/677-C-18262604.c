#include<stdio.h>
void ini();
long long int f(int p);
long long int alfabeto[256];
int main(int argc, char *argv[]){
    int i,j,k,l;
    long long int r=1;
    char word[100001];
    ini();
    scanf("%s",word);
    for(i=0;word[i];i++){
        r*=alfabeto[word[i]];
        r%=1000000007;
    }
    printf("%I64d",r);
    return 0;
}
void ini(){
    int i,j;
    char aux;
    for(i=0,aux='0';aux<='9';i++,aux++){
        j=i;
        while(j){
            alfabeto[aux]+=j%2;
            j/=2;
        }
    }
    for(aux='A';aux<='Z';i++,aux++){
        j=i;
        while(j){
            alfabeto[aux]+=j%2;
            j/=2;
        }
    }
    for(aux='a';aux<='z';i++,aux++){
        j=i;
        while(j){
            alfabeto[aux]+=j%2;
            j/=2;
        }
    }
    aux='-';
    j=i++;
    while(j){
        alfabeto[aux]+=j%2;
        j/=2;
    }
    aux='_';
    j=i++;
    while(j){
        alfabeto[aux]+=j%2;
        j/=2;
    }
    for(i=0;i<256;i++){
        alfabeto[i]=f(alfabeto[i]);
    }
}
long long int f(int p){
    long long int r=1;
    while(p--){
        r*=3;
    }
    return r;
}
