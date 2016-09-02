#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char str[1][200];int i,a=0,b=0,c=0,d=0,ans;
    scanf("%s",str[0]);
    for (i=0;i<strlen(str[0]);i++)
    {
        if (str[0][i]=='n'){
            a++;
        }
        else if (str[0][i]=='i'){
            b++;
        }
        else if (str[0][i]=='e'){
            c++;
        }
        else if (str[0][i]=='t'){
            d++;
        }
    }
    a=a/3;
    c=c/3;
    ans=(a>b)?((b>c)?((c>d)?d:c):(b>d)?d:b):((a>c)?((c>d)?d:c):(a>d)?d:a);
    printf("%d",ans);
    return 0;
}
