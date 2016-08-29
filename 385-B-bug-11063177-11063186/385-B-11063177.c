#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int ans=0, i, j;
    char string[5010];
    gets(string);
    j = strlen(string);
    int x = 0;
    for(i = 1; i <= j-3; i++)
    {
        if(string[i-1] == 'b' && string[i] == 'e' && string[i+1] == 'a' && string[i+2] == 'r')
        {
            ans += (i-x)*(j-i-2);
            printf("%d\n", ans);
            x = i;
        }
    }
    printf("%d\n",ans);
    return 0;
}
