/*
 * =====================================================================================
 *
 *       Filename:  Solitaire.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年07月25日 13时47分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAXN 52
#define OP1 1
#define OP2 3
int dp[MAXN][MAXN][MAXN][MAXN];
typedef struct Card {
	char val;
	char suit;
} Card_t;
Card_t cards[MAXN];
/* 
int dfs(Card_t *cards, int n, int op) {
	if(n == 1) return 1;
	if(n - op <=0 ) return 0;

	if(cards[n].val == cards[n - op].val) {
		int tmpSuit = cards[n - op].suit;
		cards[n - op].suit = cards[n].suit;
		if(dfs(cards, n-1, OP1) || dfs(cards, n-1, OP2)) 
			return 1;
		else 
			cards[n - op].suit = tmpSuit;
	}
	if(cards[n].suit == cards[n - op].suit) {
		int tmpVal = cards[n- op].val;
		cards[n - op].val = cards[n].val;
		if(dfs(cards, n-1, OP1) || dfs(cards, n-1, OP2))
			return 1;
		else 
			cards[n -op].val = tmpVal;
	}
	return 0;
}
*/

int calc(int n, int a, int b, int c) {
	if(n == 1) return 1;
	if(n == 2) {
		if(cards[a].val == cards[b].val || cards[a].suit == cards[b].suit) return 1;
		else return 0;
	}
	if(n == 3) {
	//	printf("n-%d a-%d b-%d c-%d\n",n,a,b,c);
		if(cards[c].val == cards[b].val || cards[c].suit == cards[b].suit) {
	//		printf("cards[%d].val=%c cards[%d].val=%c\n",c,cards[c].val,b,cards[b].val);
			if(cards[c].val == cards[a].val || cards[c].suit == cards[a].suit) 
				return 1;
			else 
				return 0;
		}
		else 
			return 0;
	}
	return 0;
}

int main(int argc, char *argv[]) {
	int i,j,k,l,n;
	char tmp;

	while(scanf("%d", &n) != EOF) {
		scanf("%c",&tmp);
		memset (cards, 0, sizeof cards);
		memset (dp, 0, sizeof dp);
		for(i=1; i <=n ; ++i) 
			if (i < n)
				scanf("%c%c%c", &cards[i].val, &cards[i].suit, &tmp);
			else 
				scanf("%c%c", &cards[i].val, &cards[i].suit);
		
		for(i=1; i<=n; ++i) {
			for(j=1; j<=n; ++j) {
				for(k=1; k<=n; ++k) {
					if(j == k) continue;
					for(l=1; l<=n; ++l)  {
						if(k == l) continue;
						if(i >= 4) {
							if(cards[i-3].val == cards[l].val || cards[i-3].suit == cards[l].suit)
								dp[i][j][k][l] = dp[i-1][l][j][k];
							if(cards[k].val == cards[l].val || cards[k].suit == cards[l].suit) 
								dp[i][j][k][l] = dp[i][j][k][l] || dp[i-1][i-3][j][l];
						}
						else
							dp[i][j][k][l] = calc(i,j,k,l);
	//					printf("dp[%d][%d][%d][%d]:%d\n",i,j,k,l,dp[i][j][k][l]);
					}
				}
			}
		}

		if(n == 1) {
			if(calc(1, 1, 0, 0)) puts("YES");
			else puts("NO");
		}
		else if(n == 2) {
			if(calc(2, 1, 2, 0)) puts("YES");
			else puts("NO");
		}
		else {
			if(dp[n][n-2][n-1][n]) puts("YES");
			else puts("NO");
		}
	}
	return 0;
}
