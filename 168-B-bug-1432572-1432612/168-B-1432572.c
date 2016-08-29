#include <stdio.h>
#include <string.h>
char str[10000000];
int main(int argc, char *argv[])
{
    int i=0,j,l,vis,k;
    while(gets(str)!=NULL)
    {
        vis=0;
        l=strlen(str);
        for(j=0;str[j]==' ';j++);
        if(str[j]=='#')
            vis=1;
        if(vis==1&&i==0)
        {
            for(j=0;j<l;j++)
                putchar(str[j]);
            k=1;
        }
        else if(vis==0&&i==0)
        {
            for(j=0;j<l;j++)
                if(str[j]!=' '&&str[j]!='\n'&&str[j]!='\0')
                    putchar(str[j]);
            k=0;
        }
        else if(vis==1&&k==1)
        {
            printf("\n");
            for(j=0;j<l;j++)
                putchar(str[j]);
            k=1;
        }
        else if(k==0)
        {
            for(j=0;j<l;j++)
                if(str[j]!=' '&&str[j]!='\n'&&str[j]!='\0')
                    putchar(str[j]);
        }
        else
        {
            printf("\n");
            for(j=0;j<l;j++)
                if(str[j]!=' '&&str[j]!='\n'&&str[j]!='\0')
                    putchar(str[j]);
            k=0;
        }
        i++;
    }
    printf("\n");
    return 0;
}
