#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int i,j,m,n;
    int matrix[5][5];
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==1)
            {
                m=i;
                n=j;
            }
        }
        printf("%d%d",m,n);
    printf("%d\n",(abs(2-m)+abs(2-n)));
    return 0;
}

