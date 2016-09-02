#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[]) {
    double d,rad;
    int x1,y1,r1,x2,y2,r2;
    scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
    d = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    if(r2>r1) 
        r1 = r1+r2-(r2=r1);
    if(d+(double)r2<=(double)r1)
        rad = -(d+r2)+r1;
    else if((r1+r2)>d)
        rad = (r1+r2) - d;
    else
        rad = d -(r1+r2);
    printf("%.15lf\n", rad/2); 
    return 0;
}
