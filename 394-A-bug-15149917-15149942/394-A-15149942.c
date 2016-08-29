#include <stdio.h>
int main(int argc, char *argv[]){
    int i, a = 0, b = 0, c = 0, p = 0, len = 0;
    char s[500];
    scanf("%s", s);
    len = strlen(s);
    while(s[p++] != '+'){
        a++;
    }
    while(s[p++] != '='){
        b++;
    }
    while(s[p++]){
        c++;
    }
    if(a + b == c){
        printf("%s\n", s);
    }
    else if(abs(c - (a + b)) != 2){
        printf("Impossible\n");
    }
    else if(c > (a + b)){
        printf("|");
        for(i = 0; i < len -1; i++){
            printf("%c", s[i]);
        }
    }
    else{
        if(a > b){
            a--;
    }
        else{
            b--;
        }
        c++;
        for(i = 0; i < a; i++){
            printf("|");
        }printf("+");
        for(i = 0; i < b; i++){
            printf("|");
        }
        printf("=");
        for(i = 0; i < c; i++){
            printf("|");
        }
        printf("\n");
    }
    return 0;
}
