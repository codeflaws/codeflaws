#include "stdio.h"
#include "string.h"

char sl1(char a)
{
    return (a=='a')?'b':'a';
}

char sl2(char a,char b)
{
    char x[]="abc";
    int i;
    for (i=0;i<3;i++)
        if ((x[i]!=a)&&(x[i]!=b))
            return x[i];
}
int main(int argc, char *argv[])
{
    int n,t,i,x=0;
    scanf("%d%d\n",&n,&t);
    char s1[n+1],s2[n+1],r[n+1];
    scanf("%s%s",s1,s2);
    s1[n]='\0';
    s2[n]='\0';
    for (i=0;i<n;i++)
        if (s1[i]!=s2[i]) x++;
    if (t<(x+1)/2)
        strcpy(r,"-1");
    else
    {
        strcpy(r,s1);
        int x1=0,x2=0;
        for (i=0;i<n;i++)
            if (s1[i]!=s2[i])
                if ((x1+x>t)||(x2+x>t))
                    if (x1==x2)
                    {
                        r[i]=s2[i];
                        x1++;x--;
                    }
                    else
                    {
                        x2++;x--;
                    }
                else
                {
                    r[i]=sl2(s1[i],s2[i]);
                    x1++;x2++;x--;
                }
        for (i=0;i<n,((x1<t)&&(x2<t));i++)
            if (s1[i]==s2[i])
            {
                r[i]=sl1(s1[i]);
                x1++;x2++;
            }
    }
    printf("%s\n",r);
    return 0;
}
