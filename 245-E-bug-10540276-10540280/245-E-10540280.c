#include<stdio.h>
#include<string.h>
char d[50000];
int a,b,k,r,t,i,j,max,min;
int main(int argc, char *argv[]){
	scanf("%s",d);
	a=strlen(d);
	for(i=0 ; i<a ; i++){
		if(d[i] == '+'){
			k++;
			if(k > max)
				max=k;
		}
		else{
			k--;
			if(k < min)
				min=k;
		}
	}
	
	min*=-1;
	
	printf("%d",max+min);
	
	return 0;
}
