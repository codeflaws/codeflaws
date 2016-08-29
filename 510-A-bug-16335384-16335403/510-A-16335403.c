#include<string.h>
#include<stdio.h>
#define FOR(ii,aa,bb) for(ii=aa;ii<=bb;ii++)


int main(int argc, char *argv[]) {
	int x,y,i,say=1,j;
		scanf("%d %d",&x,&y);
			FOR(i,1,x){
					if(i==1){
						FOR(j,0,y-1)
							printf("#");
						printf("\n");
					continue;}
					if(i%2!=0){
						FOR(j,0,y-1)
							printf("#");
					printf("\n");}
					else if(say%2!=0){
						FOR(j,1,y-1)
							printf(".");
						printf("#\n");
						say++;}
					else{  
						printf("#");
						FOR(j,1,y-1)
						printf(".");
						printf("\n");
						say++;
					}}



	
	
	return 0;
}
