#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bit_dec(char *x)
{
    int i,a,l,shu=0;
    a=1;
   l=strlen(x);
   for(i=1;i<=l;i++)
   {
     if(x[l-i]=='1')
        shu=shu+a;
        a<<=1;
   }
   return(shu);

}

int reverse(char k)
{
    char num[9];
    memset(num,0,9);
    int i;
    for(i=0; i<8; i++)
    {
             if(k%2)
                    num[i] = '1';
             else
                    num[i] = '0';
             k /= 2;
    }
    num[8]=0;
    int re = bit_dec(num);
    return re;
}
int main(int argc, char *argv[])
{
    char *in;
    in = (char*)malloc(101);
    memset(in,0,101);
    int i = 0;
    for(i;i<101;i++)
    {
        scanf("%c",&in[i]);
        if(in[i] < 32 || in[i] > 126)
                   break;
    }

    int len = i+1;
    int bak_ = 0;
    int bak = 0;
    int num;
    for(i=0; i<len; i++)
    {
           bak = bak_;
           int r = reverse(in[i]);
           bak_ = r;
           num = (bak - r)%256;
           if(num < 0)
                  printf("%d\n",num+256);
           else
                  printf("%d\n",num);
    }
    return 0;
}
