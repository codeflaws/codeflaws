#include<stdio.h>
int main(int argc, char *argv[]){
	int i,w=0,b=0;
	char a;
	for(i=0;i<65;i++){
		scanf("%c",&a);
		if(a=='Q')
			w+=9;
		if(a=='R')
			w+=5;
		if(a=='B')
			w+=3;
		if(a=='N')
			w+=3;
		if(a=='P')
			w+=1;
		if(a=='q')
			b+=9;
		if(a=='r')
			b+=5;
		if(a=='b')
			b+=3;
		if(a=='n')
			b+=3;
		if(a=='p')
			b+=1;
	}
	if(w>b)
		printf("White");
	else if(b>w)
		printf("Black");
	else if(w==b)
		printf("Draw");
return 0;
}
