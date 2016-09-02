#include<stdio.h>
int main(int argc, char *argv[]){
 int a,b,c,d,e;
 int white=0,black=0;
 int i;
 for(i=0;i<8;i++){
     char input;
    while((input=getchar())!='\n'){
    if(input=='B' || input == 'N'){
    white+=3;
    }
    else if(input=='R'){
    white+=5;}
    else if(input=='Q'){
    white+=9;
    }
    else if(input=='P'){
    white+=1;}
    if(input=='b' || input == 'n'){
    black+=3;
    }
    else if(input=='r'){
    black+=5;}
    else if(input=='q'){
    black+=9;
    }
    else if(input=='p'){
    black+=1;}
    }
    printf("%d\n",white);
 }
 if(white==black){
        printf("Draw");
        return 0;
 }
 else white>black?printf("White"):printf("Black");
return 0;
}
