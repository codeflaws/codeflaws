#include <stdio.h>

#define MAX_SIZE 1001

char a[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE][MAX_SIZE];
int compo_count;
int res[MAX_SIZE*MAX_SIZE];
int sum;
int n, m;

void init()
{
    for(int i = 0; i < MAX_SIZE; ++i) {
	for(int j = 0; j < MAX_SIZE; ++j) {
	    res[i*MAX_SIZE + j] = 0;
	    visited[i][j] = 0;
	}
    }
}

/*
int calc(int x, int y)
{
    int result = 0;
    a[y][x] = '-';
    if(a[y][x + 1] == '*') {
	result++;
    } else if(a[y][x + 1] == '.') {
	result += calc(x + 1, y);
    }
    
    if(a[y - 1][x] == '*') {
	result++;
    } else if(a[y - 1][x] == '.') {
	result += calc(x, y - 1);
    }
     
    if(a[y][x - 1] == '*') {
	result++;
    } else if(a[y][x - 1] == '.') {
	result += calc(x - 1, y);
    }
    
    if(a[y + 1][x] == '*') {
	result++;
    } else if(a[y + 1][x] == '.') {
	result += calc(x, y + 1);
    }

    return result;
}
*/

void calc(int x, int y)
{
    if(x==0||y==0||y==n+1||x==m+1) return;
    if(a[y][x] == '*') {
	++sum;
	return;
    }
    if(visited[y][x] != 0) return;
    visited[y][x] = compo_count;
    calc(x + 1, y);
    calc(x, y - 1);
    calc(x - 1, y);
    calc(x, y + 1);
}



int main(int argc, char** argv)
{
    int k;
    scanf("%d %d %d\n", &n, &m, &k);
    for(int i = 0; i < n; ++i) {
	for(int j = 0; j < m; ++j) {
	    scanf("%c ", &a[i + 1][j + 1]);
	}
    }

    init();
    for(int i = 0; i < k; ++i) {
	int x, y;
	scanf("%d %d\n", &y, &x);
	sum = 0;
	compo_count = 1;
	if(visited[y][x] == 0) {
	    calc(x, y);
	} else {
	    sum = res[visited[y][x]];
	}
	++compo_count;
	res[i + 1] = sum;
	printf("%d\n", sum);
    }

    return 0;
}
