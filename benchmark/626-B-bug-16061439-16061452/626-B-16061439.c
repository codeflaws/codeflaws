#include<stdio.h>

int ans[3] = {(0)};
void convert(char in[], int out[]){
 int i = 0;
 while(in[i]){
 	if (in[i] == 'R')
	 	out[0] += 1;
	else if (in[i] == 'G')
		out[1] += 1;
	else
 		out[2] += 1;
 	i++;
 	
	}
 i = 0;
 while(i < 3){
 	if (out[i] > 1)
 		out[i] = 2;
 }	
}

void play(int r, int g, int b){
	if(r + b + g == 1){
		if(r == 1)
			ans[0] = 1;
		else  if(g == 1)
			ans[1] = 1;
		else
			ans[2] = 1;	
	}
	else{
		if(r >= 2)
			play(r - 1, g, b);
		if(g >= 2)
			play(r , g - 1, b);
		if(b >= 2)
			play(r , g, b - 1);
		if(r >= 1 && g >= 1)
			play(r - 1 , g -1, b + 1);
		if(r >= 1 && b >= 1)
			play(r - 1 , g + 1, b - 1);	
		if(g >= 1 && b >= 1)
			play(r + 1 , g - 1, b - 1);	
	}
}

void output(){
	
	
	if (ans[2])
		printf("B");
	if (ans[1])
		printf("G");
	if (ans[0])
		printf("R");
	
}
int main(int argc, char *argv[]){
	char in[201];
	int n, out[3] = {(0)};
	scanf("%d", &n);
	scanf("%s", &in);
	convert(in, out);
	
	play(out[0], out[1], out[2]);
	
	output();
	return 0;
}
