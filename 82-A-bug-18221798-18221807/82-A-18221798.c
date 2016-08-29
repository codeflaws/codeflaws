//82 CF
#include<stdio.h>

int main(int argc, char *argv[])
{

    int n;

    scanf("%d",&n);

    while(n>5)
       {

        n =(n-4)/2;
       }

    if(n==1)
    printf("sheldon");
    else if(n==2)
    printf("Leonard");
    else if(n==3)
    printf("Penny");
    else if(n==4)
    printf("Rajesh");
    else if(n==5)
    printf("Howard");




    return 0;
}
