#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int n,m,i,j,tem,min;
	scanf("%d",&n);
	scanf("%d",&m);
	int s[m];
	for(i=0;i<m;i++)
	scanf("%d",&s[i]);
	for(i=0;i<m;i++)
		for(j=i+1;j<m;j++){
			if(s[j] < s[i]){
				tem = s[j];
				s[j] = s[i];
				s[i] = tem;
			}
		}
	
	min = abs(s[0] - s[n]);
	
	for(i=1;i<m-n;i++){
		if (abs(s[i] - s[i+n]) < min)
		min = abs(s[i] - s[i+n]);
	}	
	if (m <= n) min = 0;
	printf("%d",min);
	return 0;
}
