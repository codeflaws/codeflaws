# include <stdio.h>
int main(int argc, char *argv[])
{
char s[1001];
gets(s);
int i,j;
for(i=0;s[i]!='\0';i++)
if(s[i]=='.')
{
             if(s[i-1]=='9')
              {
                printf("GOTO Vasilisa");
                break;
                }
                else
                if(s[i+1]>='5')
                {s[i-1]++;
                 for(j=0;j<i;j++)
                 printf("%c",s[j]);
                 break;
                 }
                 else
                {
                  for(j=0;j<i;j++)
                 printf("%c",s[j]);
                 break;
                 }
                 }
                 
                 return(0);
                 }
