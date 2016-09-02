#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    char string[200]="\0";
    char string1[200]="\0";
    char string2[200]="\0";
    int i=0,j=0;

    gets(string);

    while(string[i]!='\0')
    {
        if(string[i]!='A'&&string[i]!='E'&&string[i]!='I'&&string[i]!='O'&&string[i]!='U'&&string[i]!='Y'&&string[i]!='a'&&string[i]!='e'&&string[i]!='i'&&string[i]!='o'&&string[i]!='u'&&string[i]!='y')
        {
            string1[j]=string[i];
            j++;
        }
        i++;
    }
    for(i=0;string1[i]!='\0';i++)
    {
        if(string1[i]>='A'&&string1[i]<='Z')
        {
            string1[i]=string1[i]+32;
        }
    }
    j=0;

    for(i=0;string1[i]!='\0';)
    {
        if(j%2==0)
        {
            string2[j]='.';
        }
        else
        {
            string2[j]=string1[i];
            i++;
        }
        j++;
    }

    puts(string2);

return 0;
}
