#include<stdio.h>
#include<string.h>
int p[1000001];
char s[1000005];
int x[27];
int main(int argc, char *argv[])
{

    scanf("%s",&s);
    int len=0;
    p[len]=0;
    int i=1;
    int length=strlen(s)-1;
   while(i<strlen(s))
    {
        if(s[i]==s[len])
        {
            len++;
            p[i]=len;
            i++;
        }
        else{
            if(len!=0)
            {
                len=p[len-1];
            }
            else
            {
                p[i]=0;
                i++;
            }
        }
    }
    if(p[length]==0)
    {
        printf("Just a legend");
        return 0;
        }
    for(i=0;i<length;i++)
    {
        if(p[i]==p[length])
            break;
    }
    if(i<length)
    {
    for(i=0;i<p[length];i++)
        printf("%c",s[i]);
        return 0;
    }
    int d=p[length];
        d=p[d-1];
        if(d==0)
        {
            printf("Just a legend");

        }
        else
        {
            for(i=0;i<d;i++)
             printf("%c",s[i]);

        }
    return 0;
}
