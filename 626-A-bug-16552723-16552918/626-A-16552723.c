#include <stdio.h>
#include <string.h>

void copy(char a[], int i, int j, char b[]){
	int k;
	for (k=i; k<=j; k++)
		b[k-i]=a[k];
	b[k]='\0';
}

int ok (char a[]){
	int i=0, x=0, y=0;
	while (a[i]!='\0'){
		if (a[i]=='U') y++;
		else if (a[i]=='D') y--;
		else if (a[i]=='R') x++;
		else if (a[i]=='L') x--;
		i++;
	}
	return (x==0 && y==0)?1:0;
}

int main(int argc, char *argv[]) {
	
	int n, i, j, count=0;
	char a[200], b[200];
	
	scanf("%d\n", &n);
	scanf("%s", a);
	
	for (i=0; i<n; i++)
		for (j=i; j<n; j++){
			copy(a,i,j,b);
			if (ok(b)==1){
				count++;
			}
		}
	printf("%d", count);
	
	return 0;
}