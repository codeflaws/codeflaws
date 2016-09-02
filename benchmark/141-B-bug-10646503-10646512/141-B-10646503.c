#include<stdio.h>
int arr[1000005],a,x,y,tek=0,cift=2,s,i;
int main(int argc, char *argv[]){
	scanf("%d %d %d",&a,&x,&y);

	if(x >= a || x <= -a || y == 0 || y%a == 0){
		puts("-1");
		return 0;
	}
	arr[1] = 1;
	arr[2] = 2;

	for(i=3;i<=1000000;i++){
		if(i%2 == 0)
			s = cift+3,cift += 3;
		else
			s = tek+3,tek+=3;
			
		arr[i] = s;
	}
	y = y/a + 1;
	
	if((y < 3 || y%2 == 0) && (x >= a/2 || x<= -(a/2) )){
		puts("-1");
		return 0;
	}
	if(y<3){
		printf("%d",y);
		return 0;
	}
	if(y%2 == 0)
		printf("%d\n",arr[y]);
	else if(x>0)
		printf("%d\n",arr[y]+1);
	else if(x < 0)
		printf("%d\n",arr[y]);
	else
		printf("-1\n");

		
	return  0;
}
