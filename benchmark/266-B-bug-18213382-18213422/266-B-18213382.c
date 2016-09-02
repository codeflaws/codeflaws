#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int n,t,i,j;
    char a[1001];
    scanf("%d%d\n",&n,&t);
    gets(a);
    for(i=0;i<t;i++)
    {
        for(j=t-1;j>=0;j--)
        {
            if(a[j]=='G'&&a[j-1]=='B')
            {
                a[j]='B';
                a[j-1]='G';
                j--;
            }
        }
    }
    puts(a);


    return 0;
}
