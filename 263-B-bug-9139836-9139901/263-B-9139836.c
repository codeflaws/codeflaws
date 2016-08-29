#include<stdio.h>

void Shellsort( int A[ ], int N ) 
{ 
      int  i, j, Increment; 
      int  Tmp; 
      for ( Increment = N / 2; Increment > 0; Increment /= 2 )  
	for ( i = Increment; i < N; i++ ) { 
	      Tmp = A[ i ]; 
	      for ( j = i; j >= Increment; j  -= Increment ) 
		if( Tmp < A[ j - Increment ] ) 
		      A[ j ] = A[ j - Increment ]; 
		else 
		      break; 
		A[ j ] = Tmp; 
	}
}

int main(int argc, char *argv[]){
	int n,k,i;
	int a[51];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	Shellsort(a,n);
	if(n-k<0)
		printf("-1");
	else
	    printf("%d 0",a[n-k]);

}