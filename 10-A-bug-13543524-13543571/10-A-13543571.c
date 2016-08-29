#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,a,b,c,d,e,i,j,s,w,f;
	scanf("%d %d %d %d %d %d",&n,&a,&b,&c,&d,&e);
	int ara[1000][1000];
	for (i=0;i<n;i++){
		for (j=0;j<2;j++){
			scanf("%d",&ara[i][j]);
		}
	}
	s=0;
	
	for (i=0;i<n;i++){
		s=s+(ara[i][1]-ara[i][0])*a;
	}
	f=0;
	for (i=0;i<n-1;i++){
		if ((d+e)<=(ara[i+1][0]-ara[i][1])){
			f=f+a*d+b*e+(ara[i+1][0]-ara[i][1]-d-e)*c;
		}
		else{
			if (d>=(ara[i+1][0]-ara[i][1])){
				f=f+(ara[i+1][0]-ara[i][1])*a;
			}
			else{
			
				f=f+a*d+(ara[i+1][0]-ara[i][1]-d)*b;
	
			}
		
		}
		
	}
	printf("%d",s+f);
	return 0;
}
