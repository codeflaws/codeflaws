#include<stdio.h>
char s[500001],c[500001];
int main(int argc, char *argv[])
{
    int n,m,i,j,min,k=0;
    scanf("%d%d",&n,&m);
    scanf("%s",s);
    if(m==2)
    {
        for(i=0;i<n;++i)
        {
            if(i%2)
                c[i]='B';
            else
                c[i]='A';
        }
        for(i=0;i<n;++i)
        {
            if(s[i]!=c[i])
                ++k;
        }
        min=n-k<k?n-k:k;
        if(min==k)
            printf("%d\n%s",min,c);
        else
        {
            for(i=0;i<n;++i)
            {
                if(c[i]=='A')
                    c[i]='B';
                else
                    c[i]='A';
            }
            printf("%d\n%s",min,c);
        }
    }
    else
    {
        for(i=1;i<n;++i)
        {
            if(s[i]==s[i-1])
            {
                ++k;
                if(s[i-1]!='A' && s[i+1]!='A')
                    s[i]='A';
                else if(s[i-1]!='B' && s[i+1]!='B')
                    s[i]='B';
                else
                    s[i]='C';
            }
        }
        printf("%d\n%s",k,s);
    }
    return 0;
}
