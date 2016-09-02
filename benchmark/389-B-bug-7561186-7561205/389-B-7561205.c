#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char a[105][105];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
            if(a[i][j]=='#')
            {
       if(a[i+1][j]=='#' && a[i+2][j]=='#' && a[i+1][j-1]=='#' && a[i+1][j+1]=='#')
       {
            a[i][j]='.';
            a[i+1][j]='.';
            a[i+2][j]='.';
            a[i+1][j-1]='.';
            a[i+1][j+1]='.';
    }
    else
    {
        printf("NO");
        return 0;

        }
            }
    }
    }

        printf("YES");
return 0;

}
