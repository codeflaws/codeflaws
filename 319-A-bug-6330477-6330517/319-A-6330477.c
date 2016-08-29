#include<stdio.h>
#include<string.h>
long long no=1000000007;
int main(int argc, char *argv[])
{
    char s[200];
    scanf("%s",s);
    int len =strlen(s);
    if(len==1)
    {
        if(s[0]=='1')
            printf("1");
        else
          printf("0");
        return 0;
    }
    int i;
    long long no1=0,no2=1,no3,power=1,flag=0;
    for(i=len-1;i>=0;i--)
    {
        no1=(no1+power*(s[i]-'0'))%no;
        power=(power*2)%no;
        if(s[i]=='0')
            flag=1;
    }
    for(i=1;i<len;i++)
        no2=no2*2;
        if(flag==0)
        printf("%lld",(no1*(no1+1)/2)%no);
        else
        printf("%lld",(no1*no2)%no);
        return 0;
}
