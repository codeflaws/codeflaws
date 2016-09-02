#include <stdio.h>

int main(int argc, char *argv[])
{
    int i,s,a,b;

    scanf("%d",&s);

    if(s>=0 && s<=20) {
        if(s==0)
            printf("zero");
        else if(s==1)
            printf("one");
        else if(s==2)
            printf("two");
        else if(s==3)
            printf("three");
        else if(s==4)
            printf("four");
        else if(s==5)
            printf("five");
        else if(s==6)
            printf("six");
        else if(s==7)
            printf("seven");
        else if(s==8)
            printf("eight");
        else if(s==9)
            printf("nine");
        else if(s==10)
            printf("ten");
        else if(s==11)
            printf("eleven");
        else if(s==12)
            printf("twelve");
        else if(s==13)
            printf("thirteen");
        else if(s==14)
            printf("fourteen");
        else if(s==15)
            printf("fifteen");
        else if(s==16)
            printf("sixteen");
        else if(s==17)
            printf("seventeen");
        else if(s==18)
            printf("eighteen");
        else if(s==19)
            printf("nineteen");
        else if(s==20)
            printf("twenty");
    }


    else {
        for(i=0,s;i<2 && s>0;i++,s=s/10) {
            if(i==0)
                b = s%10;
            else
                a = s%10;

        }
        if(a==2)
            printf("twenty");
        else if(a==3)
            printf("thirty");
        else if(a==4)
            printf("forty");
        else if(a==5)
            printf("fifty");
        else if(a==6)
            printf("sixty");
        else if(a==7)
            printf("seventy");
        else if(a==8)
            printf("eighty");
        else if(a==9)
            printf("ninety");

        else if(b == 1)
            printf("-one");
        else if(b==2)
            printf("-two");
        else if(b==3)
            printf("-three");
        else if(b==4)
            printf("-four");
        else if(b==5)
            printf("-five");
        else if(b==6)
            printf("-six");
        else if(b==7)
            printf("-seven");
        else if(b==8)
            printf("-eight");
        else if(b==9)
            printf("-nine");

    }

    return 0;


}
