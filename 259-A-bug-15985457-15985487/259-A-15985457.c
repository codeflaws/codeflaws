#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
	int i,j;
	char arr[8][8];
	for(i=0;i<8;i++)
		for(j=0;j<8;j++)
		scanf("%c",&arr[i][j]);
	int f=0;
	 for(i=0;i<8;i++)
		   for(j=0;j<7;j++)
		 if(arr[i][j]!=arr[i][j+1])
						 f=1;
		 else {
			 printf("NO");
       return 0;
		 }
	 if(f)
		 printf("YES");
}
















