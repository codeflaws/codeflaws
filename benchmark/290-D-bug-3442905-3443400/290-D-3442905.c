#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char s[100];
    int n,i,l;

    scanf("%99s%d",s,&n);
    l = strlen(s);

    for( i = 0; i < l; i++ ) {
        char c = s[i];
        if( c < n + 97 ) {
            s[i] = toupper(c);
        }else {
            s[i] = tolower(c);
        }
    }

    printf("%s\n",s);

    return 0;
}
