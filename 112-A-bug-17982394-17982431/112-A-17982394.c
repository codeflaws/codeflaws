#include<stdio.h>
#include<math.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int i=0;
    char str1[101],str2[101];
    scanf("%s %s",str1,str2);
    while((str1[i]-str2[i]==0 || abs(str1[i]-str2[i]==32))  && str1[i]!='\0')
    ++i;
    if((str1[i]-str2[i]==0 || abs(str1[i]-str2[i]==32)))
        printf("0");
    else
        {
          if((str1[i]<91 && str2[i]<91) && str1[i]<str2[i])
          printf("-1");
          else if((str1[i]>96 && str2[i]>96) && str1[i]<str2[i])
          printf("-1");
          else if((str1[i]<91 && str2[i]>96) && str2[i]-str1[i]>32)
            printf("-1");
          else if((str1[i]>96 && str2[i]<91) && str1[i]-str2[i]<32)
            printf("-1");
          else
            printf("1");
        }
    return 0;
}
