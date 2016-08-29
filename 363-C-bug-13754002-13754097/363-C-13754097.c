#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,j,k,b;
    char a[200000];
    scanf("%s",a);
    for(i=0; ;i++)
        {
        if(a[i]=='\0')
        break;
        }
  for(j=0;j<i-1;j++)
    {
        b=0;
        if(a[j]==a[j+1])
        {
            for(k=j+1;k<i-1;k++)
            {
            if(a[k]==a[k+1])
            {
            a[k]='\0';b++;j++;
            }else break;
            }
            for(k=j+2;k<i-1;k++)
            {
            if(a[k]==a[k+1])
            {
            if(b>1)
            {
            a[k-b]='\0';
            b=0;
            }
            a[k]='\0';
            }
            else break;
            }
        }
    }
    for(j=0;j<i;j++)
    if(a[j]!='\0')
    printf("%c",a[j]);
return 0;
}

