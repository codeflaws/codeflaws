#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
        int i;
        char s[100];
        int flag=0;

        gets(s);

        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='H' || s[i]=='Q' || s[i]=='9' || s[i]=='+' )
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
            printf("YES");
        else
            printf("NO");

        return 0;
}
