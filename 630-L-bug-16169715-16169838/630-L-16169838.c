#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char s[6];
    long br;
    int i;
    long long rez=1;
    scanf("%s",s);
    br=(s[0]-'0')*10000;
    br+=(s[1]-'0');
    br+=(s[2]-'0')*1000;
    br+=(s[3]-'0')*10;
    br+=(s[4]-'0')*100;
    for (i=1;i<=5;i++)
    {
        rez*=br;
        if (i%2==0)
            rez=rez%100000;
    }
    rez=rez%100000;
    if (rez<10)
    {
        printf("0000");
        printf("%I64d\n",rez);
        return 0;
    }
     if (rez<100)
    {
        printf("000");
        printf("%I64d\n",rez);
        return 0;
    }
     if (rez<1000)
    {
        printf("00");
        printf("%I64d\n",rez);
        return 0;
    }
     if (rez<10000)
    {
        printf("0");
        printf("%I64d\n",rez);
        return 0;
    }
    printf("%I64d\n",rez);
        return 0;
}
