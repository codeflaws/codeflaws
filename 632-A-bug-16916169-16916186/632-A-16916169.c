#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int n, p;
    scanf("%d %d", &n, &p);
    int arr[45];

    for (int i = 0; i < n; i++) {
        char t[10];
        scanf("%s", t);
        if (strcmp(t, "half") == 0) 
            arr[i] = 0;
        else
            arr[i] = 1;
    }

    int r = 0;
    for (int i = n - 1; i >= 0; i--) {
        r = r * 2 + arr[i];
    }

    long long s = 0;
    while (r) {
        s += r / 2.0 * p;
        r /= 2;
    }

    printf("%lld", s);
return 0;
}
        

