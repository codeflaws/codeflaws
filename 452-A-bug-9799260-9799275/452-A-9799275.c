#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int l;
    scanf("%d\n",&l);
    char s[l];
    gets(s);
    if(l==8){
        printf("vaporeon");
    }
    else if(l==6){
        printf("espeon");
    }
    else{
        if(s[0]=='j'||s[1]=='o'||s[3]=='t'||(s[2]=='l'&&(s[0]=='j'||s[1]=='o'||s[3]=='t'))){
            printf("jolteon");
        }
        else if(s[0]=='u'||s[1]=='m'||s[2]=='b'||(s[3]=='r'&&(s[0]=='u'||s[1]=='m'||s[2]=='b'))){
            printf("umbreon");
        }
        else if(s[0]=='l'||s[1]=='e'||s[3]=='f'||(s[2]=='a'&&(s[0]=='l'||s[1]=='e'||s[3]=='f'))){
            printf("leafeon");
        }
        else if(s[0]=='s'||s[1]=='y'||s[3]=='v'||(s[2]=='l'&&(s[0]=='s'||s[1]=='y'||s[3]=='v'))){
            printf("sylveon");
        }
        else if(s[0]=='g'||s[3]=='c'){
            printf("glaceon");
        }
        else{
            printf("flareon");
        }
    }
    return 0;
}
