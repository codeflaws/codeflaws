#include<stdio.h>
#include<stdlib.h>
#define LL long long
int main(int argc, char *argv[]){
    char a[]="qwertyuiopasdfghjkl;zxcvbnm,./";
    char str[101];
    char msg[101];
    char ch;
    scanf("%c",&ch);
    int sh=0;
    if(ch=='R')
        sh=-1;
    else if(ch=='L')
        sh=1;

    scanf("%s",str);
    int i,j,m=0;
    for(i=0;i<strlen(str);i++){
        for(j=0;j<strlen(a);j++){
            if(str[i]==a[j]){
                msg[m++]=a[j-1];
            }
        }
    }
    msg[m]='\0';
    printf("%s",msg);
return 0;
}
