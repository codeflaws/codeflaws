#include<stdio.h>
int main(int argc, char *argv[])
{
    char a[8][8];
    int i,j,wd=8,bd=8;
    for(i=0;i<8;i++)
    {
        scanf("%s",a[i]);
    }
    for(j=0;j<8;j++)
    {
        for(i=0;i<8;i++)
        {
            if(a[i][j]=='B')
            {
                break;
            }
            else if(a[i][j]=='W')
            {
                if(i+1<wd)
                {
                   wd=i+1;
                }
                break;
            }
        }
    }
    for(j=0;j<8;j++)
    {
        for(i=7;i>=0;i--)
        {
            if(a[i][j]=='W')
            {
                break;
            }
            else if(a[i][j]=='B')
            {
                if(8-i<bd)
                {
                   bd=8-i;
                }
                break;
            }
        }
    }
    if(wd<bd)
     printf("A\n");
    if(bd<wd)
     printf("B\n");
    return 0;
}
