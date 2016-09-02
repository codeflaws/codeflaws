#include<stdio.h>
#include<stdlib.h>

#define DEGREES_IN_CIRCLE 360
#define HOURS_ON_CLOCK 12
#define MINUTES_ON_CLOCK 60
#define DEGREES_PER_HOUR (DEGREES_IN_CIRCLE/HOURS_ON_CLOCK)
#define DEGREES_PER_MINUTE (DEGREES_IN_CIRCLE/MINUTES_ON_CLOCK)


int main (int argc, char *argv[]){
    
    int hh, mm;
    int min;
    float minOffset, hour;

    scanf("%d %d", &hh, &mm);

    //printf("%d %d\n", hh, mm);

    //Correct 24 Hour clock
    if (hh >= 12){
        hh -= 12;
    }

    //Calculate
    min = mm * DEGREES_PER_MINUTE;
    minOffset = ((float)mm/MINUTES_ON_CLOCK) * DEGREES_PER_HOUR;
    hour = ((float)hh * DEGREES_PER_HOUR) + minOffset;

    //Display the results
    printf("%f %d\n", hour, min);

    return EXIT_SUCCESS;
}
