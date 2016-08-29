#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define MAX 100010
char s[MAX];
int tag[10];
long long count=1;
int main(int argc, char *argv[])
{
    int flag=0;
    int m,i,n;
    m=n=0;
    gets(s);
    int len;
    if(isalpha(s[0]))
        flag=1;
        else if(s[0]=='?')
            flag=2;
    for(len=strlen(s),i=0;i<len;i++)
    {
        if(isalpha(s[i])&&tag[s[i]-'A']==0)
        {
            m++;
            tag[s[i]-'A']=1;
        }
        else if(s[i]=='?')
            n++;
    }
    for(i=0;i<m;i++)
    {
        if(flag==1)
        {
            count*=9;
            flag=0;
        }
        else count*=10-i;
    }
    if(flag==2)
        count*=9,flag=1;
    printf("%I64d",count);
    for(i=0;i<m-flag;i++)
        printf("0");
    puts("");
    return 0;
}
