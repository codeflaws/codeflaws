#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int n,y,k,res;
    char str[100];
    scanf("%s",str);
    scanf("%d",&n);
    if(!strcmp(str,"January")){
       k=1;
    }
    else if(!strcmp(str,"February")){
       k=2;
    }
    else if(!strcmp(str,"March")){
       k=3;
    }
    else if(!strcmp(str,"April")){
        k=4;
    }
    else if(!strcmp(str,"May")){
        k=5;
    }
    else if(!strcmp(str,"June")){
        k=6;
    }
    else if(!strcmp(str,"July")){
        k=7;
    }
    else if(!strcmp(str,"August")){
        k=8;
    }
    else if(!strcmp(str,"September")){
        k=9;
    }
    else if(!strcmp(str,"October")){
        k=10;
    }
    else if(!strcmp(str,"November")){
        k=11;
    }
    else{
        k=12;
    }
    y=n+k;
    res=y%12;
    if(y==12){
        printf("December\n");
    }
    else if(res==1){
        printf("January\n");
    }
    else if(res==2){
        printf("February\n");
    }
    else if(res==3){
        printf("March\n");
    }
    else if(res==4){
        printf("April\n");
    }
    else if(res==5){
        printf("May\n");
    }
    else if(res==6){
        printf("June\n");
    }
    else if(res==7){
        printf("July\n");
    }
    else if(res==8){
        printf("August\n");
    }
    else if(res==9){
        printf("September\n");
    }
    else if(res==10){
        printf("October\n");
    }
    else if(res==11){
        printf("November\n");
    }
    else if(res==12){
        printf("December\n");
    }
    else{
        printf("%s\n",str);
    }
    return 0;
}