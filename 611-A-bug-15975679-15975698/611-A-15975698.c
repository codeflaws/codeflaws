#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int day;
    char name1[3],name2[10];
    scanf("%d %s %s",&day,name1,name2);
    if(name2[0]=='w'){
        if(day==5 || day==6){
            printf("53\n");
            return 0;
        }
        else{
            printf("52\n");
            return 0;
        }
        printf("52\n");
    }
    else if(day>30){
        printf("7\n");
    }
    else if(day==30){
        printf("11\n");
    }
    else if(day<30){
        printf("12\n");
    }
return 0;//ADDED
}
