#include<stdio.h>
#include<string.h>
    int main(int argc, char *argv[]){
		 int i,j,n,arr[100],ANS,max = 0;

		 scanf("%d",&n);

		 for(i = 0; i < n; i++)
			 scanf("%d",&arr[i]);

		 for(i = 0; i < n; i++)
		 { 
			 ANS = arr[i];
			 for(j = i ; j < n; j++)
			 {
				 ANS = ANS ^ arr[j];     
				 if(ANS > max)
					 max = ANS;
			 }
			 if(arr[i] > max)
				 max = arr[i];
		 }
		 printf("%d",max);

		 return 0;
	 }

