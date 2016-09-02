#include<stdio.h>
int i,j,k,s,yeni[600000],arr[600000],x,n,bas,orta,son;
void merge(int bas,int orta,int son){
	int i=bas,j=orta,s=bas;

	while(i < orta && j < son)
		yeni[s++] = (arr[i] < arr[j]) ? arr[i++] : arr[j++];

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
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&arr[i]);
	sort(1,n+1);
	
	int bas=n;
	int orta =n/2,sum=0;

	for(i=orta ; i>=1; i--)
		if(arr[bas] >= 2*arr[i])
			bas--,sum++;
	printf("%d",n-sum);
	return 0;
}
