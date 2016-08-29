#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char s[105], t[105];

    scanf("%s %s", s, t);
    int i = strlen(s) - 1;
    while(i >= 0)
    {
        if(s[i] != 'z')
        {
            s[i]++;
            if(strcmp(s, t) >= 0)
            {
                char newString[] = "No such string";
                int j;
                for(j=0; j<strlen(s); j++) s[j] = '\0';
                strcpy(s, newString);
            }
            break;
        }
        else s[i] = 'a';
        i--;
    }

    printf("%s\n", s);

    return 0;
}
