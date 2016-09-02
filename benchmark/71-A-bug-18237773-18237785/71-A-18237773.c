#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int n,i,j,k;

    char word[100];
    char l[2];
    char buf[4];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",word);
        int len=strlen(word);
        if(len==n)
        {
            printf("%s\n",word);
        }
        else
        {
            l[0]=word[len-1];
            snprintf(buf, sizeof(buf), "%d", len-2);
            for(j=0;buf[j]!='\0';j++)
            {
                word[j+1]=buf[j];
            }
            word[j+1]=l[0];
            word[j+2]='\0';
            printf("%s\n",word);

        }
    }
    return 0;
}
