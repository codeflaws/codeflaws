#include<stdio.h>
int main(int argc, char *argv[])
{
int arr[5][5],crr[3][3];
int i,j,c;
for(i=0;i<5;i++)
    for(j=0;j<5;j++)
        arr[i][j]=0;
for(i=1;i<4;i++)
{
    for(j=1;j<4;j++)
        scanf("%d",&arr[i][j]);
}
        for(i=1;i<4;i++)
    for(j=1;j<4;j++)
    {
        c=arr[i][j]+arr[i+1][j]+arr[i-1][j]+arr[i][j+1]+arr[i][j-1]+arr[i+1][j+1]+arr[i-1][j-1];
        if(c%2==0)
            crr[i][j]=1;
        else
            crr[i][j]=0;
    }
    for(i=1;i<4;i++)
    {
        for(j=1;j<4;j++)
        printf("%d",crr[i][j]);
    printf("\n");
    }
    return 0;
}



