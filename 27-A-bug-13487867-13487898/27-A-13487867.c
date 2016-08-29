#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,i,g,mini,max,f;
	scanf("%d",&n);
	int ara[100000];
	for (i=0;i<n;i++){
		scanf("%d",&ara[i]);
	}
	mini=ara[0];
	for (i=0;i<n;i++){
		if (ara[i]<mini){
			mini=ara[i];
		}
	}
	max=ara[0];
	for (i=0;i<n;i++){
		if (ara[i]>max){
			max=ara[i];
		}
	}
	if (mini!=1){
		printf("1");
	}
	else{
		g=mini+1;
		while (g!=max){
		f=0;
		for(i=0;i<n;i++){
			
			if (g==ara[i]){
				f=1;
				break;
			}
			
			
		}
		if(f==0){
			printf("%d",g);
			break;
		}
		else{
			g=g+1;
		}
		
	}
	}
	return 0;
}