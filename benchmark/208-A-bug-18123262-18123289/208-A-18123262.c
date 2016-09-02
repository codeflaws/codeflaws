#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    char a[300];
    int i,l;
    scanf("%s",a);
    l=strlen(a);
    for (i=0;i<l;i++)
    {
        if (a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')
        {
            i=i+2;
            continue;
        }
        else
            printf("%c",a[i]);
    }
    return 0;
}
