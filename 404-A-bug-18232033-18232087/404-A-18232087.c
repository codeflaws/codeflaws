#include <stdio.h>


int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    int i,j;
    char a[301][301];
    for ( i = 0; i < n; i++)
        scanf("%s", a[i]);
    int ok = 1;
    for (i = 0; i < n; i++)
        if (!((a[0][0] == a[i][i]) && (a[0][0] == a[n-1-i][i]))) ok = 0;
    for ( i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if ((i != j) && (i+j != n-1))
                if (!((a[i][j] != a[0][0]) && (a[i][j] == a[0][1]))) ok = 0;
    if (ok) printf("YES");else printf("NO");
    return 0;
}
