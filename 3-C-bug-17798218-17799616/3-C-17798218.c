#include <stdio.h>

int win(char player, char board[][3]) {
	int i, j;

	for (i = 0; i < 3; i++)
		if (board[i][0] == player
				&& board[i][1] == player
				&& board[i][2] == player)
			return 1;
	for (j = 0; j < 3; j++)
		if (board[0][j] == player
				&& board[1][j] == player
				&& board[2][j] == player)
			return 1;

	if (board[0][0] == player
			&& board[1][1] == player
			&& board[2][2] == player)
		return 1;
	if (board[0][2] == player
			&& board[1][1] == player
			&& board[2][0] == player)
		return 1;
	return 0;
}

int main(int argc, char *argv[]) {
	char board[3][3];
	char full;
	int i, j;
	int cnt1, cnt2, d;
	int win1, win2;

	cnt1 = cnt2 = 0;
	for (i = 0; i < 3; i++) {
		scanf("%c%c%c\n", &board[i][0], &board[i][1], &board[i][2]);
		for (j = 0; j < 3; j++) {
			if (board[i][j] == 'X')
				cnt1++;
			if (board[i][j] == '0')
				cnt2++;
		}
	}
	d = cnt1 - cnt2;
	win1 = win('X', board);
	win2 = win('0', board);
	if (d < 0 || d > 1 || (win1 && win2) || (win1 && cnt2 > cnt1) || (win2 && cnt1 > cnt2)) {
		printf("illegal\n");
		return 0;
	}
	full = cnt1 + cnt2 == 9;
	if (win1)
		printf("the first player won\n");
	else if (win2)
		printf("the second player won\n");
	else if (full)
		printf("draw\n");
	else
		printf("%s\n", cnt1 == cnt2 ? "first" : "second");
	return 0;
}
