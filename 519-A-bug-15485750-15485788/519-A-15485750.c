#include<string.h>
#include<stdio.h>
int main(int argc, char *argv[]) {
	char h[73];
	int i,c1=0,c2=0;
	scanf("%s",h);
	for(i=0;i<=72;i++){
		if(h[i]=='q')
			c1+=9;
		if(h[i]=='r')
			c1+=5;
		if(h[i]=='b')
			c1+=3;
		if(h[i]=='n')
	 		c1+=3;
 		if(h[i]=='p')
			c1+=1;
		if(h[i]=='Q')
			c2+=9;
		if(h[i]=='R')
			c2+=5;
		if(h[i]=='B')
			c2+=3;
		if(h[i]=='N')
			c2+=3;
		if(h[i]=='P')
			c2+=1;}
	if(c1==c2){
		printf("Draw");
	return 0;}
	printf((c1>c2)? "Black":"White");
	
	
	return 0;
}
