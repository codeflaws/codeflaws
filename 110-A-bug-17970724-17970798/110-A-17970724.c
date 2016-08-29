#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int i,l,flag=0;
    char s[20];
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]!='4' || s[i]!='7')
        {
            flag++;
        }
    }
    if(flag==4 || flag==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
return 0;
}
