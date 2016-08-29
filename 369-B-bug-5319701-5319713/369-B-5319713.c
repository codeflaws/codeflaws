#include<stdio.h>
int main(int argc, char *argv[]) {
     int n,k,l,r,s,s1,m,a,i;
	 while(scanf("%d%d%d%d%d%d",&n,&k,&l,&r,&s,&s1)!=EOF) {
		 m=s1/k;
		 a=s1-m*k;
		 if(a==0) {
		printf("%d",m);
		for(i=2;i<=k;i++)
			printf(" %d",m);
		 }
		 else {
			 printf("%d",m);
			 for(i=2;i<=k;i++) {
				 if(a>0){
					 a--;
				 printf(" %d",m+1);
				 }
				 else
					 printf(" %d",m);
			 }

		 }
		 if(n==k) 
			 continue;
		 m=(s-s1)/(n-k);
		 a=s-s1-m*(n-k);
		 if(a==0) {
			 for(i=1;i<=n-k;i++)
				 printf(" %d",m);
		 }
		 else {
			 for(i=1;i<=n-k;i++)  {
				 if(a>0) {
					 a--;
					 printf(" %d",m+1);
				 }
				 else
					 printf(" %d",m);
			 }

		 }
		 printf("\n");
	 }
	 return 0;
}
		 
