#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv[])
{
    char str[200];
    int i,len,c1=0,c2=0,c3=0,c4=0;
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]>='a' && str[i]<='z'){
            c1++;
        }
        if(str[i]>='A' && str[i]<='Z'){
            c2++;
        }
        if(str[i]>='0' && str[i]<='9'){
            c3++;
        }
        if(str[i]=='!' || str[i]=='?' || str[i]=='.' || str[i]==',' || str[i]=='_'){
            c4++;
        }
    }
    if(len>=5){
        if(c1>=1 && c2>=1 && c3>=1 && c4>=1){
            printf("Correct\n");
        }
        else{
            printf("Too weak\n");
        }
    }
    else{
        printf("Too weak\n");
    }
    return 0;
}