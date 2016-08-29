#include<stdio.h>

int main(int argc, char *argv[]){
	int arr[6], flag = 0, i;
	for(i = 0;i<6;i++){
		scanf("%d",&arr[i]);
	}
	int j = 0,k = 0, ans = 0;
	int temp = 2*arr[0] + 1;
	while(j<arr[5] && k<arr[1]){
		ans += temp;
		temp = temp+2;
		j++;
		k++; 
	}
	temp = temp-2;
	if(j<arr[5]){
		temp++;
		for(i=j;i<arr[5];i++){
			ans +=temp;
		}
		flag = 1;
	}
	else if(k<arr[1]){
		temp++;
		for(i=k;i<arr[1];i++){
			ans +=temp;
		}
		flag = 2;
	}
	else
	{
		for(i=0;i<arr[2];i++){
			ans +=temp;
			temp = temp-2;
		}
		printf("%d\n",ans);
		return 0;
	}
	if(flag == 1){
		temp = 2*arr[3] + 1;
		for(i=0;i<arr[4];i++){
			ans +=temp;
			temp = temp+2;
		}
	}
	else if(flag == 3){
		temp = 2*arr[3] + 1;
		for(i=0;i<arr[2];i++){
			ans +=temp;
			temp = temp+2;
		}	
	}
	printf("%d\n", ans);
	return 0;
}