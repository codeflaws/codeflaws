#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d", &n);
    char s[n+2];
    scanf("%s", s);
    int l=strlen(s);
    for(i=0;i<l;i++)
    {
        s[i]=s[i]-48;
    }
    int changes=1;
    int carry=0;
    if(s[0]==1)
    {
        carry=1;
    }
    for(i=1;i<n;i++)
    {
        if(carry==1)
        {
            changes++;
        }
        if(carry+s[i]==2)
        {
            carry=1;
        }
        else
        {
            carry=0;
        }
    }
    printf("%d", changes);

}
