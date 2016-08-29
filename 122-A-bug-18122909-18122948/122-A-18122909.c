#include <stdio.h>
#include <stdlib.h>

#define TRUE  0
#define FALSE 1

int lucky(int s)
{
	/* TRUE is a lucky number, FALSE is not */
	int ok = TRUE;
	while (s > 0)
	{
		int i = s % 10;
		if (i != 4 && i != 7)
			ok = FALSE;
		s /= 10;
	}
	return ok;
}

int almost_lucky(int s)
{
	int i;
	int ok = FALSE;
	
	if (lucky(s) == TRUE)
		ok = TRUE;
	
	for (i = 4; i * i <= s; ++i)
		if (s % i == 0 && (lucky(i) == TRUE || lucky(s / i) == TRUE))
			ok = TRUE;
		
	return ok;
}

int main (int argc, char* *argv)
{
	int n;
	scanf("%d", &n);
	
	if (almost_lucky(n) == TRUE)
		printf("YES");
	else
		printf("NO");
	
	return 0;
}