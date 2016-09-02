#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    char string[5];
    getchar();
    gets(string);
    int i=0,count=0;
    while(string[i+1])
    {
        if(string[i]==string[i+1])
            count++;
        i++;
    }
    printf("%d",count);
    return 0;
}
