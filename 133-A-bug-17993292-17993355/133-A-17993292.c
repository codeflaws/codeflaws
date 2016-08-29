#include <stdio.h>

int main(int argc, char *argv[])
{
    char string[100];
    gets(string);
    int i=0;
    while(string[i])
    {
        if(string[i]=='H'||string[i]=='Q'||string[i]=='9'||string[i]=='+')
        {
            printf("YES");
            return 0;
        }
        i++;
    }
    printf("NO");
    return 0;
}
