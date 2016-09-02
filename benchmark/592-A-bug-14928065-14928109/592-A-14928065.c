#include <stdio.h>
int main(int argc, char *argv[])
{
    int x=0,y=0,i,p=0,j,g=0,f=0,h=0,k=0,finalB=0,finalW=0;
    char str[100][100];
    for(i=0;i<8;i++){
        scanf("%s",str[i]);
    }
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(str[j][i]=='B'){
                x=j+1;
                if(p==0){
                    h=x;
                }
                p++;
            }
            if(str[j][i]=='W'){
                y=j+1;
                if(f==0){
                    g=9-y;
                }
                f++;
            }
        }
      //printf("%d %d %d\n",x,y,g);
        if(x>y||x==0||y==0){
            if(x>=finalB){
                finalB=x;
            }
            if(h==0){
                if(g>=finalW){
                    finalW=g;
                }
            }
            if(h!=0){
                if(g>=finalW&&g>(9-h)){
                    finalW=g;
                }
            }
        }
        else if(x<y){
            if(g>(9-x)&&g>=finalW){
                finalW=g;
            }
        }
        p=0;
        f=0;
        x=0;
        y=0;
        g=0;
        h=0;
    }
    if(finalW>=finalB){
        printf("A");
    }
    else{
        printf("B");
    }
    //printf("\n%d %d",finalB,finalW);
    return 0;
}
