#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n,k,l,c,d,p,nl,np,fatias,toast=0,rodada,rodadasal;
	scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
	fatias = c * d; // 80
	l = k* l; // 20
	rodada = n * nl; // 9
	rodadasal = n * np; //
	while(l>rodada)
	{
		l=l-rodada;
		if (fatias<n)
			break;
		fatias=fatias-n;
		if (p<rodadasal)
			break;
		p=p-rodadasal;
		
		toast++;
	}
	printf("%i",toast);
return 0;
}	