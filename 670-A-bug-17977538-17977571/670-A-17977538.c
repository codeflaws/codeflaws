#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int days =0;
	int min, max = 0;

	scanf("%d", &days);

	min = max = (days/7) * 2;

	if ((days%7)-5>0) 
		min++; 
	if ((days%7) /2 >0)
		max +=2;
	else
		max += days%2;

	printf ("%d %d", min, max);
	return 0;
}
