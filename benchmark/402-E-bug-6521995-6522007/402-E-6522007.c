#include <stdio.h>

int n  ;

int mat ;
int arr [2001][2001] = {{0}};
int vis1 [2001] = {0};
int vis2 [2001] = {0};

void DFS( int num , int vis [2001] , int * count){
	vis[num] = 1 ;
	(*count) ++ ;
	int i = 1 ;
	for(; i <= n ; i++){
		if(arr[num][i] && !vis[i]){
			vis[i] = 1 ;
			DFS(i , vis, count) ;
		}
	}
}

void iDFS( int num , int vis [2001] , int * count){
	vis[num] = 1 ;
	(*count) ++ ;
	int i = 1 ;
	for(; i <= n ; i++){
		if(arr[i][num] && !vis[i]){
			vis[i] = 1 ;
			iDFS(i , vis, count) ;
		}
	}
}

int main(int argc, char *argv[]){
	scanf("%d" , &n);
	int i  = 1 ;
	for(; i <= n ; i++){
		int j = 1 ;
		for(; j <= n ; j++){
				scanf("%d" , &arr[i][j]);
		}
	}
	int yes = 0 ;
	int change = 0 ;
	DFS(1 , vis1 , &change );
	if(change == n){
		change =  0 ;
		iDFS(1 , vis2 , &change);
		if(change == n){
			yes = 1 ;
		}
	}

	if(yes)
		printf("YES");
	else
		printf("NO") ;
	fflush(stdout);

	return 0 ;
}