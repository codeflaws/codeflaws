#include<stdio.h>

int md[13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

int day(int y, int m, int d){
    int ans = (y - 1900) * 365 + md[m] + d;
    ans += (y - 1900 + 3) / 4;
    ans -= (y - 1900 + 99) / 100;
    ans += (y - 1900 + 399) / 400;
    if (!(y % 4) && ((y % 100) || !(y % 400)) && m > 2)++ans;
    return ans;
}

int main(int argc, char *argv[]){
    int y, m, d, y2, m2, d2;
    scanf("%d:%d:%d", &y, &m, &d);
    scanf("%d:%d:%d", &y2, &m2, &d2);
    int day1 = day(y, m, d), day2 = day(y2, m2, d2);
    printf("%d\n", day1 > day2 ? day1 - day2 : day2 - day1);
    return 0;
}