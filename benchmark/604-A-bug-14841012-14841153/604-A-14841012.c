#include <stdio.h>

int cal(int, int, int);

int main(int argc, char *argv[])
{
    unsigned int time[5];
    int mistake[5];
    int hack[2];
    int score[5];
    int i;
    int result = 0;
    
    while (5 == scanf("%d %d %d %d %d", &time[0], &time[1], &time[2], &time[3], &time[4]))
    {
        getchar();
        scanf("%d %d %d %d %d", &mistake[0], &mistake[1], &mistake[2], &mistake[3], &mistake[4]);
        getchar();
        scanf("%d %d", &hack[0], &hack[1]);
        getchar();
        for (i = 0; i < 5; i++)
            score[i] = cal(time[i], mistake[i], i+1);
        for (i = 0; i < 5; i++)
            result += score[i];
        result += 100*hack[0];
        result -= 50*hack[1];
        printf("%d\n", result);
        result = 0;
    }

    return 0;
}

int cal(int time, int mistake, int i)
{
    int a, b;
    
    a = 0.3 * 500 * i;
    b = (250-time)*20*i - 50*mistake;
    
    return a > b ? a : b;
}