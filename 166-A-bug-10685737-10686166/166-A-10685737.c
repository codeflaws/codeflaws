#include <stdio.h>
#include <stdlib.h>

struct team{
    int probs;
    int penalty;
};
int teamsComp(struct team t1 , struct team t2){
    if(t1.probs > t2.probs){
        return 1;
    }
    else if(t1.probs == t2.probs && t1.penalty > t2.penalty){
        return 1;
    }
    else if(t1.probs == t2.probs && t1.penalty == t2.penalty){
        return 0;
    }
    else{
        return 2;
    }
}
int main(int argc, char *argv[])
{
    struct team lista[50];
    int n = 0;
    int k = 0;
    int num = 1;
    int counter = 0;
    int counter2 = 0;
    int flag = 0;
    struct team swa;
    scanf("%d" , &n);
    scanf("%d" , &k);
    for(counter = 0; counter < n; counter ++){
        scanf("%d" , &lista[counter].probs);
        scanf("%d" , &lista[counter].penalty);
    }
    for(counter = 1; counter < n; counter ++){
        flag = 0;
        for(counter2 = n - 1; counter2 >= counter; counter2 --){
            if(teamsComp(lista[counter2] , lista[counter2 - 1]) == 1){
                flag = 1;
                swa = lista[counter2];
                lista[counter2] = lista[counter2 - 1];
                lista[counter2 - 1] = swa;
            }
        }
        if(!flag){
            break;
        }
    }
    counter = k - 2;
    while(!teamsComp(lista[k - 1] , lista[counter]) && counter >= 0){
        num ++;
        counter --;
    }
    counter = k;
    while(!teamsComp(lista[k - 1] , lista[counter]) && counter < n){
        num ++;
        counter ++;
    }
    printf("%d" , num);
    return 0;
}
