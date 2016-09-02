#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char i[1000000],j[100000],k[100000],l[100000];
    int Loop,Counter=0;

    scanf("%s%s%s%s",i,j,k,l);


    if(strcmp(i,j)!=0)
        Counter++;


    if(strcmp(i,k)!=0)
        Counter++;

    if(strcmp(i,l)!=0)
        Counter++;

    if(strcmp(j,k)!=0)
        Counter++;

    if(strcmp(j,l)!=0)
        Counter++;

    if(strcmp(k,l)!=0)
        Counter++;


    if(Counter==6)
        printf("0\n");
    else if(Counter==5)
        printf("1\n");
    else if(Counter==3 || Counter==4)
        printf("2\n");
    else
        printf("3\n");


    return 0;


}
