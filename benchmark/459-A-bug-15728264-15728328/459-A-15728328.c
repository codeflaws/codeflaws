#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[]){
    int x1,x2,y1,y2,x3,x4,y3,y4,a;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    if(x1==x2){
        a=abs(y1-y2);
        if(x1>0){
           x3=x1-a;
           x4=x2-a;
           y3=y1;
           y4=y2;
        }
        else{
           x3=x1+a;
           x4=x2+a;
           y3=y1;
           y4=y2;
        }
        printf("%d %d %d %d",x3,y3,x4,y4);
    }
    else if(y1==y2){
        a=abs(x1-x2);
        if(y1>0){
           y3=y1-a;
           y4=y2-a;
           x3=x1;
           x4=x2;
        }
        else{
           y3=y1+a;
           y4=y2+a;
           x3=x1;
           x4=x2;
        }
        printf("%d %d %d %d",x3,y3,x4,y4);
    }
    else if(x1!=x2 && y1!=y2){
        if(abs(y1-y2)==abs(x1-x2)){
           a=x2-x1;
           x4=x2;
           y4=y1;
           x3=x1;
           y3=y2;
           printf("%d %d %d %d",x3,y3,x4,y4);
        }
        else{
            printf("-1");
        }
    }
return 0;
}
