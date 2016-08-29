#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include<math.h>

#define FOR(i,a,b)	for(i = a; i <= b; i++)
#define ROF(i,a,b)	for(i = a; i >= b; i--)
#define SWAP(a,b,t)	{t = a; a = b; b = t;}
#define LLI	long long int
#define endl	puts("")
#define MAX	1000000005
#define Max	100001

int arr[Max], H[Max];
int i, j, k, s = 1, n, m, sum;
int max;

int main(int argc, char *argv[])
{
	scanf("%d", &n);
	FOR(i,0,n-1)	scanf("%d", arr+i), max += arr[i];
	for(i = 1; i < n; i++){
		if(n % i || n / i <= 2) continue;
		for(j = 0; j < n; j++)
			H[j % i] += arr[j];
		for(j = 0; j < n; j++)	if(H[j] > max)	max = H[j];
		for(j = 0; j < i; j++)	H[j] = 0;
	}
	printf("%d", max), endl;
	return 0;
}
