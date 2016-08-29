#include<stdio.h>
int hh, mm, a, p;


int main(int argc, char *argv[])
{
	scanf("%d:%d %d", &hh, &mm, &a);
	
	p = hh * 60 + mm + a;
	mm = p % 60;
	hh = p / 60;
	printf("%02d:%02d", hh, mm);
	
	return 0;
}
