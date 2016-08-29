#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char s[100];
    gets(s);
    int i,upp=0,low=0;
    int x=strlen(s);
    for(i=0;i<x;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            low++;
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            upp++;
        }
    }
    
    if(low>=upp)
    {
        for(i=0;i<x;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
               s[i]=('a'+s[i]-'A');
            }

        }

    puts(s);
    }
    else if(upp>low)
    {
        for(i=0;i<x;i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
              s[i]=('A'+s[i]-'a');
        }
        }

    puts(s);
    }


    return 0;
}

