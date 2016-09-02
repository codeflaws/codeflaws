#include<stdio.h>
int main(int argc, char *argv[])
{
    int t,white,black,opposite;
    scanf("%d",&t);
        scanf("%d%d",&black,&white);
        //Minimum of both ball goes to Aaquib's Points and remaining will make pair with Prashant as both play equally good
        opposite=black<white?black:white;
        printf("%d %d\n",black+white-1-opposite,opposite);
    return 0;
}