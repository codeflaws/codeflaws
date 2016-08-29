#include <stdio.h>

#define INF 2000000000

typedef struct {
    int first, last;
    int prev, next;
} Rec;

Rec rec[50000];
int size;

int a[100000];

int main(int argc, char *argv[]) {
    int i, j;
    int n, k;

    scanf("%d %d ", &n, &k);

    for (i = 0; i < n; i++) {
        int ch = getchar();
        if (ch == '?') {
            getchar();
            a[i] = INF;
        } else {
            ungetc(ch, stdin);
            scanf("%d ", a + i);
        }
    }

    for (i = 0; i < k; i++) {
        int mode;

        size = mode = 0;
        for (j = i; j < n; j += k)
            if (a[j] == INF) {
                if (!mode) {
                    mode = 1;
                    rec[size].first = j;
                    rec[size].prev = j - k >= 0 ? a[j - k] : -INF;
                }
            } else
                if (mode) {
                    mode = 0;

                    rec[size].last = j - k;
                    rec[size].next = a[j];

                    if (rec[size].prev >= rec[size].next) {
                        puts("Incorrect sequence");
                        return 0;
                    }

                    size++;
                } else
                    if (j - k >= 0)
                        if (a[j - k] >= a[j]) {
                            puts("Incorrect sequence");
                            return 0;
                        }

        if (mode) {
            rec[size].last = j - k;
            rec[size].next = INF;

            if (rec[size].prev >= rec[size].next) {
                puts("Incorrect sequence");
                return 0;
            }

            size++;
        }

        while (size) {
            Rec r = rec[--size];
            int num = (r.last - r.first) / k + 1;

            if (r.next - r.prev - 1 < num) {
                puts("Incorrect sequence");
                return 0;
            }

            if (r.next <= 0) {
                int tmp = 1;
                for (j = r.last; j >= r.first; j -= k)
                    a[j] = r.next - tmp++;
            } else if (r.prev < 0 && r.next > 0) {
                int tmp;
                int left = -(num / 2), right = left + num - 1;

                if (!(r.prev < left))
                    left = r.prev + 1;
                else if (!(right < r.next)) {
                    right = r.next - 1;
                    left = right - num + 1;
                }

                tmp = 0;
                for (j = r.first; j <= r.last; j += k)
                    a[j] = left + tmp++;
            } else {
                int tmp = 1;
                for (j = r.first; j <= r.last; j += k)
                    a[j] = r.prev + tmp++;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);


    return 0;
}
