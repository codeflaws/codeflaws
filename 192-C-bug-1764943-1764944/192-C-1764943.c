#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 26

int maiorElem(int **m){
	
	int i, maior = 0;

  for(i = 0; i < MAX; i++)
  	if(maior < m[i][i])
   		maior = m[i][i];
	return maior;
}

int **criaMatrix(){
	
	int **matrix, i, j;
	
	matrix = (int **) calloc (MAX, sizeof(int *));
  for(i = 0; i < MAX; i++)
  	matrix[i] = (int*) calloc (MAX, sizeof(int));
  	
  for(i = 0; i < MAX; i++)
  	for(j = 0; j < MAX; j++)
  		matrix[i][j] = 0;

	return matrix;
}

int main(int argc, char *argv[]){       
       
	int **matrix, n, a, b, i;
	char str[15];
	  
	matrix = criaMatrix();  
	scanf("%d", &n);
  
  while(n > 0){
  	scanf("%s", str);
    a = str[1]-'a'; 
    b = str[strlen(str)-1]-'a';
    
    for(i = 0; i < MAX; i++)
    	if(matrix[i][a] && matrix[i][b] < matrix[i][a] + strlen(str))
      	matrix[i][b] = matrix[i][a] + strlen(str);              
    
    if(strlen(str) > matrix[a][b]) 
    	matrix[a][b] = strlen(str);
    n--;  	
  }  
  
  printf("%d\n", maiorElem(matrix));
	return 0;
}
