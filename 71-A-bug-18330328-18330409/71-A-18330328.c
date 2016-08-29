#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int n, i, x, l;
    char words[100][100];
    while(scanf("%d", &n) != EOF)
    {

        for(i=0; i<n; i++)
        {
            scanf("%s", words[i]);
        }

        for(i=0; i<n; i++)
        {
            l=0;
            while( words[i][l] != '\0') l++;
            printf("%d\n", l);
            if(l<=10)
            {
                printf("%s\n", words[i]);
            }
            else
            {
                printf("%c%d%c\n", words[i][0], l-2, words[i][l-1]);
            }
        }
    }
    return 0;
}
