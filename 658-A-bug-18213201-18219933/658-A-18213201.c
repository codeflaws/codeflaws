#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int n,c,s1=0,s2=0,T,i;
   scanf("%d %d",&n,&c);

   int p[n],t[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&p[i]);
   }
   for(i=0;i<n;i++)
   {
       scanf("%d",&t[i]);
   }
   T=0;
   for(i=0;i<n;i++)
   {
     T+=t[i];
     if(p[i]-(T*c)>0)
     {
         s1+=p[i]-(T*c);
     }

    }
    T=0;
   for(i=n-1;i>0;i--)
   {
     T+=t[i];
     if(p[i]-(T*c)>0)
     {
         s2+=p[i]-(T*c);
     }

   }


    if(s1>s2)
        printf("Limak");
    else if(s1<s2)
        printf("Radewoosh");
    else
        printf("Tie");

return 0;
}
