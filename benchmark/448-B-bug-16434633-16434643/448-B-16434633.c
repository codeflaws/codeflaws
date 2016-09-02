#include<stdio.h>
#include<string.h>

int si[26], ti[26];
char s[101], t[101];

int main(int argc, char *argv[]){
    char c;
    int i, j = 0, automaton = 0, array = 0, both = 0, nt = 0, flag;

    scanf("%s", s);
    scanf("%s", t);

    for(i = 0; i < strlen(s); i++) si[s[i]-97]++;
    for(i = 0; i < strlen(t); i++) ti[t[i]-97]++;

    for(i = 0; i < 26; i++){
        if(ti[i] != si[i]){
            nt = 1;
            break;
        } 
    }

    if(nt == 0){
        for(i = 0; i < strlen(s); i++){
            if(s[i] == t[j]) j++;
        }
        if(j == strlen(t)) automaton = 1;

        if(automaton == 0 && strlen(s) == strlen(t)) array = 1;
        else both = 1;
    } 

    if(nt == 1) printf("need tree\n");
    else if(automaton == 1) printf("automaton\n");
    else if(array == 1) printf("array\n");
    else printf("both\n");

    return 0;
}
