#include <stdio.h>
#include <string.h>

char sequence[2001];

int main(int argc, char *argv[]){
    int num,time,t=0,count=0;
    scanf("%d",&num);
    scanf("%s",sequence);
    time = strlen(sequence);
    t=num;
    while(t<=time){
        if(sequence[t-3]==sequence[t-2] && sequence[t-2]==sequence[t-1])count++;
        t+=num;
    }
    if(time%t==1)count--;
    printf("%d\n",count);
    return 0;
}