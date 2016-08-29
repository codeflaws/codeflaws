#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char str[10];
    int a,i,j;
    scanf("%s",str);
    scanf("%d",&a);
    i=strcmp(str,"back");
    j=strcmp(str,"front");
    if(!i){
        if(a%2==0){
            printf("L\n");
        }
        else{
            printf("R\n");
        }
    }
    if(!j){
        if(a%2==0){
            printf("R\n");
        }
        else{
            printf("L\n");
        }
    }
    return 0;
}