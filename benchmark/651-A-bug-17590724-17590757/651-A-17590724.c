#include <stdio.h>
int ar[10000],er[10000];
int main(int argc, char *argv[]){
	int a,b,i,j,k;
	scanf("%d%d",&a,&b);
if(a==1 && b==2 || a==1 && a==1 || a==2 && b==1||a==2 && b==2){
printf("0\n");
return 0;
}

for(i=0;a && b;i++){
	if(a<b){
		a+=1;
		b-=2;
	}
	else{
		a-=2;
		b+=1;
	}
}
	printf("%d\n",i);
	return 0;
}
