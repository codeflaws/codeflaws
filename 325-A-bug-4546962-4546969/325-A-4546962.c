//squares and rectangles
#include<stdio.h>
#include<limits.h>
struct point{

    int x[2];
    int y[2];

};
int main(int argc, char *argv[])
{

    int n,i,j,max_x=INT_MIN,max_y=INT_MIN;
    int min_x=INT_MAX,min_y=INT_MAX;
    long int area_rect=0;
    scanf("%d",&n);
    struct point p[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d%d",&p[i].x[0],&p[i].y[0],&p[i].x[1],&p[i].y[1]);
        if(max_x<p[i].x[1])
        max_x=p[i].x[1];
        if(max_y<p[i].y[1])
        max_y=p[i].y[1];
        if(min_x>p[i].x[0])
        min_x=p[i].x[0];
        if(min_y>p[i].y[0])
        min_y=p[i].y[0];
        area_rect+=(p[i].x[1]-p[i].x[0])*(p[i].y[1]-p[i].y[0]);
    }
    long int a=(max_x-min_x) *(max_y-min_y);
   // printf("%ld %ld",area_rect,a);
    if(area_rect==a )
    printf("YES\n");
    else
    printf("NO\n");
    return 0;





}
