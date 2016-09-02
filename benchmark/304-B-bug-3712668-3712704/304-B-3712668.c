#include<stdio.h>
#include<math.h>
#include<string.h>
int is_leap(int n) {
    if (n % 4 == 0) {
        if (n % 400 == 0) {
            return 1;
        } else if (n % 100 == 0) {
            return 0;
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}
int main(int argc, char *argv[])
{
    int i,max,min;
    long long int ans;
    char a[100],b[100];
    int d[2],m[2],y[2];
    scanf("%s%s",a,b);
    y[0] = y[1] = 0;
    for (i = 0; i < 4; i++) {
        y[0] += (a[i] - 48) * pow(10,3 - i);
        y[1] += (b[i] - 48) * pow(10,3 - i);
    }
    m[0] = (a[5] - 48) * 10 + a[6] - 48;
    m[1] = (b[5] - 48) * 10 + b[6] - 48;
    d[0] = (a[8] - 48) * 10 + a[9] - 48;
    d[1] = (b[8] - 48) * 10 + b[9] - 48;
    if (y[0] == y[1]) {
        if (m[0] == m[1]) {
            if (d[0] > d[1]) {
                max = 0;
            } else {
                max = 1;
            }
        } else if (m[0] > m[1]) {
            max = 0;
        } else {
            max = 1;
        }
    } else if (y[0] > y[1]) {
        max = 0;
    } else {
        max = 1;
    }
    if (max == 0) {
        min = 1;
    } else {
        min = 0;
    }
//    printf("%d %d %d %d\n",max,d[max],m[max],y[max]);
//    printf("%d %d %d %d\n",min,d[min],m[min],y[min]);
    ans = 0;
    if (m[min] == 2) {
        if (is_leap(y[min]) == 1) {
            ans += 29 - d[min];
        } else {
            ans += 28 - d[min];
        }
    } else if (m[min] == 4 || m[min] == 6 || m[min] == 9 || m[min] == 11) {
        ans += 30 - d[min];
    } else {
        ans += 31 - d[min];
    }
//    printf("%lld\n",ans);
    m[min]++;
    for (i = m[min]; i <= 12; i++) {
        if (i == 2) {
            if(is_leap(y[min]) == 1) {
                ans += 29;
            } else {
                ans += 28;
            }
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            ans += 30;
        } else {
            ans += 31;
        }
    }
//    printf("%lld\n",ans);
    y[min]++;
    for (i = y[min]; i < y[max]; i++) {
        if (is_leap(i) == 1) {
            ans += 366;
        } else {
            ans += 365;
        }
    }
//    printf("%lld\n",ans);
    for (i = 1; i < m[max]; i++) {
        if (i == 2) {
            if (is_leap(y[max]) == 1) {
                ans += 29;
            } else {
                ans += 28;
            }
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            ans += 30;
        } else {
            ans += 31;
        }
    }
    ans += d[max];
    if (y[max] == y[min]) {
        if (is_leap(y[max]) == 1) {
            ans -= 366;
        } else {
            ans -= 365;
        }
    }
    printf("%lld\n",ans);
    return 0;
}