#include<stdio.h>

int main(int argc, char *argv[])
{
    int i,x;
    x=0;
    char s[101];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9' || s[i]=='+')
        {
            printf("YES");
            x=1;
            break;
        }
    }
    if(x==0)
    {
        printf("NO");
    }


}

