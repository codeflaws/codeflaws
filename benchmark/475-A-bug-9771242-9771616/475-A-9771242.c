#include<stdio.h>

int main(int argc, char *argv[])
{
    char a[150][150];
    int i,j,b,c,m=0;
    scanf("%d",&b);
    for(i=0; i<11; i++)
    {
        for(j=0; j<4; j++)
        {
            if(j==2)
                a[j][i]='.';
            else
                a[j][i]='#';

        }
    }
    if(b!=0){
    for(i=0; i<11; i++)
    {
        for(j=0; j<4; j++)
        {
            if(j==2&&i>=1)
                a[j][i]='.';
            else
            {
                a[j][i]='O';
                m++;
            }
            if(m==b)
                break;
        }
        if(m==b)
            break;
    }}


    printf("+------------------------+\n");

    for(i=0; i<4; i++)
    {
        printf("|");
        for(j=0; j<11; j++)
        {
            printf("%c.",a[i][j]);
        }
        if(i==0)
            printf("|D|)\n");
        else if(i==1)
            printf("|.|\n");
        else if(i==2)
            printf("..|\n");
        else
            printf("|.|)\n");

    }
    printf("+------------------------+");

    return 0;
}
