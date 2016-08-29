#include <stdio.h>
#include <string.h>
#define MAX 1005

int n;
char min_number[MAX];
char digits[MAX];

char tmp[MAX];

void rotate(){
	int i;
	for(i=0; i<n; i++)
		tmp[i] = digits[i];
	for(i=1; i<n; i++)
		digits[i] = tmp[i-1];	
	digits[0] = tmp[n-1];
	
	//printf("%s\n", digits);
}

void incr(){
	int i;
	for(i=0; i<n; i++)
		if(digits[i] == '9')
			digits[i] = '0';
		else
			digits[i]++;
	//printf("%s\n", digits);
}

int main(int argc, char *argv[]){
	int t, i, j; 
	scanf("%d", &n);
	getchar();
	gets(digits);

	t = n;
	strcpy(min_number, digits);
	while(t--){
		for(i=0; i<9; i++){
			incr();
			if(strcmp(digits, min_number) < 0)
				strcpy(min_number, digits);
		}
		rotate();
		//printf("\n");
	}
	//printf("%s\n", min_number);
	return 0;
}
