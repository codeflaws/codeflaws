#include <stdio.h>

int main(int argc, char *argv[])
{
    int hour,minute;
    float ansH,ansM;

    scanf("%d:%d",&hour,&minute);

    hour=hour%12;
    ansH=(60*hour+minute)/2.0;
    ansM=6*minute;

    printf("%.1f %.0f\n",ansH,ansM);

    return 0;
}
