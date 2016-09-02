#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int N;
char Ans[100][100] = {"",
"Washington", "Adams", "Jefferson", "Madison", "Monroe",
"Quincy Adams", "Jackson", "Van Buren", "Harrison", "Tyler",
"Polk", "Taylor", "Fillmore", "Pierce", "Buchanan",
"Lincoln", "Johnson", "Grant", "Hayes", "Garfield",
"Arthur", "Cleveland", "Harrison", "Cleveland", "McKinley",
"Roosevelt", "Taft", "Wilson", "Harding", "Coolidge",
"Hoover", "Roosevelt", "Truman", "Eisenhower", "Kennedy",
"Johnson", "Nixon", "Ford", "Carter", "Reagan"
};

int main(int argc, char *argv[]){
    scanf("%d", &N);
    
    printf("%s\n", Ans[N]);
    
    
    return 0;
}
