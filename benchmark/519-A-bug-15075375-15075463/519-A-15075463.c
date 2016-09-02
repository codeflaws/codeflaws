#include<stdio.h>
int main(int argc, char *argv[])
{
    char str[9][9],i;
    int count1=0,count2=0,j;
    for(i=0;i<8;i++)
    {
        scanf("%s",str[i]);
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(str[i][j]=='q')
            {
                count1=count1+9;
            }
            else if (str[i][j]=='r')
            {
                count1=count1+5;
            }
            else if (str[i][j]=='b' || str[i][j]=='n')
            {
                count1=count1+3;
            }
            else if (str[i][j]=='p')
            {
                count1=count1+1;
            }
            if(str[i][j]=='Q')
            {
                count2=count2+9;
            }
            else if (str[i][j]=='R')
            {
                count2=count2+5;
            }
            else if (str[i][j]=='B' || str[i][j]=='N')
            {
                count2=count2+3;
            }
            else if (str[i][j]=='P')
            {
                count2=count2+1;
            }
        }
    }
    if(count1>count2)
    {
        printf("Black");
    }
    else if(count1<count2)
    {
        printf("White");
    }
    else if (count1==count2)
    {
        printf("Draw");
    }
return 0;
}
