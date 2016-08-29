#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char emails[201];
    char out[300];
    scanf("%s", emails);
    int len = strlen(emails);
    
    if (emails[0] == '@')
    {
        printf("No solution");
        return 0;
    }
    out[0] = emails[0];
    
    int i;
    int at = 0;
    int wrong = 0;
    int after = 0;
    int j = 1;
    for (i = 1; i < len; i++)
    {
        if (emails[i] == '@')
        {  
            if ((after < 2 && at == 1) || i == len-1)
            {
                wrong = 1;
                break;
            }
            out[j++] = '@';
            at = 1;
            after = 0;
            continue;
        }
        if (emails[i+1] == '@' && at == 1)
        {
            out[j++] = ',';

        }
        out[j++] = emails[i];

        if (at == 1)
        {
            after++;

        }
      
    }
    
    if (wrong)
        printf("No solution");
    
    else
    {
        out[j] = '\0';
        printf("%s", out);
    }
    return 0;
}