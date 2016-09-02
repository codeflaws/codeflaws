#include<stdio.h>
#include<string.h>
char st[200000],ar[200000];
int main(int argc, char *argv[])
{
    int l,k,a,b,m,i;
    scanf("%s",st);
    scanf("%s",ar);
    l=strlen(st);
    k=strlen(ar);
    if(l!=k)
    {
        printf("NO\n");
        return 0;
    }
    a=-1;
    m=0;
    b=-1;
    for(i=0;i<l;i++)
    {
        if(st[i]==ar[i]);
        else
        {
            if(b<0)
            a=i;
            if(a>=0)
            {
                b=i;
            }
            m++;
            if(m>=2)
            break;
        }
    }
    if(m>2)
    {
        printf("NO\n");
        return 0;
    }
    if(st[a]==ar[b]&&st[b]&&st[b]==ar[a])
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}
