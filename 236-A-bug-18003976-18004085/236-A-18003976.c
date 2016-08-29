#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char a[100];
    printf("enter the name");
    scanf("%s",a);
    int b=(strlen(a)-1);int i,j,c=0;
    for(i=0;i<=b;i++)
    {
        int k=0;

        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
                k=1;
        }
        if(k==0)
            c++;

    }

    if(c%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
        return 0;
}
