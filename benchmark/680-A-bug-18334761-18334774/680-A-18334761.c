#include <stdio.h>
#define TAM 5

int main(int argc, char *argv[]) {

	int vec[TAM],i,k,j;
	int vecAux[2];
	int aux = 3;
	int suma = 0;
	int actual = 0;

	for(i=0;i<TAM;i++){
		scanf("%d", &vec[i]);
	}

	k = 0;
	j = 0;

	vecAux[0] = 0;
	vecAux[1] = 0;

	do{
		for( i = k; i < TAM-1; i++ ) {
			if( vec[i+1] == vec[k] && vec[i+1] != vecAux[0] ){
				vecAux[j] = vec[k];
			}
		}
		if( vecAux[0] > 0 ){
			j = 1;
		}
		++k;
	} while( k < TAM-1); 
	
	int cantA = 0;
	int cantB = 0;

	for(i = 0; i < TAM; i++ ){
		if( vec[i] == vecAux[0] ) {
			cantA++;
		}
		if( vec[i] == vecAux[1] ) {
			cantB++;
		}
	}
	int mayor;
	printf("%d %d\n", vecAux[0], vecAux[1]);
	if( (vecAux[0] * cantA) > (vecAux[1]*cantB) ) {
		mayor = vecAux[0]; 	
	}
	else {
		mayor = vecAux[1];
	}
	i = 0;
	
	do{
		if( vec[i] == mayor ){
			vec[i] = 0;
			--aux;
		}
		++i;
	} while(aux > 0 && i < TAM);

	for(i=0;i<TAM;i++){
		suma+= vec[i];
	}	

	printf("%d\n", suma);

	return 0;
}