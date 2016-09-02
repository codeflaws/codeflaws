#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    int n,i ;
    char s[9] ;
    scanf("%d", &n);
    scanf("%s", &s) ;
    if(n == 8){
        printf("vaporeon");
    }
    else if(n==6){
        printf("espeon");
    }
    else{
        if((s[0] == 'j' || s[0] == '.') && ( s[1] == 'o' || s[1] == '.') && (s[2] == 'l'|| s[2] == '.') && (s[3] == 't' || s[3] == '.') ){
             printf("jolteon");
        }
        else if((s[0] == 'f'|| s[0] == '.' ) && (s[1] == 'l' || s[1] == '.' )&& (s[2] == 'a' || s[2] == '.' )&& (s[3] == 'r' || s[3] == '.')){
            printf("flareon");
        }
        else if((s[0] == 'u' || s[0] == '.'  )&& (s[1] == 'm' || s[1] == '.') && (s[2] == 'a' || s[2] == '.') && (s[3] == 'r' || s[3] == '.')){
            printf("umbreon");
        }

        else if((s[0] == 'g' || s[0] == '.' ) && (s[1] == 'l' || s[1] == '.' )&& (s[2] == 'a' || s[2] == '.' )&& (s[3] == 'c' || s[3] == '.')){
            printf("glaceon");
        }

        else if((s[0] == 'l' || s[0] == '.')&& (s[1] == 'e' || s[1] == '.') && (s[2] == 'a' || s[2] == '.') && (s[3] == 'f' || s[3] == '.')){
            printf("leafeon");
        }

        else{
            printf("sylveon");
            }
    }
    return 0;

}





        //vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"}
