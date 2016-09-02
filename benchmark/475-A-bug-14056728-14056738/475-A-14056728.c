#include<stdio.h>
int main(int argc, char *argv[]){
	int a,s1,s2,s3=1,s4;
	scanf("%d",&a);
	//printf("%d %d",a/3,a%3);
	a--;
	if(a%3>=1)
		s1 = a/3 + 1;
	else
		s1 = a/3;
	
	if(a%3>=2)
		s2 = a/3 + 1;
	else
		s2 = a/3;
	s4 = a/3;
	if(a==0){
		s1 = 1;
		s2 = 0;
		s3 = 0;
		s4 = 0;
	}
	if(a==1){
		s1 = 1;
		s2 = 1;
		s3 = 0;
		s4 = 0;
	}
	if(a==-1){
		s1 = 0;
		s2 = 0;
		s3 = 0;
		s4 = 0;
	}
	//printf("%d %d %d %d",s1 ,s2 ,s3 ,s4);
	printf("+------------------------+\n");
	if(s1==0)
		printf("|#.#.#.#.#.#.#.#.#.#.#.|D|)\n");
	else if(s1==1)
		printf("|O.#.#.#.#.#.#.#.#.#.#.|D|)\n");
	else if(s1==2)
		printf("|O.O.#.#.#.#.#.#.#.#.#.|D|)\n");
	else if(s1==3)
		printf("|O.O.O.#.#.#.#.#.#.#.#.|D|)\n");
	else if(s1==4)
		printf("|O.O.O.O.#.#.#.#.#.#.#.|D|)\n");
	else if(s1==5)
		printf("|O.O.O.O.O.#.#.#.#.#.#.|D|)\n");
	else if(s1==6)
		printf("|O.O.O.O.O.O.#.#.#.#.#.|D|)\n");
	else if(s1==7)
		printf("|O.O.O.O.O.O.O.#.#.#.#.|D|)\n");
	else if(s1==8)
		printf("|O.O.O.O.O.O.O.O.#.#.#.|D|)\n");
	else if(s1==9)
		printf("|O.O.O.O.O.O.O.O.O.#.#.|D|)\n");
	else if(s1==10)
		printf("|O.O.O.O.O.O.O.O.O.O.#.|D|)\n");
	else if(s1==11)
		printf("|O.O.O.O.O.O.O.O.O.O.O.|D|)\n");
	
	
	
	
	if(s2==0)
		printf("|#.#.#.#.#.#.#.#.#.#.#.|.|\n");
	else if(s2==1)
		printf("|O.#.#.#.#.#.#.#.#.#.#.|.|\n");
	else if(s2==2)
		printf("|O.O.#.#.#.#.#.#.#.#.#.|.|\n");
	else if(s2==3)
		printf("|O.O.O.#.#.#.#.#.#.#.#.|.|\n");
	else if(s2==4)
		printf("|O.O.O.O.#.#.#.#.#.#.#.|.|\n");
	else if(s2==5)
		printf("|O.O.O.O.O.#.#.#.#.#.#.|.|\n");
	else if(s2==6)
		printf("|O.O.O.O.O.O.#.#.#.#.#.|.|\n");
	else if(s2==7)
		printf("|O.O.O.O.O.O.O.#.#.#.#.|.|\n");
	else if(s2==8)
		printf("|O.O.O.O.O.O.O.O.#.#.#.|.|\n");
	else if(s2==9)
		printf("|O.O.O.O.O.O.O.O.O.#.#.|.|\n");
	else if(s2==10)
		printf("|O.O.O.O.O.O.O.O.O.O.#.|.|\n");
	else if(s2==11)
		printf("|O.O.O.O.O.O.O.O.O.O.O.|.|\n");
		
		
		
		
		if(s3==0)
			printf("|........................|\n");
		else if(s3==1)
		printf("|O.......................|\n");
		
		
		
		
		if(s4==0)
		printf("|#.#.#.#.#.#.#.#.#.#.#.|.|)\n");
	else if(s4==1)
		printf("|O.#.#.#.#.#.#.#.#.#.#.|.|)\n");
	else if(s4==2)
		printf("|O.O.#.#.#.#.#.#.#.#.#.|.|)\n");
	else if(s4==3)
		printf("|O.O.O.#.#.#.#.#.#.#.#.|.|)\n");
	else if(s4==4)
		printf("|O.O.O.O.#.#.#.#.#.#.#.|.|)\n");
	else if(s4==5)
		printf("|O.O.O.O.O.#.#.#.#.#.#.|.|)\n");
	else if(s4==6)
		printf("|O.O.O.O.O.O.#.#.#.#.#.|.|)\n");
	else if(s4==7)
		printf("|O.O.O.O.O.O.O.#.#.#.#.|.|)\n");
	else if(s4==8)
		printf("|O.O.O.O.O.O.O.O.#.#.#.|.|)\n");
	else if(s4==9)
		printf("|O.O.O.O.O.O.O.O.O.#.#.|.|)\n");
	else if(s4==10)
		printf("|O.O.O.O.O.O.O.O.O.O.#.|.|)\n");
	else if(s4==11)
		printf("|O.O.O.O.O.O.O.O.O.O.O.|.|)\n");
		
		printf("+------------------------+\n");
		
return 0;
}
