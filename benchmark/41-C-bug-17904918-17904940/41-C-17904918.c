#include<stdio.h>
#include<string.h>
#define p printf
	char a[1444],u,at;
	int i,j;
int main(int argc, char *argv[]){
	scanf("%s",a);
	u=strlen(a);
	if(a[1]=='a' && a[2]=='t'){
		p("%c@",a[0]);
		j=3;at++;
	}
	else if(a[0]=='d' && a[1]=='o' && a[2]=='t'){
		p("dot");
		j=3;
	}
	if(a[0]=='a' && a[1]=='t'){
		p("at");
		j=2;
	}
	for(i=j;i<u;i++){	
		if(i==u-3 && a[u-3]=='d'){
			p("dot");return 0;
		}
		else if(a[i]=='d' && a[i+1]=='o' && a[i+2]=='t'){
			p(".");i+=2;}
		else if(a[i]=='a' && a[i+1]=='t'){
			if(!at){
				p("@");
				at++;
			}
			else p("at");i++;}
		else p("%c",a[i]);
	}
	p(" ");}
