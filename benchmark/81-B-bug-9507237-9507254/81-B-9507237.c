#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char c,b;
    c = getc(stdin);
    if(c=='.') {printf("...");
    c = getc(stdin);
    c = getc(stdin);
    c = getc(stdin);}

    while (c=='0' ||c=='1' ||c=='2' ||c=='3' ||c=='4' ||c=='5' ||c=='6' ||c=='7' ||c=='8' ||c=='9' || c=='.' || c==',' || c==' ')
    {
        if (c==',') {b = getc(stdin) ; if (b=='\n') {printf (","); break;} else printf(", ");
        c=b;
        if(c=='.')
            {
                printf("...");
                c = getc(stdin);
    c = getc(stdin);
    c = getc(stdin);
            }
        }
        if (c=='.') {printf (" ...");
        c = getc(stdin);
    c = getc(stdin);
    c = getc(stdin);}
    if(c=='0' ||c=='1' ||c=='2' ||c=='3' ||c=='4' ||c=='5' ||c=='6' ||c=='7' ||c=='8' ||c=='9' )
    {
        printf("%c",c);
        c = getc(stdin);
        if(c==' ')
        {
            while(c==' ') c=getc(stdin);
            if(c=='0' ||c=='1' ||c=='2' ||c=='3' ||c=='4' ||c=='5' ||c=='6' ||c=='7' ||c=='8' ||c=='9') printf(" ");
        }

    }
    if(c==' ') c = getc(stdin);
    }

    return 0;
}
