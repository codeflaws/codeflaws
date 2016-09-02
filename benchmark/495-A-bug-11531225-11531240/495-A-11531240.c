#include <stdio.h>
int main(int argc, char *argv[])
{
             int a,b,c,d=1,e,i;
             int x[10]={2,7,2,3,3,4,2,5,1,2};
             char s[3];
             scanf("%s",&s);
             for(i=0;i<2;i++)
             {d=d*x[s[i]-48];

             }
             printf("%d",d);
             return 0;
}