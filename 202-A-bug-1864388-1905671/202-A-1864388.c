#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

    char string[11],big;
    int n=0,count=0,i;
    
    //printf("ahit?");
    scanf("%s",string);
    big=string[0];
//  printf("%c",big);

    while(string[n]!='\0'){
        //printf("fuck you!!");

        if(string[n]>big){
            big=string[n];
            printf("yoyo");
        }
        n++;
    }
    n=0;
    while(string[n]!='\0'){
        if(string[n]==big){
            count++;
        }
        n++;
    }
    for(i=0;i<count;i++){
        printf("%c",big);
    }

    return 0;

}
