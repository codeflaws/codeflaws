#include <stdio.h>

int main(int argc, char *argv[]) {
    int i, d, sumTime, minTime[30], maxTime[30];
    scanf("%d %d", &d, &sumTime);


    int minst[30], maxst[30], Maxst = 0, Minst = 0, realList[30];
    for (i = 0; i < d; i++) {
        scanf("%d %d", &minTime[i], &maxTime[i]);
        Minst += minTime[i];
        Maxst += maxTime[i];
        minst[i] = Minst;
        maxst[i] = Maxst;
    }

    if (sumTime >= Minst && sumTime <= Maxst) {
        printf("YES\n");

        for (i = d-1; i > 0; i--) {
            int stage = maxTime[i];
            while (sumTime - stage < minst[i-1]) {
                stage--;
            }
            sumTime -= stage;
            realList[i] = stage;
        }
        realList[0] = sumTime;

        for (i = 0; i < d; i++)
            printf("%d ", realList[i]);
        printf("\n");
    } else
            printf("NO\n");
    return 0;
}
