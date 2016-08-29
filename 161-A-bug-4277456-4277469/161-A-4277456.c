#include<stdio.h>

int main(int argc, char *argv[]){
	int m,n,x,y;

	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&x);
	scanf("%d",&y);

	int i=0;
	int nArr[n];
	int mArr[m];
	printf("%d\n", n);
	for(i=0;i<n;i++){
		scanf("%d",&nArr[i]);
	}

	for(i=0;i<m;i++){
		scanf("%d",&mArr[i]);
	}

	int j=0;
	i=0;
	int count=0;
	int mRes[m],nRes[m];

	while(i<n && j<m){
			if(nArr[i]-x<=mArr[j] && mArr[j]<=nArr[i]+y){
				mRes[count] = j;
				nRes[count] = i;
				count++;
	//			printf("\nres: %d %d\n", nArr[i],mArr[j]);
				i++; j++;
			}else if(nArr[i]-x>mArr[j]){
				j++;
			}else if(mArr[j]>nArr[i]+y){
				i++;				
			}
//			j++;
	}

	printf("%d\n", count);
	for (i = 0; i < count; i++)
	{
		printf("%d %d\n", nRes[i]+1,mRes[i]+1);
	}

	return 0;
}