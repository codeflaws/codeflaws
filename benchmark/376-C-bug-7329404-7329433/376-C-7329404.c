#include<stdio.h>
#include<string.h>
char s[1000005];
int l;
int modulus()
{
    int i,mod=0,pten=1;
    for(i=l-1;i>=0;i--)
    {
        mod = (mod + (s[i]-'0')*pten)%7;
        pten=(pten*10)%7;
    }
    return mod;
}
int main(int argc, char *argv[])
{
    int i,a[11]={0};
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
        a[s[i]-'0']++;
    a[1]--; a[6]--; a[8]--; a[9]--;
    int onlyzero=1;
    for(i=1;i<9;i++)
        if(a[i]>0)
        {
            onlyzero=0;
            break;
        }
    if(onlyzero)
    {
        printf("1869");
        while(a[0]--) putchar('0');
        return 0;
    }
    l=0;
    for(i=9;i>=0;i--)
    {
        while(a[i]--)
            s[l++]=i+'0';
    }
    s[l++]='0'; s[l++]='0'; s[l++]='0'; s[l++]='0';
    int rem = modulus();
    for(i=0;i<l-4;i++)
    putchar(s[i]);
    char ch[8][5]={"1869","1968","1689","6891","1698","1986","1896"};
    puts(ch[(7-rem)%7]);
    return 0;
}
