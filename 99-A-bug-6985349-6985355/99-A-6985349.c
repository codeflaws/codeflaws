#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char str[100001];
    scanf("%s",str);
    int len = strlen(str);
    int i,j;
    int count=0;
    for(i=0;i<len;i++)
    {
       count++;
       if(str[i] == '.')
       {
          if( (str[i-1]-'0') <9)
          {
             if( (str[i+1]-'0')>= 5)
             {
                 str[i-1]=str[i-1]+1;
                 for(j=0;j<count;j++)
                   printf("%c",str[j]);
             }
             else if( (str[i+1]-'0') < 5)
             {
                 for(j=0;j<count-1;j++)
                   printf("%c",str[j]);
             }
          }
          else if((str[i-1]-'0') == 9 )
          {
               printf("GOTO Vasilisa.");
          }
       }
    }
    //getch();
    return 0;
}
