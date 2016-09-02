#include <stdio.h>
#define NIZHENEBUDET 500000

void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}

int sep(char c)
{
    return (c==EOF)||(c=='\n')||(c==' ')||(c=='\t');
}

int main(int argc, char *argv[])
{
    char burl[NIZHENEBUDET];
    char *last;
    int i=0;
    for (char c=getchar();;c=getchar(),i++)
    {
        if (sep(c))
        {
            last = &burl[--i];
            break;
        }
        burl[i]=c;
    }
    char *best;
    best=last;
    for (int k=0;k<=i;k++)
    {
        if (!(burl[k]%2))
        {
            if(best==last)
            {
                best=&burl[k];
            }
            if(*best<*last)
                break;
            if ((burl[k]<=*best)&&(*best>*last))
            {
                best=&burl[k];
            }
        }

    }
    if (best==last)
    {
        printf("-1");
    }
    else
    {
        swap(last,best);
        printf("%s",burl);
    }
}
