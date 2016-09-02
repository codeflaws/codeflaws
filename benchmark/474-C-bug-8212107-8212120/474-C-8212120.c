#include <stdio.h>
#include <stdlib.h>

void rotate(int* mole_x, int* mole_y) {
    int temp = mole_x[0];
    mole_x[0] = -1 * mole_y[0];
    mole_y[0] = temp;
}

long long get_length(long long mole_x1, long long mole_y1, long long mole_x2, long long mole_y2){
    return (mole_x1 - mole_x2) * (mole_x1 - mole_x2) +
           (mole_y1 - mole_y2) * (mole_y1 - mole_y2);
}

int compare_int(const void* a, const void* b) {
    if (*(long long*) a < *(long long*) b) {
        return -1;
    }
    else if (*(long long*) a > *(long long*) b) {
        return 1;
    }
    else {
        return 0;
    }
}

void print_array(int* temp, int count) {
    int i;
    for (i = 0; i < count; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
}

int check_for_square(int* mole_x, int* mole_y, int* home_a, int* home_b) {
    long long temp[6];
    int i;

    for (i = 0; i < 3; i++) {
        temp[i] = get_length(mole_x[i] + home_a[i], mole_y[i] + home_b[i], mole_x[i + 1] + home_a[i + 1], mole_y[i + 1] + home_b[i + 1]);
    }

    
    temp[3] = get_length(mole_x[0] + home_a[0], mole_y[0] + home_b[0], mole_x[3] + home_a[3], mole_y[3] + home_b[3]);
    temp[4] = get_length(mole_x[0] + home_a[0], mole_y[0] + home_b[0], mole_x[2] + home_a[2], mole_y[2] + home_b[2]);
    temp[5] = get_length(mole_x[1] + home_a[1], mole_y[1] + home_b[1], mole_x[3] + home_a[3], mole_y[3] + home_b[3]);

    // printf("before sort\n");
    // print_array(temp, 6);    
    qsort(temp, 6, sizeof(long long), &compare_int);
    // printf("after sort\n");
    // print_array(temp, 6);

    if ((temp[0] == temp[3]) && (temp[4] == temp[5]) && (temp[4] > temp[3])) {
        return 1;
    }
    else {
        return 0;
    }
}

void get_steps(int* mole_x, int* mole_y, int* home_a, int* home_b, int* min_steps) {
    int i;
    int j;
    int k;
    int l;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
             for (k = 0; k < 4; k++){
                for (l = 0; l < 4; l++) {
                    // printf("i: %d j: %d k: %d l: %d\n", i, j, k, l);
                    if (check_for_square(mole_x, mole_y, home_a, home_b) == 1) {
                        if ((i + j + k + l) < *min_steps) {
                            *min_steps = i + j + k + l;
                        }
                    }
                    rotate(&mole_x[0], &mole_y[0]);
                }
                rotate(&mole_x[1], &mole_y[1]);
            }
            rotate(&mole_x[2], &mole_y[2]);
        }
        rotate(&mole_x[3], &mole_y[3]);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d\n", &n);

    int mole_x[4];
    int mole_y[4];
    int home_a[4];
    int home_b[4];

    int i;
    int j = 0;

    while (j < 4 * n) {
        // printf("j: %d\n", j);
        int min_steps = 20;
        for (i = 0; i < 4; i++) {
            scanf("%d %d %d %d\n", &mole_x[i], &mole_y[i], &home_a[i], &home_b[i]);

            mole_x[i] -= home_a[i];
            mole_y[i] -= home_b[i];
        }

        get_steps(mole_x, mole_y, home_a, home_b, &min_steps);

        if (min_steps == 20) {
            printf("-1\n");
        }
        else {
            printf("%d\n", min_steps);
        }

        j = j + i;
        // printf("j: %d\n", j);
    }

    return 0;
}