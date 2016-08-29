#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]) {

	int z,n,a,i,j;
	char x[20];

	scanf("%s %d",x,&a);

	n=strlen(x);

	if(n == 7 && x[0]=='J')
		z=1;
	if(n == 8 && x[0]=='F')
		z=2;
	if(n == 5 && x[0]=='M')
		z=3;
	if(n == 5 && x[0]=='A')
		z=4;
	if(n == 3 && x[0]=='M')
		z=5;
	if(n == 4 && x[3]=='e')
		z=6;
	if(n == 4 && x[3]=='y')
		z=7;
	if(n == 6 && x[0]=='A')
		z=8;
	if(n == 9 && x[0]=='S')
		z=9;
	if(n == 7 && x[0]=='O')
		z=10;
	if(n == 8 && x[0]=='N')
		z=11;
	if(n == 8 && x[0]=='D')
		z=12;

	z+=a;

	z=z%12;

	switch(z) {
		case 1 : printf("January"); break;
		case 2 : printf("February"); break;
		case 3 : printf("March"); break;
		case 4 : printf("April"); break;
		case 5 : printf("May"); break;
		case 6 : printf("June"); break;
		case 7 : printf("July"); break;
		case 8 : printf("August"); break;
		case 9 : printf("September"); break;
		case 10: printf("October"); break;
		case 11: printf("November"); break;
		case 12: printf("December"); break;

	}

	return 0;
}
















