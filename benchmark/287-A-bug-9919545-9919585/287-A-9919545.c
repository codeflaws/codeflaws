#include<stdio.h>
#include<stdbool.h>

char tab[5][5];
bool contour(int i,int j);

int main(int argc, char *argv[])
{
    int k=0;
    int i,j;

    for(i=0;i<4;i++)scanf("%s",tab[i]);

//main
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if (contour(i,j)){printf("YES \n"); k++; break; }

        }
        if(k!=0)break;
    }
    if(k==0)printf("NO \n");

    return 0;
}

bool contour(int i,int j)
{
    if     ((tab[i][j]==tab[i][j+1])&&(tab[i][j]==tab[i+1][j])){return 1;}
    else if((tab[i][j]==tab[i][j+1])&&(tab[i][j]==tab[i+1][j+1])){return 1;}
    else if((tab[i][j]==tab[i+1][j])&&(tab[i][j]==tab[i+1][j+1])){return 1;}
    else return 0;
}
