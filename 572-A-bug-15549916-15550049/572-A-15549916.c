#include<stdio.h>
int main(int argc, char *argv[]){
	int na, nb, k, m, i; scanf("%d%d%d%d", &na, &nb, &k, &m); int a[na], b[nb]; 
	for(i = 0; i < na; scanf("%d", &a[i++])); for(i = 0; i < nb; scanf("%d", &b[i++]));
	if(a[k - 1] < b[0])	printf("YES\n");
		else	printf("NO\n");		
	return 0;
}