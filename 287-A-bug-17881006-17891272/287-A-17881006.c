#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
typedef unsigned short int bool;

bool sumar(int a,int b,int c,int d){

	a=a+b+c+d;
	
	if(a>=3){
		return true;
	}else{
		return false;
	}
	
	return a;
}

void read(int s[]){
		
	int c,i;
	c=i=0;
	
	while((c=getchar())!='\n' && c!=EOF){
		if(c==46){
			c=0;
		}else{
			c=1;
		}
		s[i]=c;
		i++;
	}
}

int main(int argc, char *argv[]) {
	
	int * lista[4];
	int i,j;
	char * p;
		
	for(i=0;i<4;i++){
		lista[i]=(int *)malloc(sizeof(int)*4);
		read(lista[i]);
	}
	
	p=(char *)malloc(sizeof(char)*4);
	p="NO";
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(sumar(lista[i][j],lista[i+1][j],lista[i][j+1],lista[i+1][j+1])){
				p="YES";
				break;
			}
		}
	}
	
	puts(p);
	
	return 0;
}
