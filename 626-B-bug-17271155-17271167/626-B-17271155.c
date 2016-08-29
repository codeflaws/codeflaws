#include <stdio.h>

int main(int argc, char *argv[]){
	int length,i;
	scanf("%d", &length);
	char str[length];
	int arr[length];
	scanf("%s", str);
	int cards[3];
	cards[0]=0;
	cards[1]=0;
	cards[2]=0;

	for (i=0; i<length; i++){
		if (str[i]=='R'){
			cards[0]=cards[0]+1;
		}
	else if (str[i]=='G'){
			cards[1]=cards[1]+1;
		}
	else if (str[i]=='B'){
			cards[2]=cards[2]+1;
		}}

	if (cards[0]>0 && cards[1]>0 && cards[2]>0){
		printf("BGR");
		return 0;
	}
	if(cards[0]==0 && cards[1]==0){
		printf("B");
		return 0;
	}
	if(cards[0]==0 && cards[2]==0){
		printf("G");
		return 0;
	}
	if(cards[2]==0 && cards[1]==0){
		printf("R");
		return 0;
	}

	if(cards[0]==0){
		if(cards[1]>1 && cards[2]>1){
			printf("BGR");
			return 0;
		}
		if(cards[1]==1 && cards[2]==1){
			printf("R");
			return 0;
		}
		if(cards[1]==1){
			printf("GR");
			return 0;
		}
		if(cards[2]==1){
			printf("BR");
			return 0;
		}
	}
	
	if(cards[1]==0){
		if(cards[0]>1 && cards[2]>1){
			printf("BGR");
			return 0;
		}
		if(cards[0]==1 && cards[2]==1){
			printf("G");
			return 0;
		}
		if(cards[0]==1){
			printf("GR");
			return 0;
		}
		if(cards[2]==1){
			printf("BG");
			return 0;
		}
	}
	if(cards[2]==0){
		if(cards[0]>1 && cards[1]>1){
			printf("BGR");
			return 0;
		}
		if(cards[0]==1 && cards[1]==1){
			printf("G");
			return 0;
		}
		if(cards[0]==1){
			printf("BR");
			return 0;
		}
		if(cards[1]==1){
			printf("BG");
			return 0;
		}
	}







//printf("the number of cards is as follows: %d R, %d G, %d B", cards[0], cards[1], cards[2]);
}


/*
int* op1(int in[]){
	if (in[0]<2){return 0;}
	else {
		in[0]=in[0]-1;
		return in;
	}
}

int* op2(int in[]){
	if (in[1]<2){return 0;}
	else {
		in[1]=in[1]-1;
		return in;
	}
}

int* op3(int in[]){
	if (in[2]<2){return 0;}
	else {
		in[2]=in[2]-1;
		return in;
	}
}

int* op4(int in[]){
	if(in[1]<1 || in[2]<1){return 0;}
	else{
		in[0]=in[0]+1;
		in[1]=in[1]-1;
		in[2]=in[2]-1;
		return in;
	}
}


int* op5(int in[]){
	if(in[0]<1 || in[2]<1){return 0;}
	else{
		in[1]=in[1]+1;
		in[0]=in[0]-1;
		in[2]=in[2]-1;
		return in;
	}
}


int* op6(int in[]){
	if(in[1]<1 || in[0]<1){return 0;}
	else{
		in[2]=in[2]+1;
		in[1]=in[1]-1;
		in[0]=in[0]-1;
		return in;
	}
}
*/
