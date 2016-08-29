#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b,i;
	scanf("%d %d",&a,&b);
	for (i=1; ;i++){
		if (i%2==1){
			if (a>=2 && b>=2){
				a=a-2;
				a=a-2;
			}
			else if (a>=1 && b>=12){
				a=a-1;
				b=b-12;
			}
			else if (b>=22){
				b=b-22;
			}
			else{
				printf("Hanako");
				return 0;
			}
		}
		else{
			if (b>=22){
				b=b-22;
				
			}
			else if (a>=1 && b>=12){
				a=a-1;
				b=b-12;
			}
			else if (a>=2 && b>=2){
				a=a-2;
				b=b-2;
			}
			else{
				printf("Ciel");
				return 0;
			}
		}
	}
	return 0;
}
