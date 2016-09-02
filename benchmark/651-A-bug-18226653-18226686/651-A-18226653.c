#include<stdio.h>


int main(int argc, char *argv[]){

	int a, b;
	int result = 0;
	scanf("%d %d",&a,&b);
	while(!(a <= 0 || b <= 0)){
		if(a > b){
			a = a-2;
			b++;
			result++;
		}
		else{
			b = b-2;
			a++;
			result++;
		}
	}
	printf("%d\n",result);


	return 0;
	
}