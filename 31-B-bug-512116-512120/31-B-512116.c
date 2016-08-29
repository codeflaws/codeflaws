#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, j = 0, flag = 1, first = 1;
    char adr[201], tmp[501] = "";
    gets(adr);

    if(adr[0] == '@' || adr[strlen(adr)-1] == '@')
        flag = 0;

    if(flag == 1)
    {
        for(i=0; i<strlen(adr); i++)
        {
            if(adr[i+1] == '@' && i+1 < strlen(adr) && first == 0)
            {
                if(tmp[j-1] == '@')
                {
                    flag = 0;
                    break;
                }

                tmp[j++] = ',';
                tmp[j++] = adr[i];
                tmp[j++] = '@';

                if(i+2 < strlen(adr))
                {
                    if(adr[i+2] == '@')
                    {
                        flag = 0;
                        break;
                    }
                }
                i++;
            }
            else
            {
                tmp[j++] = adr[i];
                if(first == 1 && adr[i] == '@')
                    first = 0;
                if(adr[i] == '@' && adr[i+1] == '@')
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if(flag == 0 && first == 0)
        printf("No solution\n");
    else
        printf("%s\n",tmp);

//    system("pause");
    return 0;
}
