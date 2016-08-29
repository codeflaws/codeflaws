#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char str[101];
    char abc[6]="hello";
       scanf("%s",str);
    int i=0,j,len=strlen(str);

    for(j=0;j<len;j++)
    {
        if(str[j]==abc[i])
            i++;
    }

    if(i==5)
            printf("YES");
    else
        printf("No");
    return 0;

}
