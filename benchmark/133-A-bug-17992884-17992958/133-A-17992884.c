#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char str[102];
    int i;
    gets(str);
    for(i = 0; str[i]; i++){
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9' || str[i] == '+'){
            puts("YES");
            break;
        }
    }
    if(i == strlen(str))
        puts("NO");

    return 0;
}
