#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char a[120];
    int i,t;
    while(gets(a)!=EOF)
    {
        t=strlen(a);
        for(i=0;i<t;i++)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y')
                a[i]='1';
            else if(a[i]>='A'&&a[i]<='Z')
                a[i]=a[i]+32;
        }
        for(i=0;i<t;i++)
        {
           if(a[i]!='1')
           {
                 printf(".");
                 printf("%c",a[i]);
           }


    }
    printf("\n");
    }
    return 0;
}
