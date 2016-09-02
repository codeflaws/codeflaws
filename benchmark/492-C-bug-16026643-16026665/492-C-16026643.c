#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

long long int arr[100005][2];

int comp(const void*i,const void*j){
	return *(long long int*)i-*(long long int*)j;
}

long long int func(long long int a,long long int b){
	if(a<b) {
		return a;
	}
	else{ 
		return b;
	}
}

int main(int argc, char *argv[]){
	long long int n,r,avg,sum,i,j,temp,k,p,essay,q;
	sum=0;
	scanf("%lld%lld%lld",&n,&r,&avg);
	for(k=0;k<n;k++){
		scanf("%lld%lld",&arr[k][1],&arr[k][0]);
		sum=sum+arr[k][1];
	}

	qsort(arr,n,sizeof(arr)/100005,comp);

/*	for(k=0;k<n;k++){
		printf("%d %d\n",arr[k][0],arr[k][1]);
	}*/
	p=n*avg;
	k=0;
	essay=0;
//	printf("%d %d\n",sum,p);
	while(sum<p){
		if(arr[k][1]<5){
			q=func((p-sum),(r-arr[k][1]));
			essay=essay+q*arr[k][0];
			sum=sum+q;
		}
		k++;
	}

	printf("%lld\n",essay);

//	getch();
	return 0;
}

