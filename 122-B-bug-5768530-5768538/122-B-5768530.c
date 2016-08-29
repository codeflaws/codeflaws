#include <stdio.h>
int main(int argc, char *argv[])
{
    int a,b,k,i;
    char s1[60];
    while(scanf("%s",s1)!=EOF)
    {
        a=b=0;k=0;
        for(i=0;s1[i];i++)
        {
            if(s1[i]=='4')
            {
                a++;
                if(k==0)
                k=1;
            }
            if(s1[i]=='7')
            {
                b++;
                if(k==0)
                k=2;
            }
        }
        if(a>b)
        printf("4\n");
        else
        if(b>a)
        printf("7\n");
        else
        {
            if(k==0)
            printf("-1\n");
            if(k==1)
            printf("4\n");
            if(k==2)
            printf("7\n");
        }
    }
    return 0;
}
