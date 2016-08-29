#include <stdio.h>

int main(int argc, char *argv[]) {

    int s;
    char array[30][15] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                        "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen","eighteen", "nineteen", "twenty",
                        "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    scanf("%d", &s);

    if(s<=20) printf("%s\n", array[s]);
    else {
        if(!(s%10)) printf("%s\n", array[18+(s%10)]);
        else printf("%s-%s\n", array[18+(s/10)], array[s%10]);
    }

    return 0;
}
