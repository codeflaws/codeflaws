#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char a[105];
    int i,j,cnt=0,flag=0;

    gets(a);
    j=strlen(a);

    for(i=0;i<j;i++)
    {
        if(a[i]>=65&&a[i]<=90)cnt++;
    }

    if(cnt==j)
    {
        for(i=0;i<j;i++)
        {
            printf("%c",a[i]+32);
        }
    }

    else if(a[0]>=97&&cnt==j-1)
    {
        printf("%c",a[0]-32);

        for(i=1;i<j;i++)
        {
            printf("%c",a[i]+32);
        }
    }
    else printf("%s",a);
return 0;
}
