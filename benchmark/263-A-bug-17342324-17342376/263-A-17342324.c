#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
int org[5][5],x=0,y=0,i,j
;

for ( i=0;i<5;i++){
    for ( j=0;j<5;j++){
    scanf("%d",&org[i][j]);
    if (org[i][j]==1){
        y=i;
        x=j;
    }
    }
}

    printf("%d",abs(i-2)+abs(j-2));

    return 0;
}
