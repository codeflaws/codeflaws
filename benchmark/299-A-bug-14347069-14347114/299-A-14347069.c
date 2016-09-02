#include <stdio.h>
int main(int argc, char *argv[])
{
	int arr[100000];
	int i,j,min,n;
	scanf ("%d",&n);
	
	
	for (i=0;i<n;i++) scanf ("%d",&arr[i]);
	min=arr[0];
	
	for (i=1;i<n-1;i++) {
		if (arr[i]<min) min=arr[i];
	}
	
	for (i=0;i<n;i++) {
		if (arr[i]%min) {
			printf ("-1");
			break;
		}
	}
	if (i==n) printf ("%d",min);
	return 0;
}