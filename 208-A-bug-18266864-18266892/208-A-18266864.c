#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char str[200];
    int i;
    gets (str);
    for(i=0;str[i];i++)
    {

    if(str[i]=='W',str[i+1]=='U',str[i+2]=='B')
        {

        i=i+2;
        printf(" ");
        }
        else printf("%c",str[i]);
    }
    return 0;
}
