#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char s[105];
    int i, x, n=0;
    scanf("%s", &s);
    for(i=0; s[i]!='\0'; i++)
    {
        x=s[i];
        if (x==72|| x==81 || x==57 || x==43)
        {
            printf("YES");
            n=1;
            break;
        }
    }
    if(n!=1)
        {
            printf("NO");
        }
    return 0;
}
