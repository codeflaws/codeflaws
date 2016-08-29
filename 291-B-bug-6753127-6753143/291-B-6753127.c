#include<stdio.h>

int main(int argc, char *argv[])
{
    char a[100001];
    gets(a);
    int i=0,t=0;
    while(a[i]!='\0')
    {
        if(a[i]=='"')
        {
            i++;
            printf("<");
            while(a[i]!='"')
                printf("%c",a[i++]);
            printf(">\n");
            i++;
        }

        if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')||a[i]=='.'||a[i]==','||a[i]=='?'||a[i]=='!')
            {
                printf("<");
                while(a[i]!=' '&&a[i]!='\0')
                    printf("%c",a[i++]);
                printf(">\n");
            }
        i++;
    }
return 0;
}
