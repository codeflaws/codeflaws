#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char s1[110],s2[110],s3[110],tmp;
    int i,j;
    scanf("%s %s %s",s1,s2,s3);
    strcat(s1,s2);
    int n=strlen(s1);
    for (i=0;s1[i];i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (s1[j]>s1[j+1])
            {
                tmp=s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=tmp;
            }
        }
    }
    for (i=0;s3[i];i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (s3[j]>s3[j+1])
            {
                tmp=s3[j];
                s3[j]=s3[j+1];
                s3[j+1]=tmp;
            }
        }
    }
    if (strcmp(s1,s3)==0)
        printf("YES");
    else printf("NO");
return 0;
}
