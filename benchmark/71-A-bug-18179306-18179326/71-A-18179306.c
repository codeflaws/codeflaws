#include<stdio.h>

int main(int argc, char *argv[])
{
    int  l,t,h;

    char word[101];
    scanf("%d",&t);
    while(t>=0)
    {gets(word);
    l=strlen(word);
    if(l<10)
    {
        printf("%s\n",word);
    }
    else
    {
        printf("%c",word[0]);
        printf("%d",l-2);
        printf("%c\n",word[l-1]);

    }
    t--;
    }
    return 0;
}
