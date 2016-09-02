#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,d,s;
	scanf("%d",&n);
	d=n/10;
	s=n%10;
	if (n>=11 && n<=19){
		if (s==1){
			printf("eleven");
			
		}
		else if (s==2){
			printf("twelve");
		}
		else if (s==3){
			printf("thirteen");
		}
		else if (s==4){
			printf("fourteen");
		}
		else if (s==5){
			printf("fifteen");
		}
		else if (s==6){
			printf("sixteen");
		}
		else if (s==7){
			printf("seventeen");
		}
		else if (s==8){
			printf("eighteen");
		}
		else{
			printf("nineteen");
		}
	}
	else if (n<9){
		if (s==0){
			printf("zero");
		}
		else if (s==1){
			printf("one");
			
		}
		else if (s==2){
			printf("two");
		}
		else if (s==3){
			printf("three");
		}
		else if (s==4){
			printf("four");
		}
		else if (s==5){
			printf("five");
		}
		else if (s==6){
			printf("six");
		}
		else if (s==7){
			printf("seven");
		}
		else if (s==8){
			printf("eight");
		}
		else{
			printf("nine");
		}
	}
	else{
		if (d==1){
			printf("ten");
			
		}
		else if (d==2){
			printf("twenty");
		}
		else if (d==3){
			printf("thirty");
		}
		else if (d==4){
			printf("forty");
		}
		else if (d==5){
			printf("fifty");
		}
		else if (d==6){
			printf("sixty");
		}
		else if (d==7){
			printf("seventy");
		}
		else if (d==8){
			printf("eighty");
		}
		else{
			printf("ninety");
		}
		if (s==0){
			printf("");
		}
		else if (s==1){
			printf("-one");
			
		}
		else if (s==2){
			printf("-two");
		}
		else if (s==3){
			printf("-three");
		}
		else if (s==4){
			printf("-four");
		}
		else if (s==5){
			printf("-five");
		}
		else if (s==6){
			printf("-six");
		}
		else if (s==7){
			printf("-seven");
		}
		else if (s==8){
			printf("-eight");
		}
		else{
			printf("-nine");
		}
	}
	
	return 0;
}
