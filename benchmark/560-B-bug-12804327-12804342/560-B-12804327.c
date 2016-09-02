#include<stdio.h>

int main(int argc, char *argv[])
{
	int board[2],
		paint[4],
		i, j, k;
	int flag = 0;

	scanf("%d%d", &board[0], &board[1]);
	for(i = 0; i < 4; i++)
		scanf("%d", paint+i);
		
	for(i = 0; i < 2; i++){
		for( j = 2; j < 4; j++){
			for(k = 0; k < 2; k++){
			if(paint[i]+paint[j] <= board[k]){
				if(paint[1-i] <= paint[5-j]){
					if(paint[5-j] <= board[1-k]){
						flag = 1;
						printf("%d %d %d %d \n", paint[i], paint[1-i], paint[j], paint[5-j]);
					}
				}
				else if(paint[5-j] < paint[1-i]){
					if(paint[1-i] <= board[1-k]){
						flag = 1;
						printf("%d %d %d %d\n", paint[i], paint[1-i], paint[j], paint[5-j]);
					}
				}
			}
			}
		}
	}
	
	if(flag == 0)
		printf("NO\n");
	else
		printf("YES\n");
						

	return 0;
}
