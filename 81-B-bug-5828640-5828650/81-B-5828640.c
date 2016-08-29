#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char input[500];
    char output[600];
    int i,k=0;
    gets(input);
    for(i=0;i<strlen(input);i++)
    {
        if(input[i]==',')
        {
            output[k]=',';
            output[k+1]=' ';
            k+=2;
        }
        else if (input[i]=='.' && input[i+1]=='.' && input[i+2]=='.')
        {
            output[k]=' ';
            output[k+1]='.';
            output[k+2]='.';
            output[k+3]='.';
            i+=2;
            k+=4;
        }
        else
        {
            output[k]=input[i];
            k++;
        }
    }
    int flag=0;
    char print[500];
    int j=0;
    for(i=0;i<k;i++)
    {
        if(output[i]==' ' && (output[i+1]==' ' || i==k-1 || flag==0))
        {
            continue;
        }
        print[j]=output[i];
        j++;
        flag=1;
    }
    for(i=0;i<j;i++)
    {
        if((print[i]==' ' && isdigit(print[i-1]) && print[i+1]==',') || (print[i]==' ' && print[i-1] == '.' && isdigit(print[i+1])))
        {
            continue;
        }
        printf("%c",print[i]);
    }
    return 0;
}
