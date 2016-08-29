#include <stdio.h>

int main(int argc, char *argv[]) {
	int r,g,b;
	int min=29;
	int p=0,q=0,s=0;
	scanf("%d %d %d",&r,&g,&b);
	if(r==0)p=1;
	if(g==0)q=1;
	if(b==0)s=1;
	while(r>0 || b>0 || g>0){
		if(p==0 || q==0 || s==0){
		if(r<=2 && r>0){
			r=0; p=1;
		}
		else if(r>2){
			r=r-2;
			//printf("here\n");
			
		}
		min++;
		//printf("r=%d %d %d %d %d\n",r,min,p,q,s);
		}
		if(p==0 || q==0 || s==0){
		if(g<=2 && g>0){
			r=1;
			g=0;
		}
		else if(g>2){
		 g=g-2;
		}
		min++;
		//printf("g=%d %d %d %d %d\n",g,min,p,q,s);
		}
		if(p==0 || q==0 || s==0){
		if(b<=2 && b>0){
			s=1;
			b=0;
		}
		else if(b>2){
			b=b-2;
		}
		min++;
		//printf("b=%d %d %d %d %d\n",b,min,p,q,s);
		}
	}
	printf("%d",min);
	
	return 0;
}

