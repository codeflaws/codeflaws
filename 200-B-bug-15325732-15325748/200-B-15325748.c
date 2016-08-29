#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int n;
	scanf("%d", &n);
	//printf("%d", n);
	
	int p[100];
	
	float sum = 0.0f;
	
	for(int i = 0; i < n; i++){
		scanf("%d",&p[i]);
		sum += p[i];
	}
	
	//float ans = sum / n;
	printf("%f", sum / n);
	
	
	//for(int i = 0; i < n; i++){
	//	printf("%d",p[i]);
	//}
	
	
	return 0;
	
}
