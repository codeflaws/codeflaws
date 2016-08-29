#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
   char str[100];
   gets(str);
   int i;
    int count=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]==str[i+1]){
            count++;
        }
        else{
            count=0;
        }
        if(count>=6){
            break;
        }
    }
    if(count>=6){
        printf("YES");
    }
    else{
        printf("No");
    }
return 0;
}