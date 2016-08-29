#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int restaurants[100][100];
    int numStreets, numAlleys;
    int i = 0, j = 0;
    int min = -1, curMin = -1, minRow = -1;
    
    fscanf(stdin, "%d", &numStreets);
    fscanf(stdin, "%d", &numAlleys);
    
    for(i = 0; i < numStreets; i++) {
        for(j = 0; j < numAlleys; j++) {
            fscanf(stdin, "%d", &restaurants[i][j]);
        }
    }
    
    for(i = 0; i < numStreets; i++) {
        curMin = -1;
        for(j = 0; j < numAlleys; j++) {
            if(curMin == -1) {
                curMin = restaurants[i][j];
            }
            else {
                if(restaurants[i][j]<curMin) {
                    curMin = restaurants[i][j];
                }
            }
        }
        if(min == -1) {
            min = curMin;
            minRow = i;
        }
        else {
            if(curMin > min) {
                min = curMin;
                minRow = i;
            }
        }
    }
    
    curMin = -1;
    for(j = 0; j < numStreets; j++) {
        if(curMin == -1) {
            curMin = restaurants[minRow][j];
        }
        else {
            if(restaurants[minRow][j] < curMin) {
                curMin = restaurants[minRow][j];
            }
        }
    }
    
    fprintf(stdout, "%d", curMin);
    
    return 0;
}