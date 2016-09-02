#include <stdio.h>
int mut(int a) {
	return (a < 0) ? -a : a;
}

int main(int argc, char *argv[]) {
	int x1, y1, x2, y2;
	scanf("%d %d %d %d",&x1 ,&y1 ,&x2 ,&y2);
	if(x1 == x2)
		printf("%d %d %d %d",x1 + mut(y1 - y2) ,y1 ,x1 + mut(y1 - y2) ,y2);
	else if(y1 == y2)
		printf("%d %d %d %d",x1 ,y1 + mut(x1 - x2) ,x2 ,y2 + mut(x1 - x2));
	else if(x1 - x2 == y1 - y2)
		printf("%d %d %d %d",x2 ,y1 ,x1 ,y2);
	else
		printf("-1");
	return 0;
}
