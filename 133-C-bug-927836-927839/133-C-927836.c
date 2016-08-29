#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdint.h>
#define fp(i,a,b,c)  for(i=a;i<b;i+=c)
#define fn(i,a,b,c)  for(i=a;i>b;i-=c)
#define fs(i,a)      for(i=0;i<a;i++)
#define sci(a)       scanf("%d",&a)
#define sci2(a,b)       scanf("%d%d",&a,&b)
#define pf(a)         printf("%d ",a)
#define pf2(a,b)         printf("%d %d",a,b)

 int ReverseBits(int input, int length)
    {
        int output = 0;

        while (length-- > 0)
        {
            output = (output << 1) | (input & 0x01);
            input >>= 1;
        }

        return output;
    }

int main(int argc, char *argv[])
{
  int i,j,k,l,n,m;

   char str[101];
  int po=0;
       scanf("%s",str);
       m=strlen(str);
       //pf(l);
       int pr=0;
       fs(i,m)
       {
           //po=0;
           n=(int)str[i];
          // l=1;
           int result;
           if(i==0){
         result=ReverseBits(n,8);
          result=pr-result;
          if(result<=0)
          result=256+result;
         // else
          //result%=256;
          //pr=result;
          //result=ReverseBits(n,8);
          pr=result;
           }
           else
           {

           pr=ReverseBits(str[i-1],8);
           n=ReverseBits(n,8);
          result=pr-n;
         // if(result<0)
          result=256+result;
        //  else
          result%=256;
           // pr=result;
         //result=ReverseBits(pr,8);
          pr=result;

           }
           printf("%d\n",pr);
       }



 return 0;
 }
