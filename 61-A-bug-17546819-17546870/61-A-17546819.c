#include<stdio.h>
int main(int argc, char *argv[])
{
    char s1[110],s2[110],s3[110];
    int i=0;
    scanf("%s %s",s1,s2);
    for (i=0;i<s1[i];i++)
    {
        if (s1[i]==s2[i])
            s3[i]='0';
        else s3[i]='1';
    }
    s3[i]='\0';
    printf("%s",s3);
    return 0;
}
