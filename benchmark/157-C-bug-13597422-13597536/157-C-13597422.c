#include<stdio.h>
#include<string.h>
char s[2001],c[2001];
int main(int argc, char *argv[])
{
    int i,j,min=1000000,temp;
    scanf("%s%s",s,c);
    int l=strlen(s),n=strlen(c);
    for(i=(-1*n);i<l;++i)
    {
        temp=0;
        for(j=0;j<n;++j)
        {
            if(i+j>n || i+j<0 || s[i+j]!=c[j])
            ++temp;
        }
        min=min<temp?min:temp;
    }
    printf("%d",min);
    return 0;
}
