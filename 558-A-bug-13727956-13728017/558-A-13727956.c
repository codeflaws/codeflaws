#include <stdio.h>

int main(int argc, char *argv[]){

    int n;
    scanf("%d", &n);

    int ppplus[100010] = {0}, ppminus[100010] = {0};
    int i, point, apple, nnplus = 0, nnminus = 0, ans = 0;

    for(i=0; i<n; i++){
        scanf("%d%d", &point, &apple);
        if(point>0){
            nnplus++;
            ppplus[point] = apple;
        }
        else{
            nnminus++;
            ppminus[-point] = apple;
        }
        ans += apple;
    }


    int diff, np = 100000;
    diff = nnplus - nnminus;


    if(diff==1||diff==0||diff==-1){
        printf("%d\n", ans);
    }
    else if(diff>0){
        for(i=0; i<diff-1; i++){
            while(ppplus[np]==0){
                np--;
            }
            ans-=ppplus[np];
            np--;
        }
        printf("%d\n", ans);
    }
    else{
        for(i=0; i<diff-1; i++){
            while(ppminus[np]==0){
                np--;
            }
            ans-=ppminus[np];
            np--;
        }
        printf("%d\n", ans);
    }


    return 0;
}
