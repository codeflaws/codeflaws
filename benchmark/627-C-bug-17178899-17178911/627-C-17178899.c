#include <stdio.h>
#include <stdlib.h>
#define MAXDIST 1000000000
#define MAXPUMP 200000
#define MAXPRICE 1000000
typedef struct{
	int position, price;
}Strukt;

int Median(Strukt *mat, int i, int j){
	int mid = (i + j) / 2;
	Strukt temp;
	if (mat[i].position > mat[j].position){
		temp = mat[i];
		mat[i] = mat[j];
		mat[j] = temp;
	}
	if (mat[mid].position > mat[j].position){
		temp = mat[mid];
		mat[mid] = mat[j];
		mat[j] = temp;
	}
	if (mat[i].position > mat[mid].position){
		temp = mat[mid];
		mat[mid] = mat[i];
		mat[i] = temp;
	}
	return mid;
}

void QuickSort(Strukt *mat, int i, int j){
	Strukt temp;
	int left = i, right = j, pivot;
	pivot = Median(mat, i, j);
	while (left < right){
		while ((mat[left].position < mat[pivot].position) && (left < right))
			left++;
		while ((mat[right].position > mat[pivot].position) && (left < right))
			right--;
		if (left < right){
				temp = mat[left];
				mat[left] = mat[right];
				mat[right] = temp;
				if (left == pivot || right == pivot){
					(pivot == left) ? (pivot = right, left++) : (pivot = left, right--);
				}
		}
	}
	if (pivot - i - 1 >= 1)
		QuickSort(mat, i, pivot - 1);
	if (j - pivot - 1 >= 1)
		QuickSort(mat, pivot + 1, j);
}

long long Greedy(Strukt *mat, long long M, long long N, long long D, long long balance, long long posind, long long minind){
	long long areaind, i, tempind, sum=0;
	while (mat[posind].position!=D){
		i = minind;
		while ( (mat[i].position - mat[posind].position <= N) && ( (mat[i].price > mat[posind].price) ) ){
			if (mat[i].price <= mat[minind].price)
				minind = i; 
			i++;
		}
		if (mat[i].position - mat[posind].position <= N){
			if (balance >= (mat[i].position - mat[posind].position)){
				balance -= (mat[i].position - mat[posind].position);
			}
			else{
				sum += (mat[i].position - mat[posind].position - balance)*mat[posind].price;
				balance = 0; 
			}
		}
		else{
			if (i - 1 == posind){
				return (-1); 
			}
			sum = sum + (N - balance)*mat[posind].price;
			balance = N - (mat[i].position - mat[posind].position);
			i = minind;
		}
		posind = i;
		minind = i + 1;
	}
	return sum;
}

int main(int argc, char *argv[]){
	long long D, N, M, i, x, p;
	Strukt *mat;
	long long sum;
	do{
		scanf("%lld", &D);
	} while (D<1 || D>MAXDIST);
	do{
		scanf("%lld", &N);
	} while (N<1 || N>D);
	do{
		scanf("%lld", &M);
	} while (M<1 || M>MAXPUMP);
	M = M + 2;
	mat = malloc(M * sizeof(Strukt));
	mat[0].position = 0;
	mat[0].price = 0;
	for (i = 1; i < M-1; i++){
		do{
			scanf("%lld", &x);
		} while (x < 1 || x >= D);
		do{
			scanf("%lld", &p);
		} while (p<1 || p > MAXPRICE);
		mat[i].position = x;
		mat[i].price = p;
	}
	QuickSort(mat, 1,  M - 2);
	mat[M-1].position = D;
	mat[ M - 1].price = 0;
	sum = 0;
	if (mat[0].position > N){
		sum = -1;
	}
	else{
		if (D != N)
			sum = Greedy(mat, M, N, D, N, 0, 1);
	}
	printf("%lld\n", sum);
	free(mat);
	return(0);
}
