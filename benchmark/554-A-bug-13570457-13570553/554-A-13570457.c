#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    char s[20];
    int a,number;
    int answer;
    for(a=0;a<=19;a++){
        s[a]='\0';
    }
    scanf("%s",&s);
    for(a=0;a<=19;a++){
        if(s[a]!='\0')
            number=a+1;
    }
    //printf("%d\n",number);
    answer=26*(number+1)-number;
    printf("%d",answer);


}
