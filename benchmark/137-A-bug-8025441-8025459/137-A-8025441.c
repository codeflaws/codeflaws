#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]) {
    char s[40],m;
    scanf("%s",s);
    int i=0,res=0,k=1;
    while(i<strlen(s)){
        m=s[i];
        k=1;
        while( ((i+k)<strlen(s)) && (k<5) && (s[i+k]==m)) { 
        ++k; 
        }
        i+=k;
        ++res;
    }
    printf("%d\n",res);
    return 0;
}