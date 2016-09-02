#include<stdio.h>
int main(int argc, char *argv[])
{
    int x;
    
    char c,s[5];
    scanf("%d %s %c",&x,s,&c);
    if(c=='m')
    {
        if(x==31)
            printf("7");
        if(x==30)
            printf("11");
        else printf("12");
    }
    if(c=='w')
    {
        if(x==5||x==6)
            printf("53");
        else 
        printf("52");
    }
    return 0;

}
