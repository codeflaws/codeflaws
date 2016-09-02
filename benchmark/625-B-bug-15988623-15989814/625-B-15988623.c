#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int a, i, len, len2, j, ctr, l, ct=0;
    char gogl[100001];
    char apple[31];
    scanf("%s", gogl);
    scanf("%s", apple);
    len=strlen(gogl);
    len2=strlen(apple);
    j=0;
    for(i=0; i<len; i++)
    {
        if(gogl[i]==apple[j])
        {
            l=i;
            for(j=0; j<len2; j++)
            {
                if(gogl[i]==apple[j])
                {
                    ctr=1;
                    i++;
                    continue;
                }
                if(gogl[i]!=apple[j])
                    {
                        ctr=0;
                        break;
                    }
            }
            if(ctr!=0)
            {
                ct++;
            }
            i=l;
        }
        j=0;
    }
    printf("%d", ct);
    return 0;
}
