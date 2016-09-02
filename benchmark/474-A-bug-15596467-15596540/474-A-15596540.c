#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int a,i,j;
    char str[100+1],press;
    char key[100+1]={"qwertyuiopasdfghjkl;zxcvbnm,./"};
    scanf("%c",&press);
    scanf("%s",str);
    a=strlen(str);
    if(press=='R')
    {
        for(i=0;i<a;i++)
        {
            for(j=0;j<101;j++)
            {
                if(str[i]==key[j])
                {
                    printf("%c",key[j-1]);
                }
            }
        }
    }
    else
    {
        for(i=0;i<a;i++)
        {
            for(j=0;j<101;j++)
            {
                if(str[i]==key[j])
                {
                    printf("%c",key[j+1]);
                }
            }
        }
    }
    return 0;
}
