#include<stdio.h>
char str[8][8],ch;
int main(int argc, char *argv[])
{
    int i,j,a=0,b=0;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            scanf("%c",&str[i][j]);
        }
        scanf("%c",&ch);
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(str[i][j]=='Q')
            {
                a+=9;
            }
            else if(str[i][j]=='R')
            {
                a+=5;
            }
            else if(str[i][j]=='B')
            {
                a+=3;
            }
            else if(str[i][j]=='N')
            {
                a+=3;
            }
            else if(str[i][j]=='P')
            {
                a++;
            }
            else if(str[i][j]=='q')
            {
                b+=9;
            }
            else if(str[i][j]=='r')
            {
                b+=5;
            }
            else if(str[i][j]=='b')
            {
                b+=3;
            }
            else if(str[i][j]=='n')
            {
                b+=3;
            }
            else if(str[i][j]=='p')
            {
                b+=3;
            }
        }
    }
    if(a>b)
    printf("White");
    else if(a<b)
    printf("Black");
    else
    printf("Draw");

    return 0;
}
