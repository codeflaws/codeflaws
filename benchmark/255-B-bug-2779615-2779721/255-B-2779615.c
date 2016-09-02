#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
    char prev;
    char*c=(char*)malloc(sizeof(char)*1000007);
    int i=0;
    c[0]=getchar();
    prev=c[0];
    i+=1;
    while((c[i]=getchar())!='\n'){
        if((prev=='x' && c[i]=='y')||(prev=='y' && c[i]=='x')){
            i-=1;
            prev='c';
        }
        else{
            prev=c[i];
            i+=1;
        }
    }
    c[i]='\0';
    puts(c);
    return 0;
}
