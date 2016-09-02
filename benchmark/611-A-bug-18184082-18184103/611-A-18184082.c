#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int n ;
    char s[10];
    scanf("%d",&n);
    gets(s);
    int len ;
    len = strlen(s);
    if(s[len-1] == 'k'){
        if(n == 6)printf("53");
        else printf("52");
        exit(0);
    }
    else
    {
        if(n > 29 && n != 31){
            printf("11");
        }
        else if(n > 30)printf("7");
        else    printf("12");

        exit(0);
    }
    return 0 ;
}

