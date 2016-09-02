#include<stdio.h>
int main(int argc, char *argv[]) {
	int i,j,top=0,k,max=-999999999,as[15],arr[15],x,min=0,t=0,s=0;
	scanf("%d",&x);
	for(i=0;i<12;i++)
		scanf("%d",&arr[i]);
	for(i=0; i<12; i++)
	{
	for(j=0;j<12;j++){
		if(arr[j]>arr[min])
			min=j;		
	}
	as[t]=arr[min];
	t++;
	arr[min] = 0;
	}
	for(i=0;i<12;i++){
	s++;
	top+=as[i];
	if(top>=x&&x!=0){
	printf("%d",s);return 0;}
	else if(x==0){
	printf("0");return 0;}
	}
        return 0;
}
