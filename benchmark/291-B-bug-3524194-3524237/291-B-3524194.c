#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    bool inside = false;
    bool new_l = true;
    bool n_first = false;
    int ch;
    while((ch = getchar()) != EOF)
    {
        if(inside)
        {
            if(ch == '"')
            {
                inside = false;
                new_l = true;
                putchar('>');
            }
            else
            {
                putchar(ch);
            }
        }
        else
        {
            if(ch == '"')
            {
                inside = true;
                if(new_l)
                {
                    if(n_first)
                        putchar('\n');
                    putchar('<');
                    new_l = false;
                    n_first = true;
                }
            }
            else if(ch == ' ')
            {
                if(new_l)
                {
                    continue;
                }
                else
                {
                    putchar('>');
                    new_l = true;
                }
            }
            else
            {
                if(new_l)
                {
                    if(n_first)
                        putchar('\n');
                    putchar('<');
                    putchar(ch);
                    new_l = false;
                    n_first = true;
                }
                else
                {
                    putchar(ch);
                }
            }
        }
    }
    if(!new_l)
    {
        putchar('>');
    }
    return 0;
}
