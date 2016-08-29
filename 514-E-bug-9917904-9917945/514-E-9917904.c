#include <stdlib.h>
#include <string.h>
#define MOD 1000000007
typedef long long ll;
int readint(){
	int res=0;
	char c;
	while((c = getchar())<'-');
	if(c=='-')while((c=getchar())>='0')res=res*10-c+48;
	else do res=res*10+c-48; while((c=getchar())>='0');
	return res;
}
void putint(int a){
	int k=1;
	while(a/k>9)k*=10;
	while(k>0)putchar(a/k%10+48),k/=10;
}
int max(int a, int b){
	return a>b?a:b;
}

int A[102][102];
int B[102][102];
int C[102][102];

void multb(){
	int i, j, k;
	int c[102][102]={0};
	for(i=0;i<102;i++){
		for(j=0;j<102;j++){
			for(k=0;k<102;k++){
				c[i][j]+=((ll)B[i][k]*(ll)B[k][j])%MOD;
				c[i][j]%=MOD;
			}
		}
	}
	memcpy(B,c,102*102*sizeof(int));
}
void multc(){
	int i, j, k;
	int c[102][102]={0};
	for(i=0;i<102;i++){
		for(j=0;j<102;j++){
			for(k=0;k<102;k++){
				c[i][j]+=((ll)C[i][k]*(ll)B[k][j])%MOD;
				c[i][j]%=MOD;
			}
		}
	}
	memcpy(C,c,102*102*sizeof(int));
}

int main(int argc, char *argv[]){
	int i,j;
	int n, x;
	n = readint(),x=readint();
	int *d = malloc(sizeof(int)*n);
	int D=-1<<31;
	for(i=0;i<n;i++)d[i]=readint(),D=max(D,d[i]);
	for(i=0;i<n;i++)A[d[i]-1][0]++;
	A[D][0]=1;
	A[0][D+1]=1;
	A[D][D]=1;
	A[D+1][ D+1]=1;
	for(i=0;i<D-1;i++){
		A[i][i+1]=1;
	}
	for(i=0;i<102;i++){
		for(j=0;j<102;j++){
			B[i][j]=A[i][j];
		}
	}
	for(i=0;i<102;i++){
		C[i][i]=1;
	}
	{
		int po=x;
		while(po>0){
			if(po%2)multc();
			multb();
			po/=2;
		}
	}
	putint(C[0][0]+C[D][0]);
	return 0;
}