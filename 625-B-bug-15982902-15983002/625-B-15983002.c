#include <stdio.h>
#include <string.h>

char s[100010],p[35];

void constructNext(int* next, int l)
{
    int i;
    for (i=1;i<l;i++)
        if (p[i]==p[next[i-1]])
            next[i]=next[i-1]+1;
    for (i=l-1;i>0;i--)
        next[i]=next[i-1];
}

int main(int argc, char *argv[])
{
    int i,j,ans,sl,pl;
    scanf("%s %s",s,p);
    i=0; j=0; ans=0;
    sl=strlen(s);
    pl=strlen(p);
    int next[pl];
    memset(next,0,sizeof(next));
    constructNext(next,pl);
    while (i<sl)
    {
        if (j==pl)
        {
            j=0;
            ans++;
            continue;
        }
        if (s[i]==p[j])
        {
            i++;
            j++;
        }
        else
        {
            if (!j)
                i++;
            j=next[j];
        }
    }
    if (j==pl)
        ans++;
    printf("%d\n",ans);
return 0;
}
