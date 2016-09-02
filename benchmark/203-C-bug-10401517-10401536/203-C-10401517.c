#include<stdio.h>
long long i,j,k,a,b,small,big,s,temp,sum,x,n,bas,orta,son;
typedef struct yapi{
	long long x,ind;
}yapi;

yapi arr[100005],yeni[100005];

void merge(int bas,int orta,int son){
	int i=bas,j=orta,s=bas;

	while(i < orta && j < son)
		yeni[s++] = (arr[i].x < arr[j].x) ? arr[i++] : arr[j++];

	while(i < orta) yeni[s++] = arr[i++];
	while(j < son)  yeni[s++] = arr[j++];

	for(i=bas;i<son;i++) arr[i]=yeni[i];
}

void sort(int bas,int son){
	if(bas+1 >= son) return;
	int orta = (bas+son)/2;
	sort(bas,orta);
	sort(orta,son);
	merge(bas,orta,son);
}

int main(int argc, char *argv[]){
	scanf("%lld %lld %lld %lld",&n,&sum,&small,&big);

	for(i=1;i<=n;i++)
		scanf("%lld %lld",&a,&b),arr[i].x = a*small+b*big,arr[i].ind = i;

	sort(1,n+1);
	
	if(arr[1].x > sum){
		printf("0");
		return 0;
	}
	while(temp<=sum){
	
		temp += arr[++s].x;
	}
	printf("%lld\n",s-1);
	for(i=1;i<s;i++)
		printf("%lld ",arr[i].ind);
			
	puts("");
	return 0;
}
