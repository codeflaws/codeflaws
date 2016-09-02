#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ss[250];
int main(int argc, char *argv[])
{
    char s[105],t[105];
    scanf("%s%s",s,t);
    int i,j,ls,lt;
    ls=strlen(s);
    lt=strlen(t);
    if(ls<lt) {printf("need tree");
            return 0;
            }
    for(i=0;i<ls;i++) ss[s[i]]++;

    for(i=0;i<lt;i++) {
            ss[t[i]]--;
            if (ss[t[i]]<0) {printf("need tree");
            return 0;
            }
    }
    int k=0;
    if(ls==lt)
    {
        printf("array");
        return 0;
    }
    for(i=0;i<ls-lt+1;i++)
    {
        if(s[i]==t[0])
        {
            k++;
            for(j=i;j<ls;j++)
            {
                if (t[k]==s[j]) k++;
            }
            if(k==lt) {printf("automaton"); return 0;}
        }

    }
    printf("both");

    return 0;
}
