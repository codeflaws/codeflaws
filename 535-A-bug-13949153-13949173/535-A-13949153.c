#include <stdio.h>


void malen(int n)
{
    if(n==1)printf("-one");
    else if(n==2)printf("-two");
    else if(n==3)printf("-three");
    else if(n==4)printf("-four");
    else if(n==5)printf("-five");
    else if(n==6)printf("-six");
    else if(n==7)printf("-seven");
    else if(n==8)printf("-eight");
    else if(n==9)printf("-nine");
}
void bol(int n)
{
    if(n==20)printf("twenty");
    else if(n==30)printf("thirty");
    else if(n==40)printf("forty");
    else if(n==50)printf("fifty");
    else if(n==60)printf("sixty");
    else if(n==70)printf("seventy");
    else if(n==80)printf("eighty");
    else if(n==90)printf("ninety ");
}
int main(int argc, char *argv[])
{
    int n;scanf("%d",&n);
    if(n==0)printf("zero");
    else if(n==1)printf("one");
    else if(n==2)printf("two");
    else if(n==3)printf("three");
    else if(n==4)printf("four");
    else if(n==5)printf("five");
    else if(n==6)printf("six");
    else if(n==7)printf("seven");
    else if(n==8)printf("eight");
    else if(n==9)printf("nine");
    else if(n==10)printf("ten");
    else if(n==11)printf("eleven");
    else if(n==12)printf("twelve");
    else if(n==13)printf("thirteen");
    else if(n==14)printf("fourteen");
    else if(n==15)printf("fifteen");
    else if(n==16)printf("sixteen");
    else if(n==17)printf("seventeen");
    else if(n==18)printf("eighteen");
    else if(n==19)printf("nineteen");
    else {bol(n/10*10);malen(n%10);}
    
    
    return 0;
}