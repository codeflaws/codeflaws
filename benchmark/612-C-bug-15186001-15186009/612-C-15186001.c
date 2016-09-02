#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/*bool constructNeed(char* s, int* needs, int l)
{
    int i;
    for (i=0;i<l;i++)
    {
        if (s[i]=='<' || s[i]=='{' || s[i]=='[' || s[i]=='(')
        {
            if (i)
                needs[i]=needs[i-1]+1;
            else needs[0]=1;
        }
        else if (s[i]=='>' || s[i]=='}' || s[i]==']' || s[i]==')')
        {
            if (i)
            {
                needs[i]=needs[i-1]-1;
                if (needs[i]<0)
                    return false;
            }
            else return false;
        }
        else return false;
    }
    if (needs[l-1])
        return false;
    return true;
}

int getRightBracket(int* needs, int lb, int l)
{
    int i;
    for (i=lb+1;i<l;i++)
        if (needs[i]==needs[lb]-1)
            return i;
    return 0;
}*/

bool isPair(char left, char right)
{
    if (left=='<')
    {
        if (right=='>')
            return true;
        else return false;
    }
    if (left=='{')
    {
        if (right=='}')
            return true;
        else return false;
    }
    if (left=='[')
    {
        if (right==']')
            return true;
        else return false;
    }
    if (left=='(')
    {
        if (right==')')
            return true;
        else return false;
    }
    return false;

}

int main(int argc, char *argv[])
{
    char c;
    int i,l,n,rb,sp;
    char s[1000001];
    scanf("%s",s);
    l=strlen(s);
    char stack[l];
    n=0; sp=0;
    for (i=0;i<l;i++)
    {
        if (s[i]=='<' || s[i]=='{' || s[i]=='[' || s[i]=='(')
        {
            stack[sp]=s[i];
            sp++;
        }
        else if (sp)
        {
            sp--;
            c=stack[sp];
            if (!isPair(c,s[i]))
                n++;
        }
        else
        {
            printf("Impossible\n");
            break;
        }
    }
    if (sp)
        printf("Impossible\n");
    else printf("%d\n",n);

    return 0;
}
