#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char s[5001];
    scanf("%s",s);
    int i=0,ans=0,t=0;
    int n=strlen(s);
    while(s[i]!='\0')
    {
        if(s[i]=='b'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='r')
        {
            ans += (i+1-t)*(n-(i+3));
            t=i+1;
            printf("%d  %d\n",ans,t);
        }
        i++;
    }
    printf("%d",ans);
    return 0;
}
