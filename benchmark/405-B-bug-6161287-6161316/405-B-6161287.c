#include <stdio.h>
#include <string.h>
#define maxlen 3005
int main(int argc, char *argv[])
{
   int n;
   char s[maxlen];
   int i,j,k,prei,res;
   while(~scanf("%d",&n))
   {
       getchar();
       gets(s);
       //printf("%s\n",s);
       i=res=prei=0;
       while(i<n)
       {
           while(i<n&&s[i]=='.') i++;
           if(i>=n) break;
           if(s[i]=='R')
           {
            //printf("i=%d prei=%d  res=%d\n",i,prei,res);
            res+=i-prei;
            i++;
            prei=i;
            while(i<n&&s[i]=='.') i++;
            if(i>=n) {prei=i;break;}
            else if(((i-prei)%2)==0&&i!=prei) res++;
            //printf("i=%d prei=%d res=%d\n",res);
           }
           prei=++i;
       }
       //printf("%d\n",res);
       //printf("i=%d  prei=%d\n",i,prei);
       res+=i-prei;
       printf("%d\n",res);
   }
return 0;
}
