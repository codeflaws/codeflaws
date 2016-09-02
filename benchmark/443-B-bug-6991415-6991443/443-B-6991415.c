#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char s[500];
    scanf("%s",s);
    int t,i,j;
    scanf("%d",&t);
    int len=strlen(s);
    int x;
    x=len+t;
    if(x%2!=0)
        x=x-1;
    for(i=x/2;i>0;i--)
    {  int count=0;
        for(j=0;j<len;j++)
        {  if(j+i>=len&&j+i<len+t)
             count++;
           else if(s[j]==s[j+i])
            {
                count++;
            }
            else
                count=0;
            if(count==i)
                break;
        }
        if(count==i)
            break;
    }
    printf("%d\n",2*i);
    return 0;
}
