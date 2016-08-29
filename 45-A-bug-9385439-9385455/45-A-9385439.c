#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
	int i,s=0,n=0,ay=0,u;
	char x[100];
	scanf("%s %d",x,&n);
	u=strlen(x);
	
	if(x[0]=='J' && x[1]=='a')
		ay=1;
	if(x[0]=='F')
		ay=2;
	if(x[0]=='M' && x[2]=='r')
		ay=3;
	if(x[0]=='A' && x[1]=='p')
		ay=4;
	if(x[0]=='M' && x[2]=='y')
		ay=5;
	if(x[0]=='J' && x[1]=='u' && x[2]=='n')
		ay=6;
	if(x[0]=='J' && x[2]=='l')
		ay=7;
	if(x[0]=='A' && x[1]=='u')
		ay=8;
	if(x[0]=='S')
		ay=9;
	if(x[0]=='O')
		ay=10;
	if(x[0]=='N')
		ay=11;
	if(x[0]=='D')
		ay=12;

	ay+=n;
	s=(ay-1)%12+1;

	switch(s){
		case 1:printf("January");break;
		case 2:printf("February");break;
		case 3:printf("March");break;
		case 4:printf("April");break;
		case 5:printf("May");break;
		case 6:printf("June");break;
		case 7:printf("July");break;
		case 8:printf("August");break;
		case 9:printf("September");break;
		case 10:printf("Octobar");break;
		case 11:printf("November");break;
		case 12:printf("December");break;

	
	}

	return 0;
}
