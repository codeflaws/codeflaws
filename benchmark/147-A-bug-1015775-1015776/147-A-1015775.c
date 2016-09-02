#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
	
	int a,s;
	int i=0;
	int k=0;

	for(a=getchar();a!=EOF;a=getchar()){
		if(a==' '){
			i++;}
		if(a==','||a=='.'||a=='!'||a=='?'){
			k++;
			s = a;
			i++;}
		if(a!=' '&&a!=','){
			if(k!=0){
				putchar(s);
				k=0;}
			if(i!=0){
				putchar(' ');
				i=0;}
		putchar(a);}
		
	}	
return 0;

}
