#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[]){
	long long int X,max,cont,n,L,i,r,respa[100000],respb[100000];
	scanf("%lld",&X);
	cont=0;
	max=floor(pow(3*X,0.3333333333333333333));
	if(((max*(max+1)*(2*max+1))/6)==X){
		for(n=1;n<=max;n++){
			L=X+(n*n*n-n)/6;
			r=(n*n+n)/2;
			if(L%r==0){
				respa[cont]=n;
				respb[cont]=L/r;
				cont++;
			}
		}
		printf("%lld\n",2*cont-1);
		for(i=0;i<=cont;i++){
			respa[2*cont-i-2]=respb[i];
			respb[2*cont-i-2]=respa[i];
		}
		for(i=0;i<2*cont-1;i++) printf("%lld %lld\n",respa[i],respb[i]);
	}else{
		for(n=1;n<=max;n++){
			L=X+(n*n*n-n)/6;
			r=(n*n+n)/2;
			if(L%r==0){
				respa[cont]=n;
				respb[cont]=L/r;
				cont++;
			}
		}
		printf("%lld\n",2*cont);
		for(i=0;i<=cont;i++){
			respa[2*cont-i-1]=respb[i];
			respb[2*cont-i-1]=respa[i];
		}
		for(i=0;i<2*cont;i++) printf("%lld %lld\n",respa[i],respb[i]);
	}
	return 0;
	printf("%lld\n",cont);
	for(i=0;i<cont;i++) printf("%lld %lld\n",respa[i],respb[i]);
	return 0;
}
