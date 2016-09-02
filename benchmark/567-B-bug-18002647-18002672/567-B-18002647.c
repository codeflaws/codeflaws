#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
#include<ctype.h>
int arr[2000000];
int main(int argc, char *argv[]){
int a,b,c,d,ef;
scanf("%d",&a);
getchar();
int i; int cnt=0; int max=0;
for(i=0;i<a;i++){
	char in;
	int in1;
	scanf("%c%d",&in,&in1);
	getchar();
	
	if(arr[in1]==0 && in=='+'){
	cnt=0;
	for(c=1;c<=1000001;c++){
		if(arr[c] == 1)
			cnt++;
	}
	if(cnt>max)
		max=cnt;
	}
	if(arr[in1]==0 && in=='-'){
		max++;
	}
	if(arr[in1]==1 && in=='-')
		arr[in1]=0;

}
printf("%d",max);
return 0;
}
