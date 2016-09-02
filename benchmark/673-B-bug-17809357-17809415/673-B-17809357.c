#include<stdio.h>
//#include<conio.h>

int main(int argc, char *argv[])
{
	long n,m,i,tam,max=0,min=0;
	scanf("%ld",&n);
	scanf("%ld",&m);
	long a[m],b[m];
	for(i=0;i<m;i++){
		scanf("%ld",&a[i]);
		scanf("%ld",&b[i]);
		
		if (a[i]>b[i]){
			tam=a[i];
			a[i]=b[i];
			b[i]=tam;
		}
		if (i==0) {
			max=a[i];
			min=b[i];
			}
		if (a[i]>max) max=a[i];
		if (b[i]<min) min=b[i];
	}
	if ((min-max)>0) printf("%ld",min-max); else printf("0");
return 0;
}
		
		
