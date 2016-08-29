#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char a[3][101];
    int i,b=0,c=0,d=0;
    for(i=0;i<3;i++)
    gets(a[i]);
    for(i=0;i<strlen(a[0]);i++)
    {
        if(a[0][i]=='a' || a[0][i]=='e' || a[0][i]=='i' || a[0][i]=='o' || a[0][i]=='u')
        b++;
    }
    if(b != 5)
        {
            printf("NO");
            return 0;
        }
    for(i=0;i<strlen(a[1]);i++)
    {
        if(a[1][i]=='a' || a[1][i]=='e' || a[1][i]=='i' || a[1][i]=='o' || a[1][i]=='u')
        c++;
    }
    if(c != 7)
        {
            printf("NO1");
            return 0;
        }
    for(i=0;i<strlen(a[2]);i++)
    {
        if(a[2][i]=='a' || a[2][i]=='e' || a[2][i]=='i' || a[2][i]=='o' || a[2][i]=='u')
        d++;
    }
    if(d != 5)
        {
            printf("NO");
            return 0;
        }
    
    printf("YES");
    return 0;
}