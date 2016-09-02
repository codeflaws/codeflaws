#include<stdio.h>

int main(int argc, char *argv[]){
int n, a, l, r, left, right, start, end, i, j=1, loop, arr[102], count=0;

scanf("%d %d", &n, &a);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
left=a-1;
right=n-a;
l=left*2+1;
r=n-2*right-2;
	if(left<right){
		/*start=0;
		end=a+left-1;*/
		loop=left;
		
		for(i=l; i<n; i++){
			if(arr[i]==1){
				count++;
			}
		}
	}
	
	else{
		/*end=n-1;
		start=a-right-1;*/
		loop=right;
		
		for(i=0; i<=r; i++){
			if(arr[i]==1){
				count++;
			}
		}
	
	}
	
	if(arr[a-1]==1){
		count++;
	}
	
	printf("count now %d\n", count);
if(n>2){	
	while(loop>=0){
		if(arr[a-1-j]== 1 && arr[a-1+j]==1){
			count=count+2;
		}
		loop--;
		j++;
	}
}
	
	printf("%d", count);

return 0;
}

