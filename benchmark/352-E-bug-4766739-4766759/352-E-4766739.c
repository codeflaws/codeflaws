#include <stdio.h>
int main(int argc, char *argv[])
{
	long n,m,f[100][100];
	int i,j,k,t,a[100],b[100];
	scanf("%ld%ld",&n,&m);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++) scanf("%d",&b[i]);
    for(i=n;i<4*n;i++){a[i]=a[i%n];b[i]=b[i%n];}
	for(k=1;k<4*n;k+=2)
     for(i=0;i<4*n-k;i++){
		j=i+k;
		if(j==i+1) f[i][j]=a[i]+b[j];
		else{
		   f[i][j]=f[i+1][j-1]+a[i]+b[j];
		   for(t=i+1;t<j;t+=2)
			   if(f[i][j]>f[i][t]+f[t+1][j]) f[i][j]=f[i][t]+f[t+1][j];
		}
	 }
    if(m<=4) printf("%ld",f[0,n*m-1]);
	else{
		for(i=t=0;i<2*n;i++) if(f[i][i+2*n-1]<f[t][t+2*n-1]) t=i;
		printf("%ld",f[t][t+2*n-1]*(m/2-1)+f[0][2*n-1]);
	}
	return 0;
}


	