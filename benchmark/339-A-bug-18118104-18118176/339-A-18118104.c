#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char str[101];
    int i,t,j;
    gets(str);


    for(i=0;i<strlen(str);i=i+2){
        for(j=0;j<strlen(str)-1;j=j+2){
            if(str[j+2]<str[j]){
                t=str[j];
                str[j]=str[j+2];
                str[j+2]=t;
            }
        }

    }

    for(i=0;i<101;i++){
        printf("%c",str[i]);
    }
    return 0;
}
