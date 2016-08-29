#include<stdio.h>
#include<math.h>
int x,y,xi,yi;

int main(int argc, char *argv[])
{
    scanf("%d%d",&x,&y);
    xi=abs(x)+abs(y);
    if(x>0&&y>0)
    printf("%d %d %d %d\n",0,xi,xi,0);
    if(x<0&y>0)
    printf("%d %d %d %d\n",-xi,0,0,xi);
    if(x<0&y<0)
    printf("%d %d %d %d\n",-xi,0,0,-xi);
    if(x>0&y<0)
    printf("%d %d %d %d\n",0,-xi,-xi,0);
    
    return 0;
}
