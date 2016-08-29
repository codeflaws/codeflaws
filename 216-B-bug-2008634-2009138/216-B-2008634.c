#include <stdio.h>
#define next_enemy(a, b) (enemies[a][0] != b) ? (enemies[a][0]) : (enemies[a][1])

int walk(int i, int enemies[100][2], int visited[100], int flop) {
    int tot;
    if (visited[i]) {
        if (visited[i] == flop)
            return 0;
        else
            return -1;
    };
    visited[i] = flop;
    flop = 3 - flop;
    if (enemies[i][0] == -1)
        return 0;
    tot = walk(enemies[i][0], enemies, visited, flop);
    if (enemies[i][1] != -1)
        tot += walk(enemies[i][1], enemies, visited, flop);
    if (tot <= 0) return tot; /*cycle*/
    return tot + 1;
};

int main(int argc, char *argv[]) {
    int n, m;
    int i, j;
    int enemies[100][2];
    int away = 0, even = 0;
    int visited[100];
    scanf("%d", &n);
    for (i = 0; i < n; i ++) {
        enemies[i][0] = enemies[i][1] = -1;
        visited[i] = 0;
    };
    scanf("%d", &m);
    for (i = 0; i < m; i ++) {
        int en1, en2;
        scanf("%d%d", &en1, &en2);
		en1--;
		en2--;
        if (enemies[en1][0] == -1)
            enemies[en1][0] = en2;
        else
            enemies[en1][1] = en2;
        if (enemies[en2][0] == -1)
            enemies[en2][0] = en1;
        else
            enemies[en2][1] = en1;
    };
    for (i = 0; i < n; i ++) {
		if (visited[i]) continue;
		int res = walk(i, enemies, visited, 1);
		if (res <= 0) away -= res/2;
		else even += res;
	};
	away += even % 2;
	printf("%d\n", away);
	return 0;
};
