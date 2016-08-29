#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int r , x1 ,y1 ,x2,y2;
    scanf("%d %d %d %d %d",&r,&x1,&y1,&x2,&y2);
    double distance =sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    int steps = ceil(distance/(2*r));                 // ceil t2rb above  2.4 : 3     2.7:3      2.1:3
    printf("%d",steps);
    return 0;
}
