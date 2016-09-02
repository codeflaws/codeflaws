#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int n,l,i,s=0,j;
    char str[30010][25];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",str[i]);
    l=strlen(str[0]);
    for(i=0;i<l;i++)
    {
        for(j=0;j<n;j++)
            if(str[j][i]!=str[j][0])
                break;
        if(j==n)
            s++;
        else
            break;
    }
    printf("%d\n",s);
    return 0;
}
