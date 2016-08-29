#include<stdio.h>

int main(int argc, char *argv[])
{
    char s[12];
    int i;
    scanf("%d %[^\n]", &i, s);
    //gets(s);
    if(s[3]=='w'){
        if(i==5 || i==6) printf("53");
        else printf("52");
    }
    else{
        if(i==28) printf("12");
        else if(i>28 && i<31) printf("11");
        else if(i==31) printf("7");
        else printf("12");
    }
    return 0;
}
