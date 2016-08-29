#include <stdio.h>
 
int main(int argc, char *argv[]) {
        int i=0, k=0;
    char c;
    scanf("%c", &c);
    while (c != '\n'){
        if (i){
            if (c == '"') {i=0; printf(">\n");}else
            printf("%c", c);
        } else {
            if (c == '"') {i=1; printf("<");}else{
                if (c == ' '){
                    if(k) {printf(">\n");k=0;}; 
                } else {
                if(k == 0) printf("<");
                k = 1;
                printf("%c", c);
                }
            }
        }
        scanf("%c", &c);
    }
        return 0;
}