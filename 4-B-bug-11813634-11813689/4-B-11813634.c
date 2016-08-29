#include<stdio.h>
int minTime[30], maxTime[30], solution[30];
void cpy(int des[30], int ori[30], int n){
    int i;
    for(i = 0; i<n; i++)
        des[i] = ori[i];
}
int solve(int d, int curSum, int total){
    int i, tmp;
    for(i = 0; i<d; i++){
        tmp = curSum - solution[i] + minTime[i];
        if(tmp >= total)
            solution[i] = minTime[i];
        else{
            solution[i] -= curSum-total;
            tmp  = total;
        }
        if(tmp == total)
            return 1;       
    }
}
int main(int argc, char *argv[]){
    int d, sumTime, i, sumMin = 0, sumMax = 0;
    scanf("%d%d", &d, &sumTime);
    for(i = 0; i<d; i++){
        scanf("%d%d", &minTime[i], &maxTime[i]);
        sumMin += minTime[i];
        sumMax += maxTime[i];
    }
    if(sumMin > sumTime || sumMax < sumTime)
        printf("NO\n");
    else{
        printf("YES\n");
        cpy(solution, maxTime, d);
        solve(d, sumMax, sumTime);
        for(i = 0; i<d; i++)
            printf("%d ", solution[i]);
        printf("\n");       
    }
        
return 0;
}