#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    char in[200],out[200];
    int i,j,len,count=0;

    gets(in);

    len=strlen(in);

    for(i=1;in[i]!='\0';i++)
    {
        if(in[i]>='A'&&in[i]<='Z')
        {
            count++;
        }
    }

    if(in[0]>='A'&&in[0]<='Z')
    {
        if(count==len-1)
        {
            out[0]=in[0];
            for(j=1;in[j]!='\0';j++)
            {
                out[j]=in[j]+32;
            }
            out[j]='\0';
            puts(out);
        }
        else
        {
            puts(in);
        }
    }
    else if(in[0]>='a'&&in[0]<='z')
    {
        if(count==len-1)
        {
            out[0]=in[0]-32;
            for(j=1;in[j]!='\0';j++)
            {
                out[j]=in[j]+32;
            }
            out[j]='\0';
            puts(out);
        }
        else
        {
            puts(in);
        }
    }
    else
    {
        puts(in);
    }


return 0;
}
