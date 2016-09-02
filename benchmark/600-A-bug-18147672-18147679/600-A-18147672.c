#include<stdio.h>

int main(int argc, char *argv[])
{
    char s[200000], word[200000]="", a[200000]="", b[200001]="";
    int i=0, j, isnum=1;
    scanf("%s", &s);

    i=0;
    while(s[i]!='\0')
    {
        strcpy(word, "");

        while(s[i]!=',' && s[i]!=';' && s[i]!='\0')
        {
            word[strlen(word)+1]='\0';
            word[strlen(word)]=s[i];
            i++;
        }
        i++;

        isnum=1;

        if((word[0]=='0' && strlen(word)!=1) || word[0]=='\0')
            isnum=0;

        for(j=0; j<strlen(word); j++)
        {
            if(word[j]<'0' || word[j]>'9')
            {
                isnum=0;
                break;
            }
        }

        if(isnum==1)
        {
            strcat(a, word);
            strcat(a, ",");
        }
        else
        {
            strcat(b, word);
            strcat(b, ",");
        }
    }

    a[strlen(a)-1]='\0';

    if(b[strlen(b)-1]==',')
    {
        if(s[strlen(s)-1]!=',' && s[strlen(s)-1]!=';')
            b[strlen(b)-1]='\0';
        if(strlen(b)==0 && strlen(a)!=0)
            strcat(b, " ");
    }

    if(strlen(b)==0 && strlen(a)!=0 && (s[strlen(s)-1]==',' || s[strlen(s)-1]==';'))
        strcat(b, " ");

    if(a[0]=='\0')
        printf("-");
    else
        printf("\"%s\"", a);

    if(b[0]=='\0')
        printf("\n-");
    else if(b[0]==' ')
        printf("\"\"");
    else
        printf("\n\"%s\"", b);
return 0;
}
