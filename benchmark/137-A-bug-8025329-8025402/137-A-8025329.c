#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char s[40];
    scanf("%s",s);
    int result=0, count=1;
    int i;
    for (i = 1; i < strlen(s); ++i)
    {
        if (s[i] == s[i-1])
        {
            count += 1;
        }
        else
        {
            result += (count + 4) / 5;
            count = 1;
        }
    }
    result += (count + 4) / 5;
    printf("%d\n",result);
    return 0;
}
