#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int k;
    scanf("%d",&k);
    int i,j;
    char a[17];
    char b[5];
    for(i=0;i<16;i++)
    {
        scanf("%s",b);
        for(j=0;j<4;j++)
        {a[i]=b[j];
        i++;}
        i--;
    }
    int apper;
    for(i=0;i<16;i++)
       {
           apper=1;
           for(j=i+1;j<16;j++)
           {
               if(a[i]==a[j])
               {
                   apper++;
                   if(apper>k*2)
                   {
                       printf("NO\n");
                       return 0;
                   }
               }
           }
       }
           printf("YES\n");
    return 0;
}
