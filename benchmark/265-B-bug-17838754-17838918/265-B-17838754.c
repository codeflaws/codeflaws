#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int i, n, t;
	scanf("%d", &n);
	int h[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &h[i]);
	}
	
	t = h[0] + (n*2) -1;		/*el tiempo minimo es la altura del primer arbol,
							un salto para cada arbol (menos el primero), y un segundo para comer cada nuez*/
	
	for(i=0; i<n-1; i++)
	{
		t+= abs(h[i]-h[i+1]);
	}
	
	printf("%d", t);
	
	printf("\n");
	system("pause");
	return 0;
}




