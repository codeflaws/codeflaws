#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int n,i,count=0;
    char a[201];
    scanf("%d %s",&n,a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='x')
        count++;
    }
    printf("%d\n",abs(count - n/2));
    int d;
    d=count - n/2;
    i=0;
    if(abs(count - n/2)==0)
        {
            printf("%s",a);
            return 0;
        }
    else if(count -n/2 >0)
        {
            while(d!=0)
            {
                if(a[i]=='x')
                {
                    d--;
                    a[i]='X';
                    i++;
                }
                else
                i++;
            }
        }
    else if(count-n/2 <0)
    {
        while(d!=0)
            {
                if(a[i]=='X')
                {
                    d--;
                    a[i]='x';
                    i++;
                }
                else
                i++;
            }
    }
    printf("%s",a);
    return 0;
}