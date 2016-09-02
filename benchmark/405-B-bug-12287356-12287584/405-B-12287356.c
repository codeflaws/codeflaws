#include<stdio.h>
#include<stdlib.h>
int goaheadtill(char *a, int n, int p){
	int i;
	for(i = p; i < n ;i++){
		if(a[i] != '.') return i;
	}
	return n;
}
int main(int argc, char *argv[]){
	char a[3009];
	int n, i,j;

	scanf("%d", &n);
	scanf("%s", a);
	
	int ans = 0;
	int ptr = goaheadtill(a, n, 0);

	if(ptr == n){
		printf("%d\n", n);
		return 0;
	}
	int oflag = 0; //left enc.

	if(a[ptr] == 'R'){
		oflag = 1;
		ans += ptr;
	}
	ptr++;
	int nflag = -1; //init
	int newptr = -1;
	while(ptr < n){
		nflag = 0; //left by def.
		newptr = goaheadtill(a, n, ptr);

		if(newptr == n){
			if(oflag == 0){ //last one was left
				ans += (newptr - ptr );
				break;
			}
		}
		
		if(a[newptr] == 'R') nflag = 1;
		
		if(oflag == 0 && nflag == 1) ans += (newptr - ptr);
		else if(oflag == 1 && nflag == 0){
			int t = newptr - ptr;
			if(t % 2 == 1) ans += 1;
		}

		oflag = nflag;
		ptr = newptr + 1;
	}
	printf("%d\n", ans);

	return 0;
}
