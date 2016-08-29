#include<stdio.h>
#define max(a,b) (a>b?a:b)
int a[1000][1000],lhb_1[1000][1000],lhb_2[1000][1000],lhbina_1[1000][1000],lhbina_2[1000][1000];
int main(int argc, char *argv[]){
	int i,j,n,m;
	long long int tmp,top=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	lhb_1[0][0]=a[0][0];
	lhb_2[n-1][m-1]=a[n-1][n-2];
	lhbina_1[n-1][0]=a[n-1][0];
	lhbina_2[0][m-1]=a[0][m-1];
	for(i=1;i<n;i++){
		lhb_1[i][0]=lhb_1[i-1][0]+a[i][0];
		lhb_2[n-1-i][m-1]=lhb_2[n-i][m-1]+a[n-1-i][m-1];
		lhbina_1[n-1-i][0]=lhbina_1[n-i][0]+a[n-1-i][0];
		lhbina_2[i][m-1]=lhbina_2[i-1][m-1]+a[i][m-1];
	}
	for(i=1;i<m;i++){
		lhb_1[0][i]=lhb_1[0][i-1]+a[0][i];
		lhb_2[n-1][m-1-i]=lhb_2[n-1][m-i]+a[n-1][m-1-i];
		lhbina_1[n-1][i]=lhbina_1[n-1][i-1]+a[n-1][i];
		lhbina_2[0][m-1-i]=lhbina_2[0][m-i]+a[0][m-1-i];
	}
	for(i=1;i<n;i++){
		for(j=1;j<m;j++){
			lhb_1[i][j]=max(lhb_1[i-1][j],lhb_1[i][j-1])+a[i][j];
			lhb_2[n-1-i][m-1-j]=max(lhb_2[n-i][m-1-j],lhb_2[n-1-i][m-j])+a[n-1-i][m-1-j];
			lhbina_1[n-1-i][j]=max(lhbina_1[n-i][j],lhbina_1[n-1-i][j-1])+a[n-1-i][j];
			lhbina_2[i][m-1-j]=max(lhbina_2[i-1][m-1-j],lhbina_2[i][m-j])+a[i][m-1-j];
		}
	}
	for(i=1;i<n-1;i++){
		for(j=1;j<m-1;j++){
			tmp=lhb_1[i][j-1]+lhb_2[i][j+1]+lhbina_1[i+1][j]+lhbina_2[i-1][j];
			tmp=max(tmp,lhb_1[i-1][j]+lhb_2[i+1][j]+lhbina_1[i][j-1]+lhbina_2[i][j+1]);
			top=max(tmp,top);
		}
	}
	printf("%lld\n",top);
	return 0;
}
	
