#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char ch,str[200];
    char s[]="qwertyuiopasdfghjkl;zxcvbnm,./";
    int i,len,j,l;
    scanf("%c",&ch);
    scanf("%s",str);
    len=strlen(str);
    l=strlen(s);
    if(ch=='R'){
        for(i=0;i<len;i++){
            for(j=0;j<l;j++){
                if(str[i]==s[j]){
                    str[i]=s[j-1];
                }
            }
        }
        printf("%s\n",str);
    }
    else{
        for(i=0;i<len;i++){
            for(j=0;j<l;j++){
                if(str[i]==s[j]){
                    str[i]=s[j+1];
                }
            }
        }
        printf("%s\n",str);
    }
    return 0;

}