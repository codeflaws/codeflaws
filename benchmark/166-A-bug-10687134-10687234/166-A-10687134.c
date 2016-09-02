#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i , teams , pos , prob , time , max_prob = 0 ,found = 0, max_time = 0 , mat[50][50] = {0} , counter=0;
    scanf("%d %d" , &teams ,&pos);
    for(i = 0 ; i < teams ; i++){
        scanf("%d %d" , &prob  ,&time);
        mat[prob][time] ++ ;
        if(prob > max_prob)max_prob = prob;
        if(time > max_time)max_time = time;
    }

    for(prob = max_prob ; prob > 0 && !found;prob--){
        for(time = 0 ; time <= max_time && !found; time++){
            counter += mat[prob][time];
            if(counter >= pos){
                printf("%d" , mat[prob][time]);
                found = 1 ;
            }
        }
    }
    if(!found)printf("%d" , 0);
    return 0;
}