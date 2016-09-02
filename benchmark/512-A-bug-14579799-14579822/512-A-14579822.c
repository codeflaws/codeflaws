#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int n,a[27][27],i,j,mi,k,re=0,kt,d,fr[27];
    char s[101][102],kq[27];
    scanf("%d%*c",&n);
    for (i=0;i<n;i++) gets(s[i]);
    for (i=0;i<26;i++)
        for (j=0;j<26;j++) a[i][j]=0;
    for (i=0;i<n-1;i++)
        for (j=i+1;j<n;j++)
    {
        mi=strlen(s[i])>strlen(s[j])?strlen(s[j]):strlen(s[i]);
        k=0;
        while (k<mi && s[i][k]==s[j][k]) k++;
        if (k>=mi && strlen(s[i])>strlen(s[j]))
        {
            re=-1;
            break;
        }
        if (k<mi) a[s[i][k]-97][s[j][k]-97]=1;
    }
    n=0;
    for (i=0;i<26;i++) fr[i]=1;
    do
    {
        d=0;
        for (i=0;i<26;i++)
        if (fr[i]==1)
        {
            kt=1;
            for (j=0;j<26;j++)
            if (a[j][i]==1)
                {
                    kt=0;
                    break;
                }
            if (kt==1)
            {
                kq[n++]=97+i;
                fr[i]=0;
                d=1;
                for (j=0;j<26;j++)
                    {
                        a[i][j]=0;
                        a[j][i]=0;
                    }
            }
        }
        if (d==0) break;
    } while (n<26);
    kq[26]='\0';
    if (n<26 || re<0) printf("Impossible");
    else printf("%s",kq);
    return 0;
}
