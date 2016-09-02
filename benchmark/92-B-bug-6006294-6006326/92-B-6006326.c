#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char x[1000010];
char y[1000010];

int main(int argc, char *argv[])
{
    int number=0;
    int i=0;
    int counter=0;
    gets(y);
    int d=strlen(y);
    for(i=1000010;d>=0;i--)
    {
        x[i]=y[d-1];
        d--;
    }
    int check;
    for(i=1000010;i>=0&&(x[i]==48||x[i]==49);i--)
    {
        if(x[i]=='1'&&(x[i-1]=='0'||x[i-1]=='1'))
        {
            x[i]='0';
            counter++;
            check=go(i);
            if(check>1)
            {
                counter+=check;
                break;
            }
            check=0;
        }
        if (x[i-1]=='0'||x[i-1]=='1')
            counter++;
    }
    printf("%d",counter);
    return 0;
}

int go(int i)
{
    int j=i;
    i--;
    for(i;x[i]==49||x[i]==48;i--)
    {
        if(x[i]=='0')
        {
            x[i]='1';
            return 1;
        }
        else
            x[i]='0';
    }
    return j-i;
}
