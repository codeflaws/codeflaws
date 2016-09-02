#include<stdio.h>


int main(int argc, char *argv[]){

	int n,m,c,d,k;
	int n_players,available=0,problems=0;
	scanf("%d%d",&c,&d);
	scanf("%d%d",&n,&m);
	scanf("%d",&k);
	
	n_players = n*m;
	available = k;
		while(n_players>available) {
			
			if ((double)c/n<(double)d){
				problems = problems + c;
				available +=  n;
			}
			else 	{
				problems = problems + d;
				available += 1;
			}
		
		}
		printf("%d",problems);

	
	return 0;
	
}
