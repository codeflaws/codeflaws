#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int i,j,k;
    char s1[10],s2[10];
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%s",s1);
    scanf("%d",&i);
    if(strcmp(s1,"front")==0)
    {
        if(i==1)
            printf("L");
        else printf("R");
    }
    else
    {
        if(i==1)
            printf("R");
        else printf("L");
    }
    return(0);
}
