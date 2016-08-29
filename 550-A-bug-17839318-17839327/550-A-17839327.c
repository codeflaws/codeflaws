#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char ch[100005];
    char str1[5]="AB";
    char str2[5]="BA";
    char *m;

    scanf("%s",ch);

   if((m=strstr(ch,str1))&&(strstr(m+2,str2)))
      printf("YES\n");
   else if((m=strstr(ch,str2))&&(strstr(m+2,str1)))
    printf("YES\n");
   else
    printf("NO\n");

return 0;
}
