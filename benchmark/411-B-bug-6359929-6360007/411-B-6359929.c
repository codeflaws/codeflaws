#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<ctype.h>
int cells[105]={0},cores[105]={0};
int main(int argc, char *argv[])
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int arr[105][105],i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            if(cores[i]==0)
            cells[arr[i][j]]++;
        }
        for(i=0;i<n;i++){
            if(cells[arr[i][j]]>1 && cores[i]==0)
                cores[i]=j+1;
        }
        for(i=0;i<=k;i++){
            if(cells[i]<=1)
                cells[i]=0;
        }

    }
    for(i=0;i<n;i++)
        printf("%d\n",cores[i]);
    return 0;
}
