#include <stdio.h>

int main(int argc, char *argv[]) {
   int x1,y1,x2,y2,x3,y3,x4,y4;
   scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
   if(x2==x1 && y2!=y1)
    { x3=(y2-y1)+x1;
     y3=y1;
     x4=x3;
     y4=y2;
     printf("%d %d %d %d",x3,y3,x4,y4);
    }
    else if(y2==y1 && x2!=x1)
          { x3=x1;
            y3=(x2-x1)+y1;
            x4=x2;
            y4=y3;
            printf("%d %d %d %d",x3,y3,x4,y4);
          }
           else if(x2!=x1 && y2!=y1 && (x2-x1)==(y2-y1))
                 { x3=x2;
                  y3=y1;
                  x4=x1;
                  y4=y2;
                  printf("%d %d %d %d",x3,y3,x4,y4);
                 }
                 else if(x2!=x1 && y2!=y1 && (x2-x1)!=(y2-y1))
                        { printf("-1");
                        }
    return 0;
}