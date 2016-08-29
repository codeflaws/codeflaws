#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include<math.h>

#define FOR(i,a,b)	for(i = a; i <= b; i++)
#define ROF(i,a,b)	for(i = a; i >= b; i--)
#define SWAP(a,b,t)	{t = a; a = b; b = t;}
#define lli	long long int
#define endl	puts("")
#define MAX	10000005
#define Max	100001
#define WH	while

char str[Max], minStr[Max];
int arr[Max], arr2[Max];
int i,j,n,s,k,u,t,min = MAX;

int main(int argc, char *argv[])
{
	scanf("%s %s", str, minStr);
	u = strlen(str);
	if(u != strlen(minStr)) { printf("WRONG_ANSWER"); return 0; }
	FOR(i,0,u-1){
		arr[i] = str[i] - '0';
		arr2[i] = minStr[i] - '0';
	}
	FOR(i,0,u-1){
		FOR(j,0,u-1){
			if(arr[j] < min && (arr[j] != 0 || i != 0))
				min = arr[j], t = j;
		}
		if(min != arr2[i] && min != MAX){
			printf("WRONG_ANSWER");
			return 0;
		}
		arr[t] = MAX;
		min = MAX;
	}
	printf("OK");
	return 0;
}
