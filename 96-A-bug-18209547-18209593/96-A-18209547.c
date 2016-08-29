#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char p[100];
    int i,count=0;
    gets(p);
    for(i=0;i<strlen(p);i++){
        if(p[i]==p[i+1]){
            count++;
        }
        if(count>=6)
            break;
    }
    if(count>=6)
        printf("YES");
    else
        printf("NO");

    return 0;
}
