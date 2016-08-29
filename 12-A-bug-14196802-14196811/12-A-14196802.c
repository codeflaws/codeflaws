#include <stdio.h>
#include <string.h>
//#include <conio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int i;
    char mat[3][4];

    for(i=0; i<3; i++) scanf("%s", mat[i]);

    if(mat[0][0] == mat[2][2] && mat[0][1] == mat[2][1] && mat[0][2] == mat[0][2] && mat[1][0] == mat[1][2]) printf("YES");
    else printf("NO");

    return 0;
}
