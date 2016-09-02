#include <stdio.h>
#define abs(a) (((a) < 0) ? (-(a)): (a))

typedef struct pair{
    double x;
    int y;
} pair;

pair ans[50][50];
int cnt[50], n, m;
double w, v;

double eps = 0.00000000001;

int eq(double a, double b){
    return abs(a - b) < eps;
}

int main(int argc, char *argv[])
{
    scanf("%d%lf%d", &n, &w, &m);
    v = (w * n) / m;
    if(v * 2 < m || (n < m && n % (m - n))){
        printf("NO");
        return 0;
    }
    int i, j, curr = 0;
    double space = v;
    for(i = 0; i < n; ++i){
        if(w < space || eq(w, space)){
            ans[curr][cnt[curr]].y = i;
            ans[curr][cnt[curr]].x = w;
            ++cnt[curr];
            space -= w;
        } else {
            ans[curr][cnt[curr]].y = i;
            ans[curr][cnt[curr]].x = space;
            ++cnt[curr];
            ++curr;
            ans[curr][cnt[curr]].y = i;
            ans[curr][cnt[curr]].x = w - space;
            ++cnt[curr];
            space = v - (w - space);
        }
        if(eq(space, 0)){
                ++curr;
                space = v;
        }
    }
    printf("YES\n");
    for(i = 0; i < m; ++i){
        for(j = 0; j < cnt[i]; ++j){
            printf("%d %.8lf ", ans[i][j].y + 1, ans[i][j].x);
        }
        printf("\n");
    }

    return 0;
}
