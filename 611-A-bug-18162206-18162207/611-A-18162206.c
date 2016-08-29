#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{int a,ans;
char s[6];
while(scanf("%d of %s",&a,s)!=EOF)
{if(strcmp(s,"week")==0){if(a==6||a==5)ans=53;
else ans=52;}
else if(strcmp(s,"month")==0){if(a==30)ans==11;
    else if(a==31)ans=7;
    else ans=12;
}
   printf("%d\n",ans);}
    return 0;}