#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char str[100];
    gets(str);
    int ara[26];
    int i;
    int count=0;
    for(i=0;i<26;i++){
        ara[i]=0;
    }
    for(i=0;i<strlen(str);i++){
        ara[str[i]-97]++;
    }
    for(i=0;i<26;i++){
        if(ara[i]==1 || ara[i]==2){
            count++;
        }
    }
    if(count%2==0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
return 0;
}
