#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int i, j, lena, lenb, ar[27], br[27];
    char a[101], b[101];
    scanf("%s %s", a, b);
    lena=strlen(a);
    lenb=strlen(b);
    for(i=0; i<26; i++)
    {
        ar[i]=0;
        br[i]=0;
    }
    for(i=0; i<lena; i++)
        ar[a[i]-'a']++;
    for(i=0; i<lenb; i++)
        br[b[i]-'a']++;
    for(i=0; i<26; i++)
        if(ar[i]<br[i])
        {
            printf("need tree\n");
            return 0;
        }
    if(lena==lenb)
        printf("array\n");
    else
    {
        i=0, j=0;
        while(i<lena && j<lenb)
        {
            while(a[i]==b[j])
            {
                //printf("equal at i=%d j=%d a[i]=%c b[j]=%c\n", i, j, a[i], b[j]);
                i++;
                j++;
            }
            i++;
        }
        //printf("j=%d\n", j);
        if(j==lenb)
            printf("automaton\n");
        else
            printf("both\n");
    }
    return 0;
}