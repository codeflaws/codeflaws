#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, length, small=0, capital=0, digit=0;
    char pass[100];
    scanf("%s", &pass);
    length= strlen(pass);
    for(i=0;i<length;i++)
    {
        if(pass[i]>=65 && pass[i]<=91)
        {
            capital=1;
        }
        else if(pass[i]>=97 && pass[i]<=122)
        {
            small=1;
        }
        else if(pass[i]>=48 && pass[i]<=57)
        {
            digit=1;
        }
    }
    if(length>=5 && capital==1 && small==1 && digit==1)
    {
        printf("Correct");
    }
    else
    {
        printf("Too weak");
    }

    return 0;
}
