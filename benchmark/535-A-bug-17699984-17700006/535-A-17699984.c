#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,x,y;
    scanf("%d",&n);
    if(n>19)
    {
        y=n/10;
        x=n%10;

        if(y==2)printf("twenty");
        else if(y==3)printf("thirty");
        else if(y==4)printf("forty");
        else if(y==5)printf("fifty");
        else if(y==6)printf("sixty");
        else if(y==7)printf("seventy");
        else if(y==8)printf("eighty");
        else if(y==9)printf("ninety");
        if(x==1)printf("-one");
        else if(x==2)printf("-two");
        else if(x==3)printf("-three");
        else if(x==4)printf("-four");
        else if(x==5)printf("-five");
        else if(x==6)printf("-six");
        else if(x==7)printf("-seven");
        else if(x==8)printf("-eight");
        else if(x==9)printf("-nine");

    }
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

    return 0;
}
