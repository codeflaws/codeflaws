#include<stdio.h>
#include<string.h>

int vowelgone(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' ||c=='u' || c=='A' || c=='E' || c=='I' ||c=='O' || c=='U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char *argv[])
{
    int i,j=0;
    char str[110],new[110];
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(vowelgone(str[i])==0)
        {
            new[j]=str[i];
            j++;
        }
        new[j]='\0';
    }
    for(i=0;new[i]!='\0';i++)
    {
        if(new[i]>='A' && new[i]<='Z')
        {
            new[i]=new[i]+32;
        }
        printf(".%c",new[i]);
    }

}
