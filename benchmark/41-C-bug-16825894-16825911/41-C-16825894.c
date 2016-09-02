#include<stdio.h>
#include<string.h>
char s[101],c[101];
int main(int argc, char *argv[])
{
    scanf("%s",s);
    int l=strlen(s),i,flag=0,n=1;
    c[0]=s[0];
    for(i=1;i<l-1;++i)
    {
        if(s[i]=='a' && !flag && s[i+1]=='t' && i+1!=l-1)
            c[n++]='@',i+=1,flag=1;
        else if(s[i]=='d' && s[i+1]=='o' && s[i+2]=='t')
            c[n++]='.',i+=2;
        else
            c[n++]=s[i];
    }
    c[n++]=s[l-1];
    c[n]='\n';
    printf("%s",c);
    return 0;
}
