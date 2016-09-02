#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char s1[102];
    int i = 0, c = 0, s = 0;

    while(gets(s1) != NULL){
        if(s1[0]=='+')
            c++;
        else if(s1[0]=='-')
            c--;
        else{
            i = 0;
            while(s1[i] != ':')
                i++;
            s = s+strlen(s1)-i-1;
        }
    }
    printf("%d\n", s);
    return 0;
}
