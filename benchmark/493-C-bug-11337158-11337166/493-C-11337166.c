#include <stdio.h>
#include <stdlib.h>
#define MAX 200000
struct arremesso {
	int distance;
	int time;
};

typedef struct arremesso Arremesso;
Arremesso arremessos[2*MAX];

int cmpfunc(const void *a, const void *b) {
	Arremesso* arremesso1 = (Arremesso *) a;
	Arremesso* arremesso2 = (Arremesso *) b;
	return arremesso1->distance - arremesso2->distance;
}

int main(int argc, char *argv[]) {
	int distancia, somaMaxima = 0, quantidade = 0, quantidadeMinima = 0, contador, N, M, soma = 0, a, b, posicaoFinal = -1;
	scanf("%d", &N);
	for (contador = 0; contador < N; contador++) {
		scanf("%d", &distancia);
		arremessos[contador].distance = distancia;
		arremessos[contador].time = -1;
	}
	scanf("%d", &M);
	for (contador = N; contador < N + M; contador++) {
		scanf("%d", &distancia);
		arremessos[contador].distance = distancia;
		arremessos[contador].time = 1;
	}
	qsort(arremessos, N+M, sizeof(Arremesso), cmpfunc);
	for (contador = 0; contador < N + M; contador++) {
		soma += arremessos[contador].time;
		if (arremessos[contador].time == -1) quantidade++;
		if (arremessos[contador].distance != arremessos[contador + 1].distance) {
			if (somaMaxima < soma) {
				somaMaxima = soma;
				quantidadeMinima = quantidade;
				posicaoFinal = contador;
			}
			else if (somaMaxima == soma && quantidade < quantidadeMinima) {
				somaMaxima = soma;
				quantidadeMinima = quantidade;
				posicaoFinal = contador;
			}
		}
	}
	a = 2*quantidadeMinima + 3*(N - quantidadeMinima);
	b = 2*(posicaoFinal + 1 - quantidadeMinima) + 3*(M - (posicaoFinal + 1 - quantidadeMinima));
	printf("%d:%d\n", a, b);
	return 0;
}