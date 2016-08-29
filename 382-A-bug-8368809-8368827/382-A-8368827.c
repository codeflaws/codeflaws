#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	char left[30],right[30], remain[30], ch;
	int flag, a, b, c, abs1, i, j;
	flag = a = b = c = j = 0;
	while(1){
		scanf("%c", &ch);
		if(ch == '|') {flag = 1; continue;}
		else if(ch == '\n') {
			flag = 2; 
			j++;
			if(j ==2)break;
			else continue;
		}

		if(flag == 0){
			left[a] = ch;
			a++;
		}
		if(flag == 1){
			right[b] = ch;
			b++;
		}
		if(flag == 2){
			remain[c] = ch;
			c++;
		}
	}
	abs1 = abs(a - b);
	if(c < abs1 || (c > abs1) &&((c - abs1) & 1 == 1))
	{
		printf("Impossible");
	}
	else
	{
		int tmp = a >= b ? (c - abs1) / 2 : (c - abs1) / 2 + abs1;
		for(i = 0; i < a;i++)
		{
			printf("%c", left[i]);
		}
		for(i = 0; i < tmp ;i++)
		{
			printf("%c", remain[i]);
		}
		printf("|");
		for(i = 0; i < b;i++)
		{
			printf("%c", right[i]);
		}
		for(i = tmp; i < c;i++)
		{
			printf("%c", remain[i]);
		}
		printf("\n");

	}
	return 0;
}



