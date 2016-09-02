#include <stdio.h>
#include <string.h>
char s[100][100];
int main(int argc, char *argv[])
{
    int i,j,black=0,white=0,res,p=0,k=0;
    for(i=0;i<4;i++){
        scanf("%s",s[i]);
    }
    int x=0,y=0;
    while(1){
        for(i=x;i<(x+2);i++){
            for(j=y;j<(y+2);j++){
                if(s[i][j]=='#'){
                    black++;
                }
                else white++;
            }
        }
        if(black>=3 || white >=3){
            res=1;
            break;
        }
        else {
            black = 0;
            white =0;
        }
        k++;
        //if(k==2){
          //  k=0;
            y++;
        //}
        if(y==3){
            y=0;
            x++;
            p++;
        }
        if(p==2){
            res=0;
            break;
        }
    }
    if(res) printf("YES");
    else printf("NO");


    return 0;
}

