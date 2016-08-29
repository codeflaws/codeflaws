#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	register int i;
	int n;
	int k;
	scanf("%d",&n);
	int mas[n+1];
	int nmas[n+1];
	for (i=0;i<n;i++)
		scanf("%d",&mas[i]);
	double a,aa,amin,amax;
	mas[n]=0;
	nmas[n]=0;
	a=1;
	amin=1;
	amax=100;
	if (mas[0]>99)
		amax=100000000;
	if (n<400)
		k=200;
	else
		k=35;
	int d=0;
	double mina,maxa;
	while (d<200){
		a=(amax+amin)/2;
		for (i=0;i<n;i++)
			nmas[i]=(int)(i+1)*a;
		for (i=0;i<n;i++){
			if (nmas[i]>mas[i]){
				amax=a;
				i=n;
//				printf("n>m %d a=%f\n",nmas[i],a);
			}
			if (nmas[i]<mas[i]){
				amin=a;
				i=n;
//				printf("n<m %d a=%f\n",nmas[i],a);
			}
		}
		d++;
	}
//	printf("\n%f n+1 = %f\n",a,a*(n+1));
	aa=a;
	amin=1;
	amax=a;
	d=0;
	while (d<k){
		a=(amax+amin)/2;
		for (i=0;i<n;i++)
			nmas[i]=(int)(i+1)*a;
		for (i=0;i<n;i++){
			if (nmas[i]>mas[i]){
				amax=a;
				i=n;
//				printf("n>m %d a=%f\n",nmas[i],a);
			}
			if (nmas[i]<mas[i]){
				amin=a;
				i=n;
//				printf("n<m %d a=%f\n",nmas[i],a);
			}
		}
		d++;
	}
	mina=a;
//	printf("\n%f n+1 = %f\n",a,a*(n+1));
	a=aa;
	amin=a;
	amax=100;
	if (mas[0]>99)
		amax=13299290;
	int mmm;
	mmm=(int)amin;
	if (mmm==1000)
		amin=1000.001;
	d=0;
	while (d<k){
		a=(amax+amin)/2;
		for (i=0;i<n;i++)
			nmas[i]=(int)(i+1)*a;
		for (i=0;i<n;i++){
			if (nmas[i]>mas[i]){
				amax=a;
				i=n;
//				printf("n>m %d a=%f\n",nmas[i],a);
			}
			if (nmas[i]<mas[i]){
				amin=a;
				i=n;
//				printf("n<m %d a=%f\n",nmas[i],a);
			}
		}
		d++;
	}
	maxa=a;
//	printf("\n%f n+1 = %f\n",a,a*(n+1));
	
	int ntmin,ntmax;
	ntmin=(int)(mina*(n+1));
	ntmax=(int)(maxa*(n+1));
	if (ntmin==ntmax)
		printf("unique\n%i",ntmin);
	else
		printf("not unique");

	
//	for (i=0;i<n;i++)
//		printf("%d ",nmas[i]);
	return 0;
}
