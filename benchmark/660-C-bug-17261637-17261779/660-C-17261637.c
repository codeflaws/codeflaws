#include<stdio.h>
int main(int argc, char *argv[]) {
	
	int n,k;
	scanf("%d%d",&n,&k);
	int i,a[n],zero[n],y=0,x=0;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int flag=0,low=0,high=0,j=0,l=0;
	i=0;
	if(a[0]==0 && k==0) {
		
		flag=3;
		while(a[i]!=1 && i<n)
			i++;
		low=high=i-1;
		if(i>n) {
		
			high= -1;
			low=0;
		}
	}
	while(i<n) {
		
		flag=0;
		if(a[i]==0) {
			
			zero[y++]=i;
			j++;
			flag=1;
		}
		if(j>k) {
			
			if((i-l-1)> (high-low)) {
				
				low=l;
				high=i-1;
			}
			l=zero[x++]+1;
			j--;
			flag=2;
		}
		i++;
		
	}
	if(flag==0 || flag==1) {
		
		if((i-1-l)>(high-low)) {
		
			low= l;
			high=i-1;
		}
	}
	if(low==high && a[low]!=1 && k==0) {
		
		 high= -1;
		 low=0;
	}
	printf("%d\n",high-low+1);
	for(i=0;i<low;i++)
		printf("%d ",a[i]);
	
	for(i=low;i<=high;i++)
		printf("1 ");
	
	for(i=high+1;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
