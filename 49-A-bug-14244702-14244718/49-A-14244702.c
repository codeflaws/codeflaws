#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, char *argv[])
{
    char str[200];
    int i,len;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++){
        str[i]=tolower(str[i]);
    }
    for(i=len-1;i>=0;i--){
        if(str[i]>='a' && str[i]<='z'){
            if(str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='i' || str[i]=='u' || str[i]=='y'){
                printf("YES\n");
                break;
            }
            else{
                printf("No\n");
                break;
            }
        }
    }
    return 0;
}