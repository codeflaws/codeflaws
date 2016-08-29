#include <stdio.h>

int s;
char a[50][50] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"}, b[50][50] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

int main(int argc, char *argv[]) {
	scanf("%d",&s);
	if(s < 20)
		printf("%s",a[s]);
	else if(s%10 == 0)
		printf("%s",b[s/10-2]);
	else
		printf("%s-%s",b[s/10-2],a[s%10]);
	return 0;
}
