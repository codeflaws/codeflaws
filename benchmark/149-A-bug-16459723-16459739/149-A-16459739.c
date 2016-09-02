#include<string.h>
#include<stdio.h>

int main(int argc, char *argv[]) {
int y,h[105]={0},x,i,say=0,j,cvp=0,k,sayc=0;
int a[105]={0};
scanf("%d",&y);
for(i=0;i<12;i++){
	scanf("%d",&x);
	h[x]++;}
if(y==0){
	printf("0");
	return 0;}

for(j=101;j>=0;j--){
		if(h[j]>0){
			x=h[j];
			for(i=1;i<=x;i++){
				a[say++]=j;
			}
		}
}
	for(i=0;i<12;i++){
		cvp+=a[i];
		sayc++;
		if(cvp>=y){
		printf("%d",sayc);
		return 0;
		}
	}
printf("-1");
		
	return 0;
}
