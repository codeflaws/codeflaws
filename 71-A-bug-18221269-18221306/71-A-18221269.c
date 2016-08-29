#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
int main(int argc, char *argv[])
{int n,t,l,c;
char s[100],a,b;
    scanf("%d",&n);
    t=n;
    while(t>0){
    scanf("%s",s);
    l=strlen(s);

    if(l>10){
    a=s[0];


    c=l-2;
    b=s[l-1];
printf(" %c%d%c",a,c,b);
    }
    else
        printf("%s",s);
        t--;
    }
    return 0;
}
*/

int main(int argc, char *argv[]){
    int t,l;
    char s[100];
scanf("%d",&t);
while(t>0){
   scanf("%s",s);
   l=strlen(s);
   if(l<=10)
        printf("%s\n",s);
   else{
   printf(" %c%d%c",s[0],l-2,s[l-1]);
   }
   t--;
}return 0;
}
