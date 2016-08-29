# include <stdio.h>
int main(int argc, char *argv[])
{
char a[100001];
gets(a);
int i=0;
while(a[i]!='\0')
{
    if(a[i]=='"'){i++;printf("<");while(a[i]!='"'){printf("%c",a[i++]);}printf(">\n");}
    if(a[i]!=' ' && a[i]!='"'){printf("<");while(a[i]!=' '){printf("%c",a[i++]);}printf(">\n");}
    i++;}

return 0;
}
