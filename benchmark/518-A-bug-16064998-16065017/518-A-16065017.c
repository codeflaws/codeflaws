#include<stdio.h>
#include<string.h>

char s[101], t[101];
int main(int argc, char *argv[]){
    int i, len, flag = -1;

    scanf("%s", s);
    scanf("%s", t);

    len = strlen(s);
    for(i = 0; i < len; i++){
        if(t[i] - s[i] == 0);
        else{
            flag = 0;
            break;
        }
    }

    for(i = len - 1; i >= 0; i--){
        s[i] = s[i] + 1;
        if(s[i] <= 'z'){
            break;
        }
        else s[i] = 'a';
    }

    if(flag == -1 || strcmp(s, t) == 0) printf("No such string\n");
    else printf("%s\n", s);

    return 0;
}
