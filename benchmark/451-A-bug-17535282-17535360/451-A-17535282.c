#include <stdio.h>


int main(int argc, char *argv[]) {
    int n,m;
    char* players[2] = { "Akshat", "Malvika" };
    scanf("%d %d", &n, &m);

    printf("%s", players[!!!(n*m%2)]);

    return 0;
}
