#include <stdio.h>
int main(int argc, char *argv[]){
	char a[10][10]={"O-|-OOOO","O-|O-OOO","O-|OO-OO","O-|OOO-O","O-|OOOO-","-O|-OOOO","-O|O-OOO","-O|OO-OO","-O|OOO-O","-O|OOOO-"};
	int n;
	scanf("%d",&n);
	if(n == 0){
	    printf("%d\n", a[n]);
	}
	while(n > 0){
	printf("%s\n", a[n%10]);
	n /= 10;
	}
	return 0;
}